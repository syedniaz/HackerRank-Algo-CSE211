#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(vector<int> candles) {
    
    sort (candles.begin(), candles.end());
    int tall = candles[(candles.size())-1];
    int counter {1};
    for (int i = 0; i < (candles.size())-1; i++)
    {
        if (tall == candles[i]) counter++;
    }
    return counter;
}

int main()
{
    vector <int> candles {3,2,1,3};

    int result = birthdayCakeCandles(candles);

    cout << result << "\n";
    
    return 0;
}