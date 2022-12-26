#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cc = 0;
    int cs = 0;
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] >= 97)
        {
            cs += 1;
        }
        else
        {
            cc += 1;
        }
    }
    if (cc > cs){        for (int i = 0; i < s.size(); ++i)
        {
            if (s[i] >= 97)
            {
                s[i] = s[i] - 32;
            }
        }
}
else
{
    for (int i = 0; i < s.size(); ++i)
    {
        if (s[i] < 90)
            s[i] = s[i] + 32;
    }
}
for (int i=0;i<s.size();i++){
    cout<<s[i];
}
return 0;
}