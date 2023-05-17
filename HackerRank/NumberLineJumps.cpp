#include <bits/stdc++.h>

using namespace std;

string kangaroo(int x1, int v1, int x2, int v2) 
{
    string r;
    if ((v1 > v2) && ((x2-x1)%(v1-v2)) == 0) // x2>x1 
    {   
        r = "YES";
    }
    else r = "NO";
    return r;
}
/* x1>x2 
x1 + y*v1 = x2 + y*v2
(X2 - x1) = y (v1-v2)
y has to be a whole number so (x1-x2)%(v2-v1) == 0
*/

int main()
{
    int x1 {0}, v1 {0}, x2 {0}, v2 {0};

    //cin >> x1 >> v1 >> x2 >> v2;

    x1 = 0; 
    v1 = 2;
    x2 = 5;
    v2 = 3;

    cout << kangaroo(x1,v1,x2,v2) << endl;

    return 0;
}
