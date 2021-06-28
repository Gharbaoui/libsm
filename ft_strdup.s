section .text

global _ft_strdup
extern ___error
extern _malloc
extern _ft_strlen
extern _ft_strcpy

_ft_strdup:
	push rdi
	call _ft_strlen
	add rax, 1
	mov rdi, rax
	call _malloc
	cmp rax, 0
	je error
	pop rsi
	mov rdi, rax
	call _ft_strcpy
	ret
	error:
	call ___error
	mov r9, 12
	mov [rax], r9
	mov rax, 0
	ret
