.section .text

.global aw
.type aw, @function
aw:
	.insn r 0x33, 0, 0, a0, a0, a1
	#.insn i 0x03, 2, x1, x0, 4
	#lw a0, 0(x0)
	add x9, x8, x0 # x9=&A[0]
	add x10, x0, x0 # sum=0
	add x11, x0, x0 # i=0
	Loop:
		lw x12, 0(x9) # x12=A[i]
		add x10,x10,x12 # sum+=
		addi x9,x9,4 # &A[i++]
		addi x11,x11,1 # i++
		addi x13,x0,10 # x13=10
		blt x11,x13,Loop

	#addi x9, x9, 0
	lw a0, 16(x9) # x12=A[i]
	#.insn i 0x03, 7, a0, 16(x9)
	#add a0, x0, 12

	ret
