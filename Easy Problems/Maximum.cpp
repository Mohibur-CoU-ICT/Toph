// Maximum
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, ans = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a > ans) ans = a;
    }
    cout << ans << endl;

    return 0;
}
