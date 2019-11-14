/*
Anna and Brian are sharing a meal at a restuarant and they agree to split the bill equally.
Brian wants to order something that Anna is allergic to though, and they agree that Anna won't pay for that item.
Brian gets the check and calculates Anna's portion. 
You must determine if his calculation is correct.
*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int a[100], k, n, b, i, s=0, finalbill;
    clrscr();
    printf("Enter the number of items ordered: ");
    scanf("%d",&n);
    printf("Enter the index of allergent: ");
    scanf("%d",&k);
    printf("Enter the costs of all items\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the amount that Brian offered: ");
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(i==k)
            continue;
        else
        {
            s=s+a[i];
        }
    
    }
    s=s/2;
    finalbill=b-s;
    if(finalbill==0)
    {
        printf("\nBon Appetit");
    }
    else
    {
        printf("%d",finalbill);
    }
    getch();

}