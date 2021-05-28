#include <stdio.h>
int main()
{
    //Question 1
    int x = 2;
    printf("%d\n", 3 * x--); //(2-- stands meaningless)

    //Question 2
    int i = 10;
    i++;
    i *i;              // i referenceing to address of i without assigning
    printf("%d\n", i); // i++ alone store the result in i

    //Question 3
    int a = 1, b = 2;
    //      1   2   1     2       3     4
    int c = a + b + a++ + b++ + ++a + ++b;
    printf("a = %d, b = %d, c = %d\n", a, b, c); // a=3, b=4, c=13

    //Question 4
    int y = 0;
    //  0   -  0  +  1  -  1
    y = y++ - --y + ++y - y--;
    printf("%d\n", y);
    return 0;
}