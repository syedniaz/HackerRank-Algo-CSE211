#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) 
{
    int x = stoi(s);
    string t = s.substr(2);
    if (s[s.length()-2] == 'P')
    {
        if (x != 12) x = x + 12;
    }
    else if (s[s.length()-2] == 'A')
    {
        if (x == 12) x = 0;
    }
    t.pop_back();
    t.pop_back();
    
    ostringstream strg;
    strg << x;
    string s1 = strg.str();
    
    string r;
    
    if (s[s.length()-2] == 'A' && x < 10)
    {
        string s0 = "0";
        r = s0 + s1 + t;
    }
    else r = s1 + t;
    
    return r;
}

int main()
{
    string s = "07:05:45PM";

    string result = timeConversion(s);

    cout << result << "\n";


    return 0;
}