// assembler directives
.set noat      // allow manual use of $at
.set noreorder // don't insert nops after branches

#include "macros.inc"


.section .text, "ax"

// This file is handwritten.

glabel decompress
    lw    $t8, 4($a0)
    lw    $a3, 8($a0)
    lw    $t9, 0xc($a0)
    move  $a2, $zero
    add   $t8, $t8, $a1
    add   $a3, $a3, $a0
    add   $t9, $t9, $a0
    addi  $a0, $a0, 0x10
.L8027EF50:
    bnez  $a2, .L8027EF64
     nop
    lw    $t0, ($a0)
    li    $a2, 32
    addi  $a0, $a0, 4
.L8027EF64:
    slt   $t1, $t0, $zero
    beqz  $t1, .L8027EF88
     nop
    lb    $t2, ($t9)
    addi  $t9, $t9, 1
    sb    $t2, ($a1)
    addi  $a1, $a1, 1
    b     .L8027EFBC
     nop
.L8027EF88:
    lhu   $t2, ($a3)
    addi  $a3, $a3, 2
    srl   $t3, $t2, 0xc
    andi  $t2, $t2, 0xfff
    sub   $t1, $a1, $t2
    addi  $t3, $t3, 3
.L8027EFA0:
    lb    $t2, -1($t1)
    addi  $t3, $t3, -1
    addi  $t1, $t1, 1
    sb    $t2, ($a1)
    addi  $a1, $a1, 1
    bnez  $t3, .L8027EFA0
     nop
.L8027EFBC:
    sll   $t0, $t0, 1
    addi  $a2, $a2, -1
    bne   $a1, $t8, .L8027EF50
     nop
    jr    $ra
     nop
