// Decent Arrays
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , now , pre;
    cin >> n >> pre;

    for(int i=1 ; i < n ; i++)
    {
        cin >> now;
        if(now < pre)
            return cout << "No" << endl, 0;
        pre = now;
    }
    cout << "Yes" << endl;

    return 0;
}
