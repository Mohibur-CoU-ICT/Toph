// Little Subarray Sum
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, x, sum = 0;
    cin >> n >> a >> b;

    for(int i=0 ; i < n ; i++)
    {
        cin >> x;
        if(i >= a && i <= b)
            sum += x;
    }
    cout << sum << endl;

    return 0;
}
