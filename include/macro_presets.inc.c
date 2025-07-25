#include "macro_presets.h"

struct MacroPreset {
    /* 0x00 */ const BehaviorScript *behavior;
    /* 0x04 */ s16 model;
    /* 0x06 */ s16 param;
};

static struct MacroPreset sMacroObjectPresets[] = {
    /* macro_yellow_coin_1               */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_yellow_coin_2               */ { bhvOneCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_moving_yellow_coin          */ { bhvMovingYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_moving_blue_coin            */ { bhvMovingBlueCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_5                     */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_coin_line_horizontal        */ { bhvCoinFormation, MODEL_NONE, COIN_FORMATION_BP_LINE_HORIZONTAL },
    /* macro_coin_ring_horizontal        */ { bhvCoinFormation, MODEL_NONE, COIN_FORMATION_BP_RING_HORIZONTAL },
    /* macro_coin_arrow                  */ { bhvCoinFormation, MODEL_NONE, COIN_FORMATION_BP_ARROW },
    /* macro_coin_line_horizontal_flying */ { bhvCoinFormation, MODEL_NONE, COIN_FORMATION_BP_LINE_HORIZONTAL | COIN_FORMATION_BP_FLAG_FLYING },
    /* macro_coin_line_vertical_flying   */ { bhvCoinFormation, MODEL_NONE, COIN_FORMATION_BP_LINE_VERTICAL | COIN_FORMATION_BP_FLAG_FLYING },
    /* macro_coin_ring_horizontal_flying */ { bhvCoinFormation, MODEL_NONE, COIN_FORMATION_BP_RING_HORIZONTAL | COIN_FORMATION_BP_FLAG_FLYING },
    /* macro_coin_ring_vertical_flying   */ { bhvCoinFormation, MODEL_NONE, COIN_FORMATION_BP_RING_VERTICAL | COIN_FORMATION_BP_FLAG_FLYING },
    /* macro_coin_arrow_flying           */ { bhvCoinFormation, MODEL_NONE, COIN_FORMATION_BP_ARROW | COIN_FORMATION_BP_FLAG_FLYING }, // unused
    /* macro_empty_15                    */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_16                    */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_17                    */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_18                    */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_19                    */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_bouncing_fireball_1         */ { bhvBouncingFireball, MODEL_NONE, 0 }, // unused
    /* macro_fish_spawner_many_blue      */ { bhvFishSpawner, MODEL_NONE, FISH_SPAWNER_BP_MANY_BLUE }, // unused
    /* macro_fish_spawner_few_blue       */ { bhvFishSpawner, MODEL_NONE, FISH_SPAWNER_BP_FEW_BLUE },
    /* macro_unknown_28                  */ { bhvBetaFishSplashSpawner, MODEL_NONE, 0 },
    /* macro_cannon_open                 */ { bhvCannon, MODEL_CANNON_BASE, 0 },
    /* macro_unknown_40                  */ { bhvCarrySomething1, MODEL_UNKNOWN_7D, 0 }, // unused
    /* macro_empty_52                    */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_80                    */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_bullet_bill_cannon          */ { bhvBulletBill, MODEL_BULLET_BILL, 0 }, // unused
    /* macro_empty_83                    */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_thwomp                      */ { bhvThwomp, MODEL_THWOMP, 0 }, // unused
    /* macro_empty_90                    */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_91                    */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_92                    */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_small_bully                 */ { bhvSmallBully, MODEL_BULLY, 0 },
    /* macro_big_bully                   */ { bhvSmallBully, MODEL_BULLY_BOSS, 0 }, // unused
    /* macro_empty_95                    */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_bouncing_fireball_2         */ { bhvBouncingFireball, MODEL_NONE, 0 },
    /* macro_flamethrower                */ { bhvFlamethrower, MODEL_NONE, 4 },
    /* macro_empty_99                    */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_100                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_101                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_102                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_103                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_104                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_105                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_116                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_117                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_118                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_119                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_120                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_121                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_122                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_124                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_sushi                       */ { bhvSushiShark, MODEL_SUSHI, 0 }, // unused
    /* macro_empty_127                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_128                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_129                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_130                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_131                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_132                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_133                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_134                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_135                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_136                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_142                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_143                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_144                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_145                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_146                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_147                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_148                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_149                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_150                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_155                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_157                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_158                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_159                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_160                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_161                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_162                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_163                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_164                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_168                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_small_penguin               */ { bhvSmallPenguin, MODEL_PENGUIN, 0 }, // unused
    /* macro_tuxies_mother_1             */ { bhvTuxiesMother, MODEL_PENGUIN, 0 }, // unused
    /* macro_tuxies_mother_2             */ { bhvTuxiesMother, MODEL_PENGUIN, 0 }, // unused
    /* macro_empty_173                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_174                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_175                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_176                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_177                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_178                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_179                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_180                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_181                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_182                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_183                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_184                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_185                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_186                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_187                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_188                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_197                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_198                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_199                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_200                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_201                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_202                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_203                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_204                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_205                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_206                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_207                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_208                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_209                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_210                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_211                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_212                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_213                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_214                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_215                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_216                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_217                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_218                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_219                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_220                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_221                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_222                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_223                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_224                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_225                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_226                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_227                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_228                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_229                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_230                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_231                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_232                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_233                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_chirp_chirp                 */ { bhvChirpChirp, MODEL_NONE, 0 },
    /* macro_beta_chest                  */ { bhvBetaChestBottom, MODEL_TREASURE_CHEST_BASE, 0 }, // unused
    /* macro_water_mine                  */ { bhvBowserBomb, MODEL_WATER_MINE, 0 }, // unused
    /* macro_fish_spawner_many_cyan      */ { bhvFishSpawner, MODEL_NONE, FISH_SPAWNER_BP_MANY_CYAN }, // unused
    /* macro_fish_spawner_few_cyan       */ { bhvFishSpawner, MODEL_NONE, FISH_SPAWNER_BP_FEW_CYAN },
    /* macro_jet_stream_ring_spawner_1   */ { bhvJetStreamRingSpawner, MODEL_WATER_RING, 0 }, // unused
    /* macro_jet_stream_ring_spawner_2   */ { bhvJetStreamRingSpawner, MODEL_WATER_RING, 0 }, // unused
    /* macro_empty_243                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_244                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_245                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_246                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_247                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_248                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_249                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_250                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_piranha_plant               */ { bhvPiranhaPlant, MODEL_PIRANHA_PLANT, 0 }, // unused
    /* macro_empty_254                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_whomp                       */ { bhvSmallWhomp, MODEL_WHOMP, 0 },
    /* macro_empty_257                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_264                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_265                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_266                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_267                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_268                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_269                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_270                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_271                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_272                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_273                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_274                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_275                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_276                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_277                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_278                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_279                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_280                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_282                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_283                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_284                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_285                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_286                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_287                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_288                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_mr_i                        */ { bhvMrI, MODEL_NONE, 0 },
    /* macro_empty_294                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_295                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_296                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_297                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_298                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_299                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_300                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_301                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_302                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_unknown_303                 */ { bhvYellowCoin, MODEL_UNKNOWN_54, 0 }, // unused
    /* macro_empty_304                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_305                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_306                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_307                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_308                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_309                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_310                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_311                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_312                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_330                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_331                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_332                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_333                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_334                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_335                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_336                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_337                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_338                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_344                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_345                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_346                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_347                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_348                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_349                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_355                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_356                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_361                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_362                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_363                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_364                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
    /* macro_empty_365                   */ { bhvYellowCoin, MODEL_YELLOW_COIN, 0 },
};

STATIC_ASSERT(ARRAY_COUNT(sMacroObjectPresets) == macro_count,
              "change this array if you are adding macro objects");
