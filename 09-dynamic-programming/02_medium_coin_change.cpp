#include <algorithm>
#include <iostream>
#include <vector>

int minimumCoins(const std::vector<int>& coins, int amount) {
    const int impossible = amount + 1;
    std::vector<int> best(amount + 1, impossible);
    best[0] = 0;
    for (int current = 1; current <= amount; ++current) {
        for (int coin : coins) {
            if (coin <= current) {
                best[current] = std::min(best[current], best[current - coin] + 1);
            }
        }
    }
    return best[amount] == impossible ? -1 : best[amount];
}

int main() {
    std::cout << minimumCoins({1, 2, 5}, 11) << '\n';
    return 0;
}