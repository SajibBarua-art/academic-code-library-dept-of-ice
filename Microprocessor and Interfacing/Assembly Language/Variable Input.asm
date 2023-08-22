.model small
.stack 100h
.data 
   msg db ?
 
.code
main proc
    mov dx,@data
    mov ds,dx 
    
    mov ah,1
    int 21h
    mov msg,al
    
    mov ah,2
    mov dl,msg
    int 21h
    
    mov ah,4ch
    int 21h
    
    main endp
end main
    
    
    
    