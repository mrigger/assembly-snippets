.globl mem_clear

# void memclear(void *ptr, size_t num);
# parameter ptr = rdi
# parameter num = rsi
mem_clear:
	mov $0, %al
	mov %rsi, %rcx
	cld
	rep stosb
	retq
