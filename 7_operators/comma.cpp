#include <stdio.h>
int main()
{
    int a = 5, b = 5;
    a = 1, 2, 3;
    printf("%d", a); //(Priority for the values assigned to any variable is given from left to right)
    b = (1, 2, 3);
    printf("%d", b); //(Priority for the values inside a brackets () assigned to any variable is given from right to left.)
    return 0;
}