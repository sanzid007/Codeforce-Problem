#include<stdio.h>
int main()
{
    int x,count;
    scanf("%d",&x);

    count = x/5;
    if((x%5)!=0)
        count++;

    printf("%d",count);

    return 0;
}
