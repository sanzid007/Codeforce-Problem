#include<stdio.h>
int main()
{
    int i,n,p,q,count=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&p);
        scanf("%d",&q);
        if(q-p >= 2)
            count++;
    }

    printf("%d",count);

    return 0;
}
