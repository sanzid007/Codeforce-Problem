#include<stdio.h>
int main()
{
    int a,b,t,count = 0;
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        if(a<b)
        {
            if((b-a)%2 == 0)
                printf("2\n");
            else
                printf("1\n");
        }
        else if(a==b)
            printf("0\n");
        else
        {
            if((a-b)%2 == 0)
                printf("1\n");
            else
                printf("2\n");
        }
    }

    return 0;
}
