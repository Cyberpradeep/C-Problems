/** QUESTION:
A young man named d'Artagnan leaves home and travels to Paris to join the Musketeers of the guard. Although D'Artagnan is not able to join this elite corps immediately, he befriends the three most formidable musketeers of the age: Athos, Porthos and Aramis and gets involved in affairs of the state and court.

At that time, the cardinal was planning to dethrone the king, take the kingdom and remove the musketeers of the guard. Since the cardinal has spies mixed with the local public, d'Artagnan decides to send a message of his whereabouts to the three musketeers in a unique way. He gave a note to a boy which has the following message.

"I am at the midpoint of the line joining the farmhouse next to the palace and the lighthouse."

The three musketeers were puzzled. Can you help them find out the location of d'Artagnan? Given, the coordinates of the 2 places (x1,y1) and (x2,y2), write a program to find the location of d'Artagnan.

 

INPUT FORMAT: 

Input consists of 4 integers.
The first integer corresponds to x1. The second integer corresponds to y1. The third and fourth integers correspond to x2 and y2 respectively.


OUTPUT FORMAT:

The output consists of two floating point numbers which correspond to the location of d'Artagnan. All floating point values displayed should be corrected to 1 decimal place.


SAMPLE INPUT: 

2
4
10
15


SAMPLE OUTPUT: 

6.0 9.5
 **/

#include<stdio.h>
int main()
{
    // fill the code
    float x1, y1, x2, y2;
    scanf("%f", &x1);
    scanf("%f", &y1);
    scanf("%f", &x2);
    scanf("%f", &y2);
    float x = (x1+x2)/2;
    float y = (y1+y2)/2;
    printf("%.1f ", x);
    printf("%.1f",  y);
    return 0;
}
