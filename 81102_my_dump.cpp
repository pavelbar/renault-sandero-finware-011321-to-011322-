//INT0_ ROM 0000000000000001 00000001   R . . . . . .
.org 1
; External Interrupt Request 0
; public INT0_
INT0_:
movw    r0, r12
; End of function INT0_

//INT1_ ROM 0000000000000002 00000001   R . . . . . .
.org 2
; External Interrupt Request 1
; public INT1_
INT1_:
subi    r18, -0x2C ; 'L'
; End of function INT1_

//TIMER0_OVF0 ROM 0000000000000006 00000001   R . . . . . .
.org 6
; Timer/Counter0 Overflow
; public TIMER0_OVF0
TIMER0_OVF0:
muls    r16, r19
; End of function TIMER0_OVF0

//TIMER1_COMP1 ROM 0000000000000004 00000001   R . . . . . .
.org 4
; Timer/Counter1 Compare Match
; public TIMER1_COMP1
TIMER1_COMP1:
sub     r1, r0
; End of function TIMER1_COMP1

//TIMER1_OVF1 ROM 0000000000000005 00000001   R . . . . . .
.org 5
; Timer/Counter1 Overflow
; public TIMER1_OVF1
TIMER1_OVF1:
cp      r4, r4
; End of function TIMER1_OVF1

//UART_RX ROM 0000000000000007 00000001   R . . . . . .
.org 7
; UART, RX Complete
; public UART_RX
UART_RX:
subi    r16, -0x20 ; 'р'
; End of function UART_RX

//UART_UDRE ROM 0000000000000008 00000001   R . . . . . .
.org 8
; UART Data Register Empty
; public UART_UDRE
UART_UDRE:
add     r29, r3
; End of function UART_UDRE

//__RESET ROM 0000000000000000 00000001   R . . . . . .
;
; +-------------------------------------------------------------------------+
; |   This file has been generated by The Interactive Disassembler (IDA)    |
; |           Copyright (c) 2014 Hex-Rays, <support@hex-rays.com>           |
; |                      License info: 48-3057-7374-2C                      |
; |     Zhou Tao, Jiangsu Australia Sinuo Network Technology Co., Ltd.      |
; +-------------------------------------------------------------------------+
;
; Input MD5   : 12E17D1A5BCEE94C1CD58430B6BD1F2F
; Input CRC32 : C99BF9FF
; File Name   : C:\011321\81102_my_dump.bin
; Format      : Binary file
; Base Address: 0000h Range: 0000h - 7E80h Loaded length: 00007E80h
; Processor       : AVR [AT90S2313]
; Target assembler: AVR Assembler
; Segment type: Pure code
.CSEG ; ROM
.org 0
; Processor reset
; public __RESET
__RESET:
cp      r23, r13
; End of function __RESET