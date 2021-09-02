#include<stdio.h>
#include<math.h>
int main()
{
    int t,x,num,arr[10000];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&x);
        num = floor(cbrt(x));
        int i=0,j,flag = 0;
        while(num > 0)
        {
            arr[i] = num;
            i++;
            num--;
        }

        for(num=0; num<i; num++)
        {
            for(j=0; j<i; j++)
            {
                if((pow(arr[num],3)+pow(arr[j],3)) == x)
                    flag = 1;
                break;
            }
            break;
        }
        if(flag == 1)
            printf("YES\n");
        else
            printf("NO\n");
    }


    return 0;
}
