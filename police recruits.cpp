#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, police=0, untreated = 0;
    cin >> n;

    for(int i=0; i<n ; i++)
    {
        cin >> x;
        if(x == -1)
        {
            if(police == 0)
                untreated++;
            else
                police--;
        }

        if(x > 0)
            police += x;
    }

    cout << untreated << endl;

    return 0;
}
