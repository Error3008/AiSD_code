#include <iostream>
using namespace std;

int main()
{
    int num;

    while (cin >> num && !cin.eof())
    {
        int us_coins[] = {1, 5, 10, 25, 50};
        int coins_count = 5;
        long long ways[num + 1];

        ways[0] = 1;
        for (int i = 1; i <= num; i++)
            ways[i] = 0;

        for (int i = 0; i < coins_count; i++)
        {
            int coin = us_coins[i];
            for (int j = coin; j <= num; j++)
            {
                ways[j] += ways[j - coin];
            }
        }
        if (ways[num] == 1)
        {
            cout << "There is only 1 way to produce " << num << " cents change." << endl;
        }
        else
        {
            cout << "There are " << ways[num] << " ways to produce " << num << " cents change." << endl;
        }
    }
    
    return 0;
}