/*
Two cats and a mouse are at various positions on a line.
You will be given their starting positions.
Your task is to determine which cat will reach the mouse first, assuming the mouse doesn't move and the cats travel at equal speed.
If the cats arrive at the same time, the mouse will be allowed to move and it will escape while they fight.
Sample Input 0

2
1 2 3
1 3 2
Sample Output 0

Cat B
Mouse C
*/
#include <stdio.h>
#include <math.h>
char ch;
char catandmouse();
int main()
{
    int i, n;
    clrscr();
    printf("Enter the number of times you want to execute this: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nItteration number: %d\n",i+1);
        ch=catandmouse();
        if(ch=='A')
    {
        printf("Cat A");
    }
    else if(ch=='B')
    {
        printf("Cat B");
    }
    else
    {
        printf("Mouse C");
    }
    if(i!=n-1)
    {
        printf("\n");
    }
    else
    {
        continue;
    }
    }
    
    getch();
    return 0;
}
char catandmouse()
{
    int a, b, c;
    int adiff, bdiff;
    printf("Enter the values:\n");
    scanf("%d %d %d",&a,&b,&c);
    printf("\nEntered values are: %d, %d, %d\n",a, b, c);
    adiff=abs(c-a);
    bdiff=abs(c-b);
    printf("\nAbsolute values are: %d, %d\n",adiff,bdiff);
    if(adiff<bdiff)
    {
        return 'A';
    }
    else if(bdiff<adiff)
    {
        return 'B';
    }
    else
    {
        return 'C';
    }
    
}