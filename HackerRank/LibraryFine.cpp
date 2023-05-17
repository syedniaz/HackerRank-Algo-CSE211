#include <bits/stdc++.h>

using namespace std;

int libraryFine(int d1, int m1, int y1, int d2, int m2, int y2) 
{   
    int fine = 0;
    if (y2 > y1) fine = 0;
    else if (y2 < y1) fine = 10000;
    else
    {
        if (y2 == y1)
        {
            if (m2 < m1) fine = 500 * (m1-m2);
            else if (m2==m1)
            {
                if (d2 < d1) fine = 15 * (d1-d2);
                else fine = 0;
            }
            else fine = 0;
        }
    }
    return fine;
}

int main ()
{

    cout << libraryFine(9,6,2015, 6,6,2015) << endl;

    return 0;
}