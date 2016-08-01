global _linear_search
;linear_search(long long*, unsigned long long, long long)
_linear_search:;
    mov        rax, rsi            
a:
    dec        rax                 
    cmp        qword [rdi + rax * 8], rdx
    je         b

    test       rax, rax
    jne        a
b:
    ret                            