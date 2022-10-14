#include<stdio.h>
int main()
{
    int t,arr[1000],i,x,n,a,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        a=0;
        b=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&x);
            if (x % 2 != i % 2)
            {
                if (i % 2 == 0)
                    a++;
                else
                    b++;
            }
        }

        if (a != b)
            printf("-1\n");
        else
            printf("%d\n",a);
    }
}

