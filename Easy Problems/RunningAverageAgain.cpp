// Running Average Again
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a;
    double sum = 0;
    cin >> n;
    for(int i=1; i<=n ; i++){
        cin >> a;
        sum = sum + (double)a;
        double ans = sum / (double)i;
        cout << fixed;
        cout << setprecision(10);
        cout << ans << endl;
    }

    return 0;
}
