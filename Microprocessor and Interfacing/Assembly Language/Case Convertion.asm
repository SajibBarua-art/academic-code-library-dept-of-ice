.MODEL SMALL
.STACK 100H
.DATA
.CODE

MAIN PROC
    MOV AH,1
    INT 21H  
    
    ADD AL,20H ;convert to lower case
    MOV DL,AL
    
    MOV AH,2
    INT 21H
    
   
    MOV AH,1
    INT 21H 
    
    SUB AL,20H ;;convert to upper case
    MOV DL,AL
    
    MOV AH,2
    INT 21H
    
    MOV AH,4CH
    INT 21H
    
    
    
    
  MAIN ENDP
END MAIN
