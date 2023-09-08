	.file	"if_else_compile.c"
	.text
	.globl	_get_cont
	.def	_get_cont;	.scl	2;	.type	32;	.endef
_get_cont:
	pushl	%ebp
	movl	%esp, %ebp
	movl	8(%ebp), %eax
	cmpl	%eax, 12(%ebp)
	jnb	L2
	movl	12(%ebp), %eax
	movl	(%eax), %eax
	jmp	L3
L2:
	movl	8(%ebp), %eax
	movl	(%eax), %eax
L3:

	popl	%ebp
	ret
	.ident	"GCC: (x86_64-win32-seh-rev1, Built by MinGW-Builds project) 13.1.0"
