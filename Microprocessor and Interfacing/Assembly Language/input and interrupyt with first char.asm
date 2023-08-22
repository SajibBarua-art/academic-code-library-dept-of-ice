
.model
.data
.code

main proc 
        mov bh,0
        mov ah,1
        
        l1:
        int 21h
        inc bh
        cmp al,'M'
        je dos
        jmp l1
        
        dos: 
        add bh,30h
        
        mov ah,2
        mov dl,20h
        int 21h 
        
        mov ah,2
        mov dl,bh
        int 21h
        
        mov ah,4ch
        int 21h
        
        main endp 
end main