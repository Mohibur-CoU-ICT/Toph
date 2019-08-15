// Thought Game
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, y;
    cin >> n;

    for(int i=1 ; i <= n ; i++)
    {
        cin >> x >> y;
        x += y;
        x /= 2;
        if(x%2) cout << "Oops!" << endl;
        else cout << "Sadia will be happy." << endl;
    }

    return 0;
}
