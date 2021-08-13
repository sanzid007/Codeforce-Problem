#include<iostream>
#include<string>

using namespace std;

int main()
{
    int i,n,value=0;
    char plus_ = '+';
    char minus_ = '-';
    cin >> n;
    string str;

    for(i=0; i<n; i++)
    {
        cin >> str;
        if (str.find(plus_) != std::string::npos)
        {
            ++value;
        }
        else if (str.find(minus_) != std::string::npos)
        {
            --value;
        }
        else{}
    }
    cout << value << endl;


    return 0;
}
