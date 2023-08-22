
.MODEL SMALL
.STACK 100H

.DATA
    MSG0 DB 'ONE$'
    MSG1 DB 'ZERO$'
    MSG2 DB 'INVALID$'

.CODE
MAIN PROC

    MOV AX,@DATA
    MOV DS,AX

    MOV AH,1
    INT 21H
    MOV BL,AL

    CMP BL,'1'
    JE  LEVEL1 

    CMP BL,'0'
    JE LEVEL2

    JMP DOS

    LEVEL1:
        MOV AH,9
        LEA DX,MSG0
        INT 21H 
        MOV AH,4CH
        INT 21H

   LEVEL2:
        MOV AH,9
        LEA DX,MSG1
        INT 21H 
        MOV AH,4CH
        INT 21H
   DOS:
       MOV AH,9
       LEA DX,MSG2
       INT 21H

   MOV AH,4CH
   INT 21H
   MAIN ENDP
END MAIN