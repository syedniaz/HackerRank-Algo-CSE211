#include <bits/stdc++.h>

using namespace std;

string dayOfProgrammer(int year) 
{
    string s_year;
    string f_year = to_string(year);
    if (year == 1918) s_year = "26.09.1918";
    else if ((year <= 1917) && (year%4 == 0)) 
    {
        s_year = "12.09.";
        s_year += f_year;
    }
    else if ((year > 1918) & (year%400 == 0 or ((year%4 == 0) & (year%100 != 0))))
    {
        s_year = "12.09.";
        s_year += f_year;
    }
    else 
    {
        s_year = "13.09.";
        s_year += f_year;
    }
    
    return s_year;
}

int main ()
{
    int year;
    cin >> year;
    cout << dayOfProgrammer(year) << endl;
    return 0;
}