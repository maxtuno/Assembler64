;///////////////////////////////////////////////////////////////////////////////
;//        copyright (c) 2012-2017 Oscar Riveros. all rights reserved.        //
;//                           oscar.riveros@peqnp.com                         //
;//                                                                           //
;//    without any restriction, Oscar Riveros reserved rights, patents and    //
;//  commercialization of this knowledge or derived directly from this work.  //
;///////////////////////////////////////////////////////////////////////////////

global _binary_search
;binary_search(long long*, unsigned long long, unsigned long long, long long)
_binary_search:
    cmp        rsi, rdx
    jae        a

    lea        rax, [rsi + rdx]
    shr        rax, 0x1
    cmp        qword [rdi + rax * 8], rcx
    jge        b

    lea        rsi, [rax + 1]
    mov        rax, rdx
c:
    mov        rdx, rax
    jmp        _binary_search
b:
    jg         c

    ret        
a:
    xor        eax, eax
    ret   