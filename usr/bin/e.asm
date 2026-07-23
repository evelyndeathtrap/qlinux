section .text

global _start
_start:
  pause
  c:
  rdseed rcx
  jz _start
  jmp c
