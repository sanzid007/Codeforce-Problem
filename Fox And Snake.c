#include<stdio.h>
int main()
{
    int i,j,m,n;
    char arr[50][50];
    scanf("%d",&n);
    scanf("%d",&m);

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            if(i%2 != 0)
                printf("#");
            else if(i%2==0 && i%4!=0)
                if(j == m)
                    printf("#");
                else
                    printf(".");
            else
                if(j == 1)
                    printf("#");
                else
                    printf(".");
        }
        printf("\n");
    }
    return 0;
}
