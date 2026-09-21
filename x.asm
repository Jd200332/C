.model flat, c
.code

; A simple function that adds two numbers and returns the result
AddNumbers PROC, num1:DWORD, num2:DWORD
    mov eax, num1
    add eax, num2
    ret
AddNumbers ENDP

END
