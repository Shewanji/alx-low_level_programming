section .data
	hello db 'Hello, Holberton', 0
	nl db 10, 0

section .text
	global main

	extern printf

main:
	push rbp
	mov rbp, rsp

	lea rdi, [hello]
	xor eax, eax
	call printf

	lea rdi, [nl]
	xor eax, eax
	call printf

	mov rsp, rbp
	pop rbp
	xor eax, eax
	ret

