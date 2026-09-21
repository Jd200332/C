; hello.asm - MASM x64
; Build: ml64 /c hello.asm
;        link /subsystem:console hello.obj kernel32.lib

extern GetStdHandle: proc
extern WriteConsoleA: proc
extern ExitProcess: proc

.data
    msg     db "Hello, World!", 13, 10
    msg_len equ $ - msg
    written dq 0

.code
main proc
    ; GetStdHandle(STD_OUTPUT_HANDLE = -11)
    mov     rcx, -11
    call    GetStdHandle
    mov     rbx, rax            ; save handle

    ; WriteConsoleA(handle, msg, len, &written, NULL)
    mov     rcx, rbx
    lea     rdx, msg
    mov     r8,  msg_len
    lea     r9,  written
    mov     qword ptr [rsp+20h], 0
    call    WriteConsoleA

    ; ExitProcess(0)
    xor     ecx, ecx
    call    ExitProcess

main endp
end