.MODEL SMALL
.DATA                                                                                    B
VAR DB ,'MR$'
.CODE
MAIN PROC
   
   MOV AX,@DATA
   MOV DX,AX
   
   MOV CX,10
   
   PRINT:
   MOV AH,9
   LEA DX,VAR
   INT 21H
   
   
   LOOP PRINT
   
  
   MOV AH,4CH
   INT 21H
   
  MAIN ENDP
  END MAIN