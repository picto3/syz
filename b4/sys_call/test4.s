	.file	"test4.c"
	.section	.rodata
.LC0:
	.string	"Hello"
	.text
	.globl	main
	.type	main, @function
main:
.LFB0:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 32
	.cfi_offset 6, -32
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	$.LC0, -32(%rbp)
#APP
# 7 "test4.c" 1
	mov $1, %eax
# 0 "" 2
# 9 "test4.c" 1
	mov $1, %ebx
# 0 "" 2
# 11 "test4.c" 1
	mov -32(%rbp), %ecx
# 0 "" 2
# 13 "test4.c" 1
	mov $5, %edx
# 0 "" 2
# 14 "test4.c" 1
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
