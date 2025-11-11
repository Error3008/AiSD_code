#define INFINITY 2147483647

#include <iostream>
using namespace std;

int main()
{
    int num_to_withdraw, coins_count;

    cin >> num_to_withdraw >> coins_count;

    int ways[num_to_withdraw + 1];

    ways[0] = 0;
    for (int i = 1; i <= num_to_withdraw; i++)
        ways[i] = INFINITY;

    for (int i = 0; i < coins_count; i++) 
    {
        int coin;
        cin >> coin;
        for (int j = 0; j <= num_to_withdraw - coin; j++)
        {
            if (ways[j] < INFINITY)
            {
                if (ways[j] + 1 < ways[j + coin])
                {
                    ways[j + coin] = ways[j] + 1;

                }
            }
        }
        for (int j = 0; j <= num_to_withdraw; j++)
            cout << j << ": " << ways[j] << endl;
    }
    
    return 0;
}