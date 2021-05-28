#include <stdio.h>
int main()
{
    //Question 1
    int a = 1, b = 3, c;   // 1 = 00000001 , 3 = 00000011
    c = b << a;            // 3 << 1 = 000000110 = 6 = c
    b = c * (b * (++a)--); // 6*3*2 = 36 = b
    a = a >> b;            // 1 >> 4 = 00100000
    printf("%d\n", b);

    //Question 2
    int q = 10, r = 20;
    //      10  -  9  +  19  -  20 +  9  -  20  +  10 -   19
    int s = q-- - q++ + --r - ++r + --q - r-- + ++q - r++;
    //        10        20         -20
    printf("q = %d, r = %d, s = %d\n", q, r, s);
}