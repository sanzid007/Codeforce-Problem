#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    int odd=0,even=0;
    int index_odd=0,index_even=0;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            even++;
            index_even=i;
        }else{
            odd++;
            index_odd=i;
        }
    }
    if(odd>even){
        cout<<index_even;
    }else{
        cout<<index_odd;
    }
    return 0;
}
