#include <bits/stdc++.h>

using namespace std;

int viralAdvertising(int n) 
{
    int shared = 5, liked = 0, cumulative = 0;
    while (n!=0)
    {
        liked = shared/2; 
        cumulative += liked;
        shared = liked*3;
        n--;
    }
    return cumulative;
}

int main ()
{
    cout << viralAdvertising(5) << endl;
    return 0;
}
