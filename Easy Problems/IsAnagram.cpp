// Is Anagram
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string m, n;
    cin >> m >> n;

    sort(m.begin(), m.end());
    sort(n.begin(), n.end());

    if(m == n)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
