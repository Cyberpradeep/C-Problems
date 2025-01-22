/**QUESTION:

Write a C program to perform arithmetic operations such as addition, subtraction, multiplication, modulo division and division.



INPUT & OUTPUT FORMAT:

Input consists of two integers
Output consist of integers


SAMPLE INPUT:

5
2


SAMPLE OUTPUT:

7
3
10
1
2  **/


#include<stdio.h>
int main()
{
    // fill the code
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    printf("%d\n",a+b);
    printf("%d\n",a-b);
    printf("%d\n",a*b);
    printf("%d\n",a%b);
    printf("%d\n",a/b);
    return 0;
}
