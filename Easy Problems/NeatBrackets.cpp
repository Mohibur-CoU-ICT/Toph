// Neat Brackets
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, t = "()";
    cin >> s;

    while(true)
    {
        int pos = s.find(t);
        if(pos != string::npos)
        {
            s.erase(pos, 2);
        }
        else break;
//        cout << s << endl;
    }
    if(s.empty()) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}
