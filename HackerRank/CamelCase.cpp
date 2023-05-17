#include <bits/stdc++.h>

using namespace std;

int camelcase(string s) 
{
    int count = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90) count++;
    }
    return count;
}

int main()
{

    string s = "saveChangesInTheEditor";
    //getline(cin, s);

    int result = camelcase(s);

    cout << result << endl;


    return 0;
}
