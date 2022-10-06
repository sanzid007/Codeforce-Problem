#include<stdio.h>
int main()
{
    int i,n,p,v,t,x,count=0;
    scanf("%d",&n);

    for(i=0; i<n ;i++)
    {
        scanf("%d",&p);
        scanf("%d",&v);
        scanf("%d",&t);

        x = p+v+t;
        if(x > 1)
            count++;
    }

    printf("%d",count);


    return 0;
}
