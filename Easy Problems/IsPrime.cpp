// Is Prime
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for(int i=2 ; i*i <= n ; i++)
    {
        if(n % i == 0)
            return cout << "No" << endl, 0;
    }
    cout << "Yes" << endl;

    return 0;
}
