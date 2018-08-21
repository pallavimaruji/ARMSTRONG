#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n,a,old,sum=0,cnt=0;
    printf("Enter a no.");
    scanf("%d",&n);
    old=n;
    //count digits//
    while(n!=0)
    {
        n=n/10;
        cnt++;
    }
    n=old;
    //Generate new no.//
    while(n!=0)
    {
        a=n%10;
        sum+=pow(a,cnt);
        n=n/10;
    }
    //compare//
    if(old==sum)
        printf("No. is armstrong");
    else
        printf("no. is not armstrong");
        getch();
    return 0;
}
