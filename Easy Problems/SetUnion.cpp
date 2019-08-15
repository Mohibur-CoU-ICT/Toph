// Set Union
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int a[200];
    int x = m + n;

    for(int i=0 ; i < x ; i++)
    {
        cin >> a[i];
    }
    a[x] = INT_MAX;
    sort(a, a+x);
    cout << a[0];
    for(int i=1 ; i < x ; i++)
    {
        if(a[i] != a[i-1])
            cout << " " << a[i];
    }
    cout << endl;

    return 0;
}
