#include <bits/stdc++.h>

using namespace std;

long long int aVeryBigSum(vector<long long int> ar) {
    long long int sum {0};
    for (int i = 0; i < ar.size(); i++)
    {
        sum = sum + ar[i];
    }
    return sum;
}

int main()
{
    vector<long long int> ar {1000000001, 1000000002, 1000000003, 1000000004, 1000000005};

    long long int result = aVeryBigSum(ar);

    cout << result << "\n";

    return 0;
}