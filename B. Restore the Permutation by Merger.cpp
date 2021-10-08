#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        n = n*2;
        unordered_set<int> s;
        while (n--)
        {
            int a;
            cin >> a;
            s.insert(a);
        }
        for (auto it : s)
            cout << it << " ";

        cout << endl;
    }

    return 0;
}
