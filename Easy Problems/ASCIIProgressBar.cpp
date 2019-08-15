// ASCII Progress Bar
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    cout << '[';
    for(int i=1 ; i <= n/10 ; i++)
    {
        cout << '+';
    }
    for(int i=1 ; i <= 10-n/10 ; i++)
    {
        cout << '.';
    }
    cout << "] " << n << '%' << endl;

    return 0;
}
