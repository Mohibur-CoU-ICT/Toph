// Big factorials
#include <bits/stdc++.h>
using namespace std;
#define MAX 10000
int res[MAX];
int res_size = 1;

void multiply(int x)
{
    int carry = 0;
    for(int i = 0 ; i<res_size ; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }
    while(carry)
    {
        res[res_size] = carry % 10;
        carry /= 10;
        res_size++;
    }
}

void factorial(int n)
{
    res[0] = 1;
    for(int x = 2 ; x <= n ; x++)
    {
        multiply(x);
    }
}

int main()
{
    int n;
    cin >> n;
    factorial(n);
//    for(int i = res_size - 1 ; i >= 0 ; i--){
//        cout << res[i];
//    }
//    cout << endl;
//    cout << "digits in " << n << "! = " << res_size << endl;
    int ans = 0;
    for(int i = 3 ; i >= 0 ; i--)
    {
        ans = ans * 10 + res[i];
//        cout << ans << endl;
    }
    cout << ans << endl;

    return 0;
}
