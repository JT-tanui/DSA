#include <iostream>

int countWays(int steps) {
    if (steps <= 1) {
        return 1;
    }

    int oneStepBefore = 1;
    int twoStepsBefore = 1;
    for (int current = 2; current <= steps; ++current) {
        const int ways = oneStepBefore + twoStepsBefore;
        twoStepsBefore = oneStepBefore;
        oneStepBefore = ways;
    }
    return oneStepBefore;
}

int main() {
    std::cout << countWays(5) << '\n';
    return 0;
}