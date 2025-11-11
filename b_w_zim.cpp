#include <iostream>


using namespace std;

int main()
{
    long long banknotes[] = {
        5, 10, 20, 50, 100, 500, 1000, 5000, 10000,
        50000, 100000, 200000, 500000, 750000, 1000000, 
        10000000, 50000000, 100000000, 200000000,
        500000000, 1000000000
    };

    long long n;

    cin >> n;

    int i = (sizeof(banknotes) / sizeof(long long)) - 1;
    while (n > 0)
    {
        if (banknotes[i] > n)
        {
            i--;
            continue;
        }

        cout << banknotes[i] << " " << endl;
        n -= banknotes[i];
    }

    return 0;
}