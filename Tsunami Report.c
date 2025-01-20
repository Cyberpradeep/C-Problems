/**QUESTION:
In Japan, there was a very huge Tsunami. Millions and millions worth buildings and property were destroyed. Many people lost their lives while some of them were injured and few were safe. A news reporter arrives at the spot to take the current survey regarding the situation of the people alive, dead and injured. He wanted to publish it in the newspaper and reach out to other countries asking to help the affected people. Can you please help him in this noble cause by writing a program to generate the newspaper report ?

INPUT & OUTPUT FORMAT:

Input consists of three integers corresponding to the number of people dead, injured and those who are still alive and safe.
Refer sample input and output for formatting specifications.


SAMPLE INPUT:

2000
3000
10000


SAMPLE OUTPUT:
1)Dead: 2000
2)Injured: 3000
3)Safe: 10000
Please help the people who are suffering!!!**/


#include<stdio.h>
int main()
{
    int dead,injured,safe;
    scanf("%d",&dead);
    scanf("%d",&injured);
    scanf("%d",&safe);
    printf("1)Dead: %d\n2)Injured: %d\n3)Safe: %d\nPlease help the people who are suffering!!!",dead,injured,safe);
    return 0;
}
