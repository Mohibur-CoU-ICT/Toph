// Mixed Fractions
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d;
    cin >> n >> d;
    int q = n / d;
    int r = n % d;

    cout << q << " " << r << " " << d << endl;

    return 0;
}
