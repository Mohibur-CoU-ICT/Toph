// Pascal's Triangle
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector <int> v[n];
    v[0].push_back(1);
    v[1].push_back(1);
    v[1].push_back(1);

    for(int i=2 ; i < n ; i++)
    {
        v[i].push_back(1);
        for(int j=0 ; j<i-1 ; j++){
            v[i].push_back(v[i-1][j] + v[i-1][j+1]);
        }
        v[i].push_back(1);
    }
    int sum = 0;
    for(int i=0 ; i<n ; i++)
        sum += v[n-1][i];

    cout << sum << endl;

    return 0;
}
