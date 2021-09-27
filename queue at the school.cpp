#include<iostream>
#include<string>

using namespace std;
int main()
{
    int t,n,i,j;
    string s;

    cin >> n;
    cin >> t;
    cin >> s;

    for(j=0; j<t; j++)
    {
        for(i=0; i<n; i++)
        {
            if(s.substr(i,2).compare("BG") == 0)
            {
                s[i] = 'G';
                s[i+1] = 'B';
                i++;
            }
        }
    }

    cout << s << endl;
    return 0;
}
