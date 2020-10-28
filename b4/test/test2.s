	.file	"test2.c"
	.section	.rodata
.LC0:
	.string	""
.LC1:
	.string	"KeyPress"
.LC2:
	.string	"KeyRelease"
.LC3:
	.string	"ButtonPress"
.LC4:
	.string	"ButtonRelease"
.LC5:
	.string	"MotionNotify"
.LC6:
	.string	"EnterNotify"
.LC7:
	.string	"LeaveNotify"
.LC8:
	.string	"FocusIn"
.LC9:
	.string	"FocusOut"
.LC10:
	.string	"KeymapNotify"
.LC11:
	.string	"Expose"
.LC12:
	.string	"GraphicsExpose"
.LC13:
	.string	"NoExpose"
.LC14:
	.string	"VisibilityNotify"
.LC15:
	.string	"CreateNotify"
.LC16:
	.string	"DestroyNotify"
.LC17:
	.string	"UnmapNotify"
.LC18:
	.string	"MapNotify"
.LC19:
	.string	"MapRequest"
.LC20:
	.string	"ReparentNotify"
.LC21:
	.string	"ConfigureNotify"
.LC22:
	.string	"ConfigureRequest"
.LC23:
	.string	"GravityNotify"
.LC24:
	.string	"ResizeRequest"
.LC25:
	.string	"CirculateNotify"
.LC26:
	.string	"CirculateRequest"
.LC27:
	.string	"PropertyNotify"
.LC28:
	.string	"SelectionClear"
.LC29:
	.string	"SelectionRequest"
.LC30:
	.string	"SelectionNotify"
.LC31:
	.string	"ColormapNotify"
.LC32:
	.string	"ClientMessage"
.LC33:
	.string	"MappingNotify"
	.data
	.align 64
	.type	event_names, @object
	.size	event_names, 280
event_names:
	.quad	.LC0
	.quad	.LC0
	.quad	.LC1
	.quad	.LC2
	.quad	.LC3
	.quad	.LC4
	.quad	.LC5
	.quad	.LC6
	.quad	.LC7
	.quad	.LC8
	.quad	.LC9
	.quad	.LC10
	.quad	.LC11
	.quad	.LC12
	.quad	.LC13
	.quad	.LC14
	.quad	.LC15
	.quad	.LC16
	.quad	.LC17
	.quad	.LC18
	.quad	.LC19
	.quad	.LC20
	.quad	.LC21
	.quad	.LC22
	.quad	.LC23
	.quad	.LC24
	.quad	.LC25
	.quad	.LC26
	.quad	.LC27
	.quad	.LC28
	.quad	.LC29
	.quad	.LC30
	.quad	.LC31
	.quad	.LC32
	.quad	.LC33
	.section	.rodata
.LC34:
	.string	"test window"
.LC35:
	.string	"WM_DELETE_WINDOW"
.LC36:
	.string	"got event: %s\n"
.LC37:
	.string	"t"
.LC38:
	.string	"i"
.LC39:
	.string	"Y"
	.text
	.globl	main
	.type	main, @function
main:
.LFB2:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$1472, %rsp
	movl	%edi, -1460(%rbp)
	movq	%rsi, -1472(%rbp)
	movl	$0, %edi
	call	XOpenDisplay
	movq	%rax, -24(%rbp)
	cmpq	$0, -24(%rbp)
	jne	.L2
	movl	$1, %eax
	jmp	.L38
.L2:
	movq	-24(%rbp), %rax
	movl	224(%rax), %eax
	movl	%eax, -28(%rbp)
	movq	-24(%rbp), %rax
	movq	232(%rax), %rax
	movl	-28(%rbp), %edx
	movslq	%edx, %rdx
	salq	$7, %rdx
	addq	%rdx, %rax
	movq	72(%rax), %rax
	movq	%rax, -40(%rbp)
	movq	-24(%rbp), %rax
	movq	232(%rax), %rdx
	movq	-24(%rbp), %rax
	movl	224(%rax), %eax
	cltq
	salq	$7, %rax
	addq	%rdx, %rax
	movq	16(%rax), %rax
	movq	%rax, -48(%rbp)
	movl	$0, -52(%rbp)
	movl	$0, -56(%rbp)
	movl	$600, -60(%rbp)
	movl	$600, -64(%rbp)
	movl	$1, -68(%rbp)
	movq	-24(%rbp), %rax
	movq	232(%rax), %rax
	movl	-28(%rbp), %edx
	movslq	%edx, %rdx
	salq	$7, %rdx
	addq	%rdx, %rax
	movq	96(%rax), %rax
	movl	%eax, -72(%rbp)
	movq	-24(%rbp), %rax
	movq	232(%rax), %rax
	movl	-28(%rbp), %edx
	movslq	%edx, %rdx
	salq	$7, %rdx
	addq	%rdx, %rax
	movq	88(%rax), %rax
	movl	%eax, -76(%rbp)
	movl	-76(%rbp), %r8d
	movl	-72(%rbp), %edi
	subq	$8, %rsp
	movl	-64(%rbp), %r9d
	movl	-60(%rbp), %r10d
	movl	-56(%rbp), %ecx
	movl	-52(%rbp), %edx
	movq	-48(%rbp), %rsi
	movq	-24(%rbp), %rax
	pushq	%r8
	pushq	%rdi
	movl	-68(%rbp), %edi
	pushq	%rdi
	movl	%r10d, %r8d
	movq	%rax, %rdi
	call	XCreateSimpleWindow
	addq	$32, %rsp
	movq	%rax, -88(%rbp)
	movq	$2129935, -96(%rbp)
	movq	-96(%rbp), %rdx
	movq	-88(%rbp), %rcx
	movq	-24(%rbp), %rax
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	XSelectInput
	movq	-88(%rbp), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	XMapWindow
	movq	-88(%rbp), %rcx
	movq	-24(%rbp), %rax
	movl	$.LC34, %edx
	movq	%rcx, %rsi
	movq	%rax, %rdi
	call	XStoreName
	movq	-24(%rbp), %rax
	movl	$1, %edx
	movl	$.LC35, %esi
	movq	%rax, %rdi
	call	XInternAtom
	movq	%rax, -112(%rbp)
	leaq	-112(%rbp), %rdx
	movq	-88(%rbp), %rsi
	movq	-24(%rbp), %rax
	movl	$1, %ecx
	movq	%rax, %rdi
	call	XSetWMProtocols
	movq	$0, -1136(%rbp)
	leaq	-1128(%rbp), %rdx
	movl	$0, %eax
	movl	$127, %ecx
	movq	%rdx, %rdi
	rep stosq
	movl	$0, -12(%rbp)
	movl	$0, -16(%rbp)
	movl	$300, -1216(%rbp)
	movl	$500, -1212(%rbp)
	movl	$100, -1264(%rbp)
	movl	$100, -1260(%rbp)
	movl	$0, -1220(%rbp)
	movl	$0, -4(%rbp)
	jmp	.L4
.L5:
	movl	-4(%rbp), %eax
	cltq
	movl	$0, -1208(%rbp,%rax,4)
	movl	-1216(%rbp), %eax
	movl	-4(%rbp), %edx
	movslq	%edx, %rdx
	addq	$4, %rdx
	movl	%eax, -1212(%rbp,%rdx,4)
	movl	-1212(%rbp), %eax
	leal	-5(%rax), %edx
	movl	-4(%rbp), %eax
	cltq
	addq	$8, %rax
	movl	%edx, -1216(%rbp,%rax,4)
	addl	$1, -4(%rbp)
.L4:
	cmpl	$2, -4(%rbp)
	jle	.L5
.L37:
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	XPending
	testl	%eax, %eax
	je	.L6
	leaq	-1456(%rbp), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	XNextEvent
	movl	-1456(%rbp), %eax
	cltq
	movq	event_names(,%rax,8), %rax
	movq	%rax, %rsi
	movl	$.LC36, %edi
	movl	$0, %eax
	call	printf
	movl	-1456(%rbp), %eax
	cmpl	$2, %eax
	jne	.L7
	leaq	-1168(%rbp), %rsi
	leaq	-1456(%rbp), %rax
	movl	$0, %r8d
	movl	$0, %ecx
	movl	$31, %edx
	movq	%rax, %rdi
	call	XLookupString
	movl	%eax, -100(%rbp)
	movl	-100(%rbp), %eax
	cltq
	movb	$0, -1168(%rbp,%rax)
	leaq	-1136(%rbp), %rax
	movq	%rax, %rdi
	call	strlen
	cmpq	$50, %rax
	jbe	.L8
	movb	$0, -1136(%rbp)
.L8:
	movl	$0, -4(%rbp)
	jmp	.L9
.L18:
	movl	-4(%rbp), %eax
	cltq
	movzbl	-1168(%rbp,%rax), %eax
	cmpb	$104, %al
	jne	.L10
	movl	-1216(%rbp), %eax
	subl	$4, %eax
	movl	%eax, -1216(%rbp)
	jmp	.L7
.L10:
	movl	-4(%rbp), %eax
	cltq
	movzbl	-1168(%rbp,%rax), %eax
	cmpb	$108, %al
	jne	.L11
	movl	-1216(%rbp), %eax
	addl	$4, %eax
	movl	%eax, -1216(%rbp)
	jmp	.L7
.L11:
	movl	-4(%rbp), %eax
	cltq
	movzbl	-1168(%rbp,%rax), %eax
	cmpb	$120, %al
	jne	.L12
	leaq	-1168(%rbp), %rdx
	leaq	-1136(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	strcat
	movl	$0, -8(%rbp)
	jmp	.L13
.L16:
	movl	-8(%rbp), %eax
	cltq
	movl	-1208(%rbp,%rax,4), %eax
	testl	%eax, %eax
	jne	.L14
	movl	-1216(%rbp), %eax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	addq	$4, %rdx
	movl	%eax, -1212(%rbp,%rdx,4)
	movl	-1212(%rbp), %eax
	leal	-5(%rax), %edx
	movl	-8(%rbp), %eax
	cltq
	addq	$8, %rax
	movl	%edx, -1216(%rbp,%rax,4)
	movl	-8(%rbp), %eax
	cltq
	movl	$1, -1208(%rbp,%rax,4)
	jmp	.L15
.L14:
	addl	$1, -8(%rbp)
.L13:
	cmpl	$2, -8(%rbp)
	jle	.L16
.L15:
	jmp	.L7
.L12:
	movl	-4(%rbp), %eax
	cltq
	movzbl	-1168(%rbp,%rax), %eax
	cmpb	$122, %al
	jne	.L17
	movl	$1, -16(%rbp)
	jmp	.L7
.L17:
	addl	$1, -4(%rbp)
.L9:
	movl	-4(%rbp), %eax
	cmpl	-100(%rbp), %eax
	jl	.L18
.L7:
	cmpl	$1, -16(%rbp)
	jne	.L19
	jmp	.L20
.L19:
	movl	-1456(%rbp), %eax
	cmpl	$2, %eax
	je	.L21
	movl	-1456(%rbp), %eax
	cmpl	$12, %eax
	jne	.L6
.L21:
	movq	-88(%rbp), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	XClearWindow
	movl	-1212(%rbp), %edi
	movl	-1216(%rbp), %ecx
	subq	$8, %rsp
	movq	-40(%rbp), %rdx
	movq	-88(%rbp), %rsi
	movq	-24(%rbp), %rax
	pushq	$1
	movl	$.LC37, %r9d
	movl	%edi, %r8d
	movq	%rax, %rdi
	call	XDrawString
	addq	$16, %rsp
	movl	$0, -8(%rbp)
	jmp	.L22
.L24:
	movl	-8(%rbp), %eax
	cltq
	movl	-1208(%rbp,%rax,4), %eax
	cmpl	$1, %eax
	jne	.L23
	movl	-8(%rbp), %eax
	cltq
	addq	$8, %rax
	movl	-1216(%rbp,%rax,4), %edi
	movl	-8(%rbp), %eax
	cltq
	addq	$4, %rax
	movl	-1212(%rbp,%rax,4), %ecx
	subq	$8, %rsp
	movq	-40(%rbp), %rdx
	movq	-88(%rbp), %rsi
	movq	-24(%rbp), %rax
	pushq	$1
	movl	$.LC38, %r9d
	movl	%edi, %r8d
	movq	%rax, %rdi
	call	XDrawString
	addq	$16, %rsp
	movl	-8(%rbp), %eax
	cltq
	addq	$8, %rax
	movl	-1216(%rbp,%rax,4), %eax
	leal	-1(%rax), %edx
	movl	-8(%rbp), %eax
	cltq
	addq	$8, %rax
	movl	%edx, -1216(%rbp,%rax,4)
	movl	-8(%rbp), %eax
	cltq
	addq	$8, %rax
	movl	-1216(%rbp,%rax,4), %eax
	testl	%eax, %eax
	jne	.L23
	movl	-8(%rbp), %eax
	cltq
	movl	$0, -1208(%rbp,%rax,4)
.L23:
	addl	$1, -8(%rbp)
.L22:
	cmpl	$2, -8(%rbp)
	jle	.L24
.L6:
	movl	-12(%rbp), %ecx
	movl	$274877907, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$8, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	imull	$4000, %eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	testl	%eax, %eax
	jne	.L25
	movq	-88(%rbp), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	XClearWindow
	movl	-1212(%rbp), %edi
	movl	-1216(%rbp), %ecx
	subq	$8, %rsp
	movq	-40(%rbp), %rdx
	movq	-88(%rbp), %rsi
	movq	-24(%rbp), %rax
	pushq	$1
	movl	$.LC37, %r9d
	movl	%edi, %r8d
	movq	%rax, %rdi
	call	XDrawString
	addq	$16, %rsp
	movl	$0, -8(%rbp)
	jmp	.L26
.L28:
	movl	-8(%rbp), %eax
	cltq
	movl	-1208(%rbp,%rax,4), %eax
	cmpl	$1, %eax
	jne	.L27
	movl	-8(%rbp), %eax
	cltq
	addq	$8, %rax
	movl	-1216(%rbp,%rax,4), %eax
	leal	-1(%rax), %edx
	movl	-8(%rbp), %eax
	cltq
	addq	$8, %rax
	movl	%edx, -1216(%rbp,%rax,4)
	movl	-8(%rbp), %eax
	cltq
	addq	$8, %rax
	movl	-1216(%rbp,%rax,4), %edi
	movl	-8(%rbp), %eax
	cltq
	addq	$4, %rax
	movl	-1212(%rbp,%rax,4), %ecx
	subq	$8, %rsp
	movq	-40(%rbp), %rdx
	movq	-88(%rbp), %rsi
	movq	-24(%rbp), %rax
	pushq	$1
	movl	$.LC38, %r9d
	movl	%edi, %r8d
	movq	%rax, %rdi
	call	XDrawString
	addq	$16, %rsp
	movl	-8(%rbp), %eax
	cltq
	addq	$8, %rax
	movl	-1216(%rbp,%rax,4), %eax
	testl	%eax, %eax
	jg	.L27
	movl	-8(%rbp), %eax
	cltq
	movl	$0, -1208(%rbp,%rax,4)
.L27:
	addl	$1, -8(%rbp)
.L26:
	cmpl	$2, -8(%rbp)
	jle	.L28
.L25:
	movl	-1260(%rbp), %edi
	movl	-1264(%rbp), %ecx
	subq	$8, %rsp
	movq	-40(%rbp), %rdx
	movq	-88(%rbp), %rsi
	movq	-24(%rbp), %rax
	pushq	$1
	movl	$.LC39, %r9d
	movl	%edi, %r8d
	movq	%rax, %rdi
	call	XDrawString
	addq	$16, %rsp
	movl	-12(%rbp), %ecx
	movl	$1759218605, %edx
	movl	%ecx, %eax
	imull	%edx
	sarl	$12, %edx
	movl	%ecx, %eax
	sarl	$31, %eax
	subl	%eax, %edx
	movl	%edx, %eax
	imull	$10000, %eax, %eax
	subl	%eax, %ecx
	movl	%ecx, %eax
	testl	%eax, %eax
	jne	.L29
	movq	-88(%rbp), %rdx
	movq	-24(%rbp), %rax
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	XClearWindow
	movl	-1212(%rbp), %edi
	movl	-1216(%rbp), %ecx
	subq	$8, %rsp
	movq	-40(%rbp), %rdx
	movq	-88(%rbp), %rsi
	movq	-24(%rbp), %rax
	pushq	$1
	movl	$.LC37, %r9d
	movl	%edi, %r8d
	movq	%rax, %rdi
	call	XDrawString
	addq	$16, %rsp
	movl	-1220(%rbp), %eax
	testl	%eax, %eax
	jne	.L30
	movl	-1264(%rbp), %eax
	addl	$1, %eax
	movl	%eax, -1264(%rbp)
	movl	-1260(%rbp), %edi
	movl	-1264(%rbp), %ecx
	subq	$8, %rsp
	movq	-40(%rbp), %rdx
	movq	-88(%rbp), %rsi
	movq	-24(%rbp), %rax
	pushq	$1
	movl	$.LC39, %r9d
	movl	%edi, %r8d
	movq	%rax, %rdi
	call	XDrawString
	addq	$16, %rsp
	movl	-1264(%rbp), %eax
	cmpl	$594, %eax
	jle	.L29
	movl	$1, -1220(%rbp)
	jmp	.L29
.L30:
	movl	-1264(%rbp), %eax
	subl	$1, %eax
	movl	%eax, -1264(%rbp)
	movl	-1260(%rbp), %edi
	movl	-1264(%rbp), %ecx
	subq	$8, %rsp
	movq	-40(%rbp), %rdx
	movq	-88(%rbp), %rsi
	movq	-24(%rbp), %rax
	pushq	$1
	movl	$.LC39, %r9d
	movl	%edi, %r8d
	movq	%rax, %rdi
	call	XDrawString
	addq	$16, %rsp
	movl	-1264(%rbp), %eax
	cmpl	$5, %eax
	jg	.L29
	movl	$0, -1220(%rbp)
.L29:
	addl	$1, -12(%rbp)
	movl	$0, -8(%rbp)
	jmp	.L32
.L34:
	movl	-1264(%rbp), %eax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	addq	$4, %rdx
	movl	-1212(%rbp,%rdx,4), %edx
	subl	$2, %edx
	cmpl	%edx, %eax
	jl	.L33
	movl	-1264(%rbp), %eax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	addq	$4, %rdx
	movl	-1212(%rbp,%rdx,4), %edx
	addl	$5, %edx
	cmpl	%edx, %eax
	jg	.L33
	movl	-1260(%rbp), %eax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	addq	$8, %rdx
	movl	-1216(%rbp,%rdx,4), %edx
	subl	$5, %edx
	cmpl	%edx, %eax
	jl	.L33
	movl	-1260(%rbp), %eax
	movl	-8(%rbp), %edx
	movslq	%edx, %rdx
	addq	$8, %rdx
	movl	-1216(%rbp,%rdx,4), %edx
	addl	$2, %edx
	cmpl	%edx, %eax
	jg	.L33
	movl	$1, -16(%rbp)
.L33:
	addl	$1, -8(%rbp)
.L32:
	cmpl	$2, -8(%rbp)
	jle	.L34
	cmpl	$1, -16(%rbp)
	jne	.L35
	jmp	.L20
.L35:
	movl	-1456(%rbp), %eax
	cmpl	$33, %eax
	jne	.L36
	movq	-1400(%rbp), %rax
	movq	%rax, %rdx
	movq	-112(%rbp), %rax
	cmpq	%rax, %rdx
	jne	.L36
	jmp	.L20
.L36:
	jmp	.L37
.L20:
	movq	-24(%rbp), %rax
	movq	%rax, %rdi
	call	XCloseDisplay
	movl	$0, %eax
.L38:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE2:
	.size	main, .-main
	.ident	"GCC: (Debian 4.9.2-10) 4.9.2"
	.section	.note.GNU-stack,"",@progbits
