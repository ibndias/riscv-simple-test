.section .text

.global aw
.type aw, @function
aw:
	.insn r 0x33, 0, 0, a0, a0, a1
	ret
