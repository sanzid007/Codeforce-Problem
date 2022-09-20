#include<stdio.h>
int main()
{
    int n,arr[100],i;
    float res,sum=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
        sum += arr[i];
    }
    res = (sum/n);
    printf("%.8f", res);


    return 0;
}
