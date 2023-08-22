.model
.data
 msg db 'M$'
.code
main proc 
        mov ax,@data
        mov ds,ax 
        
       
        mov bx,5
        l1:
        
        mov cx,10
        l2:
        mov ah,9
        lea dx,msg
        int 21h
        loop l2
        
        new_line:
        mov ah,2
        mov dl,0ah
        int 21h
        mov dl,0dh
        int 21h
        
        dec bx
        jnz l1
        
        dos:
        mov ah,4ch
        int 21h
        
        main endp
end main