#include<stdio.h>
int main()
{
    int i,k,n,w,cost=0,res;
    scanf("%d", &k); // price of each banana
    scanf("%d", &n); // money he has
    scanf("%d", &w); // number of banana

    for(i=1; i<=w; i++)
    {
        cost = cost + (i*k);
    }

    if(cost > n)
    {
        res = cost-n;
        printf("%d", res);
    }
    else
        printf("0");

    return 0;
}
