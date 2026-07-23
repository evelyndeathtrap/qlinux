section .text
global _start

_start:
 rdseed rax
 jz _start
 pause
