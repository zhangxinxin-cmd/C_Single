	.file	"switch-caseCompile.c"
	.text
	.globl	_sw_test
	.def	_sw_test;	.scl	2;	.type	32;	.endef
_sw_test:
	pushl	%ebp
	movl	%esp, %ebp
	subl	$16, %esp
	cmpl	$17, 8(%ebp)
	je	L2  
	cmpl	$17, 8(%ebp)
	jg	L3
	cmpl	$10, 8(%ebp)
	je	L4
	cmpl	$12, 8(%ebp)
	je	L5
	jmp	L3
L4:
	movl	16(%ebp), %eax
	addl	$50, %eax
	movl	%eax, -4(%ebp)
	jmp	L6
L5:
	movl	12(%ebp), %eax
	addl	$50, %eax
	movl	%eax, -4(%ebp)
	jmp	L6
L2:
	movl	12(%ebp), %eax
	movl	%eax, -4(%ebp)
L3:
	movl	8(%ebp), %eax
	movl	%eax, -4(%ebp)
L6:
	movl	-4(%ebp), %eax
	leave
	ret
	.ident	"GCC: (x86_64-win32-seh-rev1, Built by MinGW-Builds project) 13.1.0"
