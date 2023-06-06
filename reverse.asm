.model small
.stack 100h
.data
    arr db ?
    nl equ 0dh,0ah
    msg db "Enter number of elements = $"
    msg1 db nl,"Input = $"
    msg2 db nl,"Reverse = $"
    choice db ?
    
.code        
main proc    
    mov ax, @data
    mov ds,ax
    
    lea dx,msg
    mov ah,9
    int 21h
    
    mov ah,1
    int 21h
    mov choice, al
    sub choice,30h   ;convert input
    
    lea dx,msg1
    mov ah,9
    int 21h
    
    lea si,arr    ;load array
    mov ah,1
    mov cl,choice ;counter         
    
    
    input_arr:
        int 21h
        mov [si],al
        
        inc si ;increase index
        dec cl ;decrease counter
        jnz input_arr ;input till cl=0
   
     lea dx,msg2
     mov ah,9
     int 21h
     
     sub si,1   ;remove space
     
     mov ah,2
     mov cl,choice
     
     output_arr:
        mov dl,[si]
        int 21h
        
        dec si ;decrease index 
        dec cl
        jnz output_arr    ;show output till cl=0
        
        
     ;exit
     mov ah,4ch
     int 21h   
   
    
main endp
end main