section .text

global _ft_strcpy

_ft_strcpy:
	mov rax, rdi
	loop:
		mov r10, [rsi]
		cmp r10, 0
		mov [rdi], r10
		jz ended
		inc rsi   
		inc rdi
		jmp loop
	ended:
		ret
