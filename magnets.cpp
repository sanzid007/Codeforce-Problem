#include<iostream>
#include<string>
using namespace std;

int main()
{
    int i,n,res=1;
    char x;
    string arr[100000];
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    x = arr[0].at(0);
    for(i=1; i<n; i++)
    {
        if(x != arr[i].at(0))
        {
            res++;
            x = arr[i].at(0);
        }
    }

    cout << res << endl;
    return 0;
}
