#include<stdio.h>
int main()
{
    int i,j,arr[5][5],count = 0,flag=0;

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        {
            if(arr[i][j] == 1)
            {
                i++;
                j++;
                flag=1;
            }

            if(flag == 1)
                break;
        }
        if(flag == 1)
            break;
    }

    if(i<3)
        count = 3-i;
    else
        count = i-3;

    if(j<3)
        count = count+3-j;
    else
        count = count+j-3;

    printf("%d",count);

    return 0;
}
