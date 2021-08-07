#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,i,count_A=0,count_B;
    string str;
    char s = 'A';
    cin >> n;
    cin >> str;

    for(i=0; i<n; i++)
    {
        if(str[i] == s)
            count_A++;
    }

    count_B = n-count_A;
    if(count_A > count_B)
        cout << "Anton" << endl;
    else if(count_A < count_B)
        cout << "Danik" << endl;
    else
        cout << "Friendship" << endl;

    return 0;
}

