.MODEL SMALL
.STACK 100H
.DATA
.CODE
MAIN PROC
    
    MOV AH,1
    INT 21H
    
    MOV BL,2
    DIV BL
    CMP AH,0
    JE L1
    JMP L2
    
    L1:
    MOV DL,'E'
    MOV AH,2
    INT 21H
    
    MOV AH,4CH
    INT 21H
    
    L2:
    MOV DL,'0'
    MOV AH,2
    INT 21H
    
    MOV AH,4CH
    INT 21H
    
    MAIN ENDP
END MAIN