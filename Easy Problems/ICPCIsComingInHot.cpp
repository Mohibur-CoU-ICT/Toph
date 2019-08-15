// ICPC Is Coming in Hot!
#include <bits/stdc++.h>
using namespace std;
int a[10];
int main()
{
    string n;
    cin >> n;

    for(int i=0; i<(int)n.size(); i++)
    {
        a[n[i]-'0']++;
    }
    int ans = 0, mx = a[0];
    for(int i=1; i<10; i++){
        if(a[i] > mx){
            mx = a[i], ans = i;
        }
    }
//    for(auto i : a) cout << i << " "; cout << endl;
    cout << ans << endl;

    return 0;
}
