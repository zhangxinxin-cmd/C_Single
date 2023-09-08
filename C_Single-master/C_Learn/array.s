	.file	"array.c"
	.text
	.globl	_method
	.def	_method;	.scl	2;	.type	32;	.endef
_method:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$16, %esp
	movl	$0, -8(%ebp)
	movl	$10, -16(%ebp)
	movl	$20, -12(%ebp)
	movl	$0, -4(%ebp)
	jmp	L2
L3:
	movl	-4(%ebp), %eax
	movl	-16(%ebp,%eax,4), %eax
	addl	%eax, -8(%ebp)
	addl	$1, -4(%ebp)
L2:
	cmpl	$1, -4(%ebp)
	jle	L3
	movl	-8(%ebp), %eax
	leave
	ret
	.ident	"GCC: (x86_64-win32-seh-rev1, Built by MinGW-Builds project) 13.1.0"
