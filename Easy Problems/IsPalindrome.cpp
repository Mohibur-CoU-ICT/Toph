// Is Palindrome
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    cin >> n;
    string m = n;
    reverse(m.begin(), m.end());

    if(m == n)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
