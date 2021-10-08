#include<stdio.h>
int main()
{
    int i,n,k,res;
    scanf("%d", &n);
    scanf("%d", &k);

    for(i=0; i<k; i++)
    {
        if((n%10) > 0)
            n--;
        else
            n = n/10;
    }
    printf("%d",n);
    return 0;
}
