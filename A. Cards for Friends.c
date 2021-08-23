#include<stdio.h>
int main()
{
    int t,w,h,n,res;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&w);
        scanf("%d",&h);
        scanf("%d",&n);

        res = 1;
        while(w%2 == 0)
        {
            w = w/2;
            res = res*2;
        }
        while(h%2 == 0)
        {
            h = h/2;
            res = res*2;
        }

        if(res >= n)
            printf("YES\n");
        else
            printf("NO\n");
    }


    return 0;
}
