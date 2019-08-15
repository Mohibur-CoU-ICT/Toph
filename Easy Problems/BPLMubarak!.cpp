// BPL Mubarak!
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;

    for(int i=1 ; i <= n ; i++)
    {
        cin >> s;
        int cnt = 0;
        for(int j=0 ; j < (int) s.size() ; j++)
        {
            if(s[j] >= '0' && s[j] <= '9') cnt++;
            else if(s[j] == 'O') cnt++;
        }
        int over = cnt / 6;
        int ball = cnt % 6;
        if(over == 1) {
            cout << over << " OVER";
        }
        else if(over > 1) {
            cout << over << " OVERS";
        }
        if(over != 0 && ball != 0) cout << " ";
        if(ball > 1) cout << ball << " BALLS";
        else if(ball == 1) cout << ball << " BALL";
        cout << endl;
    }

    return 0;
}
