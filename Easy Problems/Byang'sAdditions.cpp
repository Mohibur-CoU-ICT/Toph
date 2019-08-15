// Byang's Additions
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string m, n;
    cin >> m >> n;
    int mz = m.size() - 1;
    int nz = n.size() - 1;

    for(int i = mz, j = nz ; i >= 0 && j >= 0 ; i-- , j--)
    {
        int a = m[i] - '0';
        int b = n[j] - '0';
        if(a+b > 9)
            return cout << "Yes" << endl, 0;
    }
    cout << "No" << endl;

    return 0;
}
