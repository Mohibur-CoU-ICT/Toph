// Fibonacci Numbers
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a[50];
    a[0] = a[1] = 1;

    for(int i=2; i<50; i++){
        a[i] = a[i-1] + a[i-2];
    }

    int n;
    cin >> n;
    cout << a[n-1] << endl;

    return 0;
}
