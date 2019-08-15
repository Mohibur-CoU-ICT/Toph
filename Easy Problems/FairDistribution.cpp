// Fair Distribution
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;

    if(m%n == 0) cout << 0 << endl;
    else {
        int q = (m+n-1) / n;
        cout << q*n - m << endl;
    }

    return 0;
}
