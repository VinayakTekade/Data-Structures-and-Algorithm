#include <stdio.h>
int main()
{
    int x = 2;                                  // 2 = 00000010 1 = 00000001 in binary
    (x & 1) ? printf("true") : printf("false"); // 2 & 1 = 0
    return 0;
}