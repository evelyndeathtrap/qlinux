section .data
        by db 42
section .text
_start:
        mov rcx, 1
        movq xmm1, rcx
        _concord:
        rdseed rcx
        rdrand rdx
        rdseed rax
        rdrand rbx
        psubq xmm4, xmm1
        psubq xmm3, xmm1
        mov rax, 0
        pause
