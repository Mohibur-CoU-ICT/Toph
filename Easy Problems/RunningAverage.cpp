// Running Average
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n, a, sum = 0;
    cin >> n;
    for(int i=1; i<=n ; i++){
        cin >> a;
        sum += a;
        double ans = sum / i;
        cout << fixed;
        cout << setprecision(20);
        cout << ans << endl;
    }

    return 0;
}
