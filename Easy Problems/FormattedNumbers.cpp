// Formatted Numbers
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n, ans;
    cin >> n;

    for(int i=(int)n.size()-1, cnt=0 ; i>=0 ; i--)
    {
        ans += n[i];
        cnt ++;
        if(cnt == 3 && i != 0)
        {
            ans += ',';
            cnt = 0;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;

    return 0;
}
