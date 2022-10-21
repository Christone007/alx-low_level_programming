; This is an assembly program

global _start

section .rodata
message: db "Hello, Holberton", 0xa
message_len: equ $-message

section .text
_start:
mov rax, 1
mov rdi, 1
mov rsi, message
mov rdx, message_len
syscall

mov rax, 60
mov rdi, 0
syscall
