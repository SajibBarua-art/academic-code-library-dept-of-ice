.model
.data
 msg db 'M$'
.code
main proc 
        mov ax,@data
        mov ds,ax 
        
        mov cx,10 
        mov dh,5
     
        
        
        l1: 
        mov ah,9
        lea dx,msg
        int 21h
        loop l1
        
        new_line:
        mov ah,2
        mov dl,0ah
        int 21h
        mov dl,0dh
        int 21h
        
        inc dh
        cmp dh,5
        jl l1
        jmp dos
        
        dos:
        
        mov ah,4ch
        int 21h
        
        main endp
end main