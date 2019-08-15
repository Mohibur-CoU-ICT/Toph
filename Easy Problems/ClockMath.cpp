// Clock Math
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double h, m, ans;
    cin >> h >> m;

    h *= 5.0;
    h += m/12.0;
    ans = abs(h-m);
    if(ans > 30.0) ans = 60.0 - an


        s;

//    double d = h - m/5.0;
//    if(d > 6.0) d = 12.0 - d;
//    d *= 5.0;
//    double a = m / 12.0;
//    if(m > 30) d -= a;
//    else d += a;
    cout << fixed << setprecision(10);
//    cout << d * 6.0 << endl;
    cout << ans * 6.0 << endl;

    return 0;
}
