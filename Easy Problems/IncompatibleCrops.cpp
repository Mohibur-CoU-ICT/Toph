// Incompatible Crops
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    cin >> r >> c;
    string s[r+2], t;

    for(int i=0; i<r+2; i++) s[i] += '.';
    for(int i=0; i<c; i++){
        s[0] += '.', s[r+1] += '.';
    }
    for(int i=1; i<=r; i++){
        cin >> t;
        s[i] += t;
    }
    for(int i=0; i<r+2; i++) s[i] += '.';
//    for(int i=0; i<r+2; i++) cout << s[i] << endl;
    int cnt = 0;
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            if(s[i][j]=='.' && s[i-1][j]=='.' && s[i+1][j]=='.' && s[i][j-1]=='.' && s[i][j+1]=='.'){
                cnt++;
            }
        }
    }
    cout << cnt << endl;

    return 0;
}
