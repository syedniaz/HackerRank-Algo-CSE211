#include <iostream>

using namespace std;

void display (int n)
{
    if (n<=0)
    {
        return;
    }
    else
    {
        display(n-1);
        cout << n;
        display(n-2);
        cout << n;
        display(n-1);
    }
}

int main()
{
    display(3);

    return 0;
}
