// Tidy Bits
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int one = __builtin_popcount(n);
    cout << (long long) pow(2, one) - 1 << endl;

    return 0;
}
