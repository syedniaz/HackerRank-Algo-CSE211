#include <bits/stdc++.h>

using namespace std;

void plusMinus(vector<int> arr) {
    double pos {0.0}, neg {0.0}, zero {0.0};
    double arsize = arr.size();
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0) pos++;
        else if (arr[i] < 0) neg++;
        else zero++;
    }
    double posR = pos / arsize;
    double ratioNeg = neg / arsize;
    double zeroR = zero / arsize;
    
    cout << setprecision(6);
    
    cout << posR << endl;
    cout << ratioNeg << endl;
    cout << zeroR << endl;
}

int main ()
{
    vector <int> arr {-4, 3, -9, 0, 4, 1};

    plusMinus(arr);

    return 0;
}
