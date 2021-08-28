#include<stdio.h>
int main()
{
    int k,l,m,n,d,i,j,arr[4],flag,x=0;
    scanf("%d",&k);
    scanf("%d",&l);
    scanf("%d",&m);
    scanf("%d",&n);
    scanf("%d",&d);
    arr[0] = k;
    arr[1] = l;
    arr[2] = m;
    arr[3] = n;

    for(i=1; i<=d; i++)
    {
        flag=0;
        for(j=0; j<4; j++)
        {
            if(i%arr[j] == 0)
                flag = 1;
        }
        if(flag == 1)
            x++;
    }

    printf("%d",x);

    return 0;
}
