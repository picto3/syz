	.file	"test5.c"
	.section	.rodata
.LC0:
	.string	"Hello, World!\n"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	$.LC0, -16(%rbp)
#APP
# 6 "test5.c" 1
	mov $1, %%rax
# 0 "" 2
# 7 "test5.c" 1
	mov $1, %%rdi
# 0 "" 2
# 8 "test5.c" 1
	mov -16(%rbp), %rsi
# 0 "" 2
# 9 "test5.c" 1
	mov $14, %%rdx
# 0 "" 2
# 10 "test5.c" 1
	syscall
# 0 "" 2
#NO_APP
	movl	%eax, -4(%rbp)
	movl	$0, %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE0:
	.size	main, .-main
	.ident	"GCC: (Debian 4.9.2-10) 4.9.2"
	.section	.note.GNU-stack,"",@progbits
