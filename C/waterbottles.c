#include <stdio.h>
int numWaterBottles(int numBottles, int numExchange) {
    int total = numBottles;
    int empty = numBottles;

    while (empty >= numExchange) {
        int newBottles = empty / numExchange;
        total += newBottles;
        empty = newBottles + (empty % numExchange);
    }

    return total;
}

int main() {
    printf("%d\n", numWaterBottles(9, 3));
    return 0;
}

