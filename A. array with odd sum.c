#include<stdio.h>

int main()
{
    int t,sum,i,j,arr[1000],n;
    scanf("%d",&t);

    for(i=0; i<t; i++)
    {
        scanf("%d",&n);
        sum=0;
        for(j=0;j<n; j++)
        {
            scanf("%d",&arr[j]);
            sum = sum + arr[j];
        }

        if((sum%2) == 0)
            printf("NO\n");
        else
            printf("YES\n");
    }

    return 0;
}
