extern printf; the C function beng called

section.data; Data section, and the initialized variables
msg:    db "Hello, Holberton", 0; string needs 0
fmt:    db "%s", 10, 0; printf format, "\n", '0'

section.text; main code section, initialized variables
 
   global main; the compiler entry point
   main:; program label
   push    rbp; the stack frame setup


   mov rdi,fmt
   mov rsi,msg
   mov rax,0; or can be xor rax, rax
   call printf; Calling the function


   pop rbp; restores the stack


   mov rax,0; return value
   ret; return
