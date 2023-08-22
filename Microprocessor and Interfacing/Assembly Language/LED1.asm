CODE SEGMENT
ASSUME CS:CODE,DS:CODE,ES:CODE,SS:CODE

PPIC_C EQU 1EH
PPIC EQU 1CH
PPIB EQU 1AH
PPIA EQU 18H

ORG 1000H
MOV AL,10000000B
OUT PPIC_C,AL

MOV AL,11111111B
OUT PPIA,AL

L1:
MOV SI,OFFSET FONT

MOV AH,11111110B

L2:
MOV AL,BYTE PTR CS:[SI]
OUT PPIC,AL
MOV AL,AH
OUT PPIB,AL
CALL TIMER
INC SI
CLC
ROL AH,1
JC L2
JMP L1
TIMER:
MOV CX,300
TIMER1:
NOP
NOP
NOP
NOP
LOOP TIMER1
RET

FONT:
DB 00000000B
DB 11111100B
DB 00010010B
DB 00010001B
DB 00010001B
DB 00010010B
DB 11111100B
DB 00000000B
CODE ENDS
END