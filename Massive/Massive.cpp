#include <iostream>
#include <random>
#include <cstdlib>

int main() 
{
    setlocale(LC_ALL, "ru_RU.UTF-8");
    const int arraySize = 100;
    int array[arraySize];
    int evenCount = 0;
    int oddCount = 0;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(1, 100);

    for (int i = 0; i < arraySize; ++i) 
    {
        array[i] = dis(gen);

        if (array[i] % 2 == 0)
        {
            evenCount++;
        }
        else {
            oddCount++;
        }
    }

    if (evenCount > oddCount) 
    {
        for (int i = 0; i < arraySize; ++i) 
        {
            if (array[i] % 2 == 0) {
                std::cout << array[i] << " ";
            }
        }
    }
    else if (evenCount < oddCount) {
        for (int i = 0; i < arraySize; ++i) 
        {
            if (array[i] % 2 != 0) {
                std::cout << array[i] << " ";
            }
        }
    }
    else
    {
        for (int i = 0; i < arraySize; ++i) 
        {
            std::cout << array[i] << " ";
        }
    }

    return 0;
}