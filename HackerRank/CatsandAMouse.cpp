#include <bits/stdc++.h>

using namespace std;

string catAndMouse(int x, int y, int z) 
{
    string s;
    int a = z-x;
    if (a < 0) a= a*-1;
    int b = z-y;
    if (b < 0) b= b*-1;
    if (a==b) s = "Mouse C";
    else if (a < b) s = "Cat A";
    else if (a > b) s = "Cat B";
    return s;
}

int main ()
{
    int x {1}, y {3}, z {2};

    //cin >> x >> y >> z;

    cout << catAndMouse(x,y,z) << endl;

    return 0;
}