// tumbling_bridge.inc.c

#include "levels/wf/header.h"
#include "levels/lll/header.h"

struct TumblingBridgeData {
    s16 numBridgeSections;
    s16 bridgeRelativeStartingXorZ;
    s16 platformWidth;
    s16 model;
    const Collision *collision;
};

struct TumblingBridgeData sTumblingBridgeData[] = {
    /* TUMBLING_BRIDGE_BP_WF    */ { 9, -512, 128, MODEL_WF_TUMBLING_BRIDGE_PART,
                                     wf_seg7_collision_tumbling_bridge },
    /* TUMBLING_BRIDGE_BP_LLL   */
    { 9, -512, 128, MODEL_LLL_FALLING_PLATFORM, lll_seg7_collision_0701D21C },
};

void bhv_tumbling_bridge_platform_loop(void) {
    switch (o->oAction) {
        case 0:
            if (gMarioObject->platform == o) {
                o->oAction++;
                o->oTumblingBridgeUnkF4 = random_sign() * 0x80;
            }
            break;

        case 1:
            cur_obj_update_floor_height();
            if (o->oTimer > 5) {
                o->oAction++;
                cur_obj_play_sound_2(SOUND_GENERAL_PLATFORM);
            }
            break;

        case 2:
            if (o->oAngleVelPitch < 0x400) {
                o->oAngleVelPitch += 0x80;
            }
            if (o->oAngleVelRoll > -0x400 && o->oAngleVelRoll < 0x400) {
                o->oAngleVelRoll += o->oTumblingBridgeUnkF4; // acceleration?
            }
            o->oGravity = -3.0f;
            cur_obj_rotate_face_angle_using_vel();
            cur_obj_move_using_fvel_and_gravity();
            if (o->oPosY < o->oFloorHeight - 300.0f) {
                o->oAction++;
            }
            break;

        case 3:
            break;
    }

    if (o->parentObj->oAction == 3) {
        obj_mark_for_deletion(o);
    }
}

void tumbling_bridge_act_1(void) {
    struct Object *platformObj;
    s32 i;
    s32 bridgeID = o->oBhvParams2ndByte;
    s32 relativePlatformX;
    s32 relativePlatformZ;
    s32 relativePlatformY = 0;
    s32 relativeInitialPlatformY = 0;

    for (i = 0; i < sTumblingBridgeData[bridgeID].numBridgeSections; i++) {
        relativePlatformX = 0;
        relativePlatformZ = 0;

        relativePlatformZ = sTumblingBridgeData[bridgeID].bridgeRelativeStartingXorZ
                            + sTumblingBridgeData[bridgeID].platformWidth * i;

        platformObj = spawn_object_relative(
            0, relativePlatformX, relativePlatformY + relativeInitialPlatformY, relativePlatformZ, o,
            sTumblingBridgeData[bridgeID].model, bhvTumblingBridgePlatform);

        obj_set_collision_data(platformObj, sTumblingBridgeData[bridgeID].collision);
    }

    o->oAction = 2;
}

void tumbling_bridge_act_2(void) {
    cur_obj_hide();
    if (cur_obj_has_behavior(bhvLLLTumblingBridge)) {
        cur_obj_unhide();
    } else if (o->oDistanceToMario > 1200.0f) {
        o->oAction = 3;
        cur_obj_unhide();
    }
}

void tumbling_bridge_act_3(void) {
    cur_obj_unhide();
    o->oAction = 0;
}

void tumbling_bridge_act_0(void) {
    if (cur_obj_has_behavior(bhvLLLTumblingBridge) || o->oDistanceToMario < 1000.0f) {
        o->oAction = 1;
    }
}

void (*sTumblingBridgeActions[])(void) = {
    tumbling_bridge_act_0,
    tumbling_bridge_act_1,
    tumbling_bridge_act_2,
    tumbling_bridge_act_3,
};

void bhv_tumbling_bridge_loop(void) {
    cur_obj_call_action_function(sTumblingBridgeActions);
}
