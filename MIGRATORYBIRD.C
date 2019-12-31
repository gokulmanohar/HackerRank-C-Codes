/*
You have been asked to help study the population of birds migrating across the continent.
Each type of bird you are interested in will be identified by an integer value.
Each time a particular kind of bird is spotted, its id number will be added to your array of sightings.
You would like to be able to find out which type of bird is most common given a list of sightings.
Your task is to print the type number of that bird and if two or more types of birds are equally common,
choose the type with the smallest ID number.
Sample Input 0
6
1 4 4 4 5 3

Sample Output 0
4
*/
#include <stdio.h>
#include <math.h>
long long  a[100000];
int n, b[5];
int census();
int sorted();
int most_common_bird_id(int, int, int, int, int);
int main()
{
    int i;
    clrscr();
    printf("Enter how many types of birds are there? ");
    scanf("%d",&n);
    printf("Enter the frequency of the sitings\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    census();
    getch();
    return 0;
}
int census()
{
    int onec = 0, twoc = 0, threec = 0, fourc = 0, fivec = 0;
    int j;
    for(j=0;j<=n;j++)
    {
        if (a[j]==1)
        {
            onec++;
        }
        else if(a[j]==2)
        {
                twoc++;
        }
        else if(a[j]==3)
        {
                threec++;
        }
        else if(a[j]==4)
        {
                fourc++;
        }
        else if(a[j]==5)
        {
                fivec++;
        }
    }
    printf("\n1=%d\n2=%d\n3=%d\n4=%d\n5=%d\n",onec,twoc,threec,fourc,fivec);
    //adding to array
    b[0]=onec;
    b[1]=twoc;
    b[2]=threec;
    b[3]=fourc;
    b[4]=fivec;
    //printing the unsorted array
    printf("\nThe unsorted array is\n");
    for(j=0;j<=4;j++)
    {
        printf("%d ",b[j]);
    }
    sorted();
    most_common_bird_id(onec,twoc,threec,fourc,fivec);
    return 0;
}
int sorted()
{
    int c, d, swap, j;
    //bubble sort
    for(c=0;c<5-1;c++)
    {
        for(d=0;d<5-c-1;d++)
        {
            if(b[d]<b[d+1])
            {
                swap= b[d];
                b[d]= b[d+1];
                b[d+1]= swap;
            }
        }
    }
    //printing the sorted array
    printf("\nThe sorted array is\n");
    for(j=0;j<=4;j++)
    {
        printf("%d ",b[j]);
    }
    return 0;
}
int most_common_bird_id(int onec, int twoc, int threec, int fourc, int fivec)
{
    if(b[0]==onec)
    {
        printf("\nBird with ID Number 1 is found more often");
        return 0;
    }
    if(b[0]==twoc)
    {
        printf("\nBird with ID Number 2 is found more often");
        return 0;
    }
    if(b[0]==threec)
    {
        printf("\nBird with ID Number 3 is found more often");
        return 0;
    }
    if(b[0]==fourc)
    {
        printf("\nBird with ID Number 4 is found more often");
        return 0;
    }
    if(b[0]==fivec)
    {
        printf("\nBird with ID Number 5 is found more often");
        return 0;
    }
return 0;
}