#include<stdio.h>
int main()
{
    int t,a,b,res;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        if(a%b == 0)
           printf("0\n");
        else{
            res = b-(a%b);
            printf("%d\n",res);
        }
    }

    return 0;
}
