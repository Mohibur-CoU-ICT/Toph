// Test Cases
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c, m;
    cin >> n >> c >> m;

    for(int i=0; i<n; i++)
    {
        int D, C, M;
        cin >> D >> C >> M;
        if(C > c) return cout << "CLE\n", 0;
        else if(M > m) return cout << "MLE\n", 0;
        else if(D != 0) return cout << "WA\n", 0;
    }
    cout << "AC" << endl;

    return 0;
}
