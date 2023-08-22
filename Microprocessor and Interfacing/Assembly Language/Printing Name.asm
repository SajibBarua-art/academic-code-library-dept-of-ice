.model small
.stack 100h
.data
.code
main proc 
    
     mov dl,'M' ;dl is the register used to display
     mov ah,2   ;character output function
     int 21h    ;stored in al register
  
               
     mov dl,'E'
     mov ah,2
     int 21h
     
            
     mov dl,'H'
     mov ah,2
     int 21h
     
     mov dl,'E'
     mov ah,2
     int 21h
     
     mov dl,'D'
     mov ah,2
     int 21h
     
    
     
     mov dl,'I'
     mov ah,2
     int 21h  

     
    main endp

end main