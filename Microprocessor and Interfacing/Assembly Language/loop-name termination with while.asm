.model
.data
 msg db 'M$'
.code
main proc 
        mov ax,@data
        mov ds,ax 
        
       
        mov bh,0 
        
        l1:  
        mov ch,0
        l2:
        mov ah,9
        lea dx,msg
        int 21h 
        inc ch
        cmp ch,10
        jl l2
        
       
        
        new_line:
        mov ah,2
        mov dl,0ah
        int 21h
        mov dl,0dh
        int 21h
        
        inc bh
        cmp bh,5
        jl l1
        
        dos:
        mov ah,4ch
        int 21h
        
        main endp
end main