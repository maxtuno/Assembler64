;///////////////////////////////////////////////////////////////////////////////
;//        copyright (c) 2012-2017 Oscar Riveros. all rights reserved.        //
;//                           oscar.riveros@peqnp.com                         //
;//                                                                           //
;//    without any restriction, Oscar Riveros reserved rights, patents and    //
;//  commercialization of this knowledge or derived directly from this work.  //
;///////////////////////////////////////////////////////////////////////////////

global _merge
;merge(long long*, long long*, unsigned long long, unsigned long long)
_merge:
    mov        r8, rcx 
    xor        r9d, r9d
    xor        eax, eax
g:
    cmp        r9, rdx 
    jne        a

    xor        eax, eax
    jmp        b
a:
    cmp        r8, rdx 
    jne        c

    mov        r10, qword [rdi + rax * 8]
    inc        rax
    jmp        d
c:
    cmp        rax, rcx
    jne        e

    mov        r10, qword [rdi + r8 * 8]
    inc        r8
    jmp        d
e:
    mov        r11, qword [rdi + r8 * 8]
    mov        r10, qword [rdi + rax * 8]
    cmp        r11, r10
    jge        f

    inc        r8
    mov        r10, r11
    jmp        d
f:
    inc        rax                 
d:
    mov        qword [rsi + r9 * 8], r10 
    inc        r9
    jmp        g
b:
    cmp        rax, r9             
    je         h

    mov        rdx, qword [rsi + rax * 8]
    mov        qword [rdi + rax * 8], rdx
    inc        rax
    jmp        b
h:
    ret      

global _merge_sort
;merge_sort(long long*, long long*, unsigned long long)
_merge_sort:        
    cmp        rdx, 0x1
    jbe        i

    push       r13
    mov        r13, rdx
    push       r12
    shr        r13, 0x1
    mov        r12, rsi
    push       rbp
    mov        rbp, rdi
    push       rbx
    mov        rbx, rdx
    mov        rdx, r13
    sub        rsp, 0x8
    call       _merge_sort
    lea        rdi, [rbp + r13 * 8]
    mov        rdx, rbx
    mov        rsi, r12
    sub        rdx, r13
    call       _merge_sort 
    pop        rax
    mov        rcx, r13
    mov        rdx, rbx
    mov        rsi, r12
    pop        rbx
    mov        rdi, rbp
    pop        rbp
    pop        r12
    pop        r13
    jmp        _merge
i:
    ret              