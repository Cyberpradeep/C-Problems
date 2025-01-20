#include<stdio.h>
#include<math.h>
int main()
{
   
    float a;
    scanf("%f",&a);
    int b = floor(a);
    printf("%d\n",b);
    printf("%.1f\n",ceil(a));
    printf("%.1f\n",floor(a));
    return 0;
}
