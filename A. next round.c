#include<stdio.h>
int main()
{
    int i,n,k,arr[50];
    scanf("%d",&n);
    scanf("%d",&k);

    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    i = 0;
    while(arr[i] >= arr[k-1] && arr[i] > 0)
    {
        i++;
        if(i == n)
            break;
    }
    printf("%d",i);

    return 0;
}
