section .text
global _ft_strlen

_ft_strlen:
	mov rax, 0
	strlen_next:
		cmp byte [rdi], 0
		jz ended
		inc rdi
		inc rax
		jmp strlen_next
	ended:
		ret
