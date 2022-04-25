#include <iostream>
#include <chrono>
#include <algorithm>
#include <stdbool.h>

bool isPerfect(int n)
{
    int k = 1;
    int sum = 0;

    while (k < n)
    {
        if (n % k == 0)
            sum += k;
        k++;
    }

    return (sum == n);
}

int main()
{
    int n = 150000;
    int k = 1;
    auto start = std::chrono::high_resolution_clock::now();

    while (k <= n)
    {
        if (isPerfect(k))
            std::cout << k << '\n';
        k++;
    }

    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> diff = end - start;

    std::cout << "Duration: " << diff.count() << std::endl;
}