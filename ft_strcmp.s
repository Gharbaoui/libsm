section .text

global _ft_strcmp

_ft_strcmp:
	loop:
		mov al, byte [rdi]
		mov bl, byte [rsi]
		cmp al , 0
		je getout
		cmp bl, 0
		je getout
		cmp al, bl
		jne getout
		inc rdi
		inc rsi
		jmp loop
	getout:
		movzx rbx, bl
		movzx rax, al
		sub rax, rbx
		ret	
