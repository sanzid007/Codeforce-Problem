#include<stdio.h>
int main()
{
    int t,n,i,one,two,arr[100];
    scanf("%d",&t);

    while(t--)
    {
        scanf("%d",&n);
        one=0;
        two=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]==1)
                one++;
            else
                two++;
        }

        if(one==0 && n%2 == 0)
            printf("YES\n");
        else if(one%2==0 && one!=0)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}
