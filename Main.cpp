#include <iostream>
#include "Helpers.h"
#include <string>
#include <time.h>


int main()
{  
	std::cout << "Input N" << std::endl;
    int n;
    std::cin >> n;

    int** numbers{ new int* [n] {} };  // выделяем память под двухмерный массив
    for (unsigned i{}; i < n; i++)
    {
        numbers[i] = new int[n] {};
    }

    // вводим данные
    for (unsigned i{}; i < n; i++)
    {
        for (unsigned j{}; j < n; j++)
        {
             numbers[i][j] = i+j;
        }
    }
    // вывод данных
    for (unsigned i{}; i < n; i++)
    {
        for (unsigned j{}; j < n; j++)
        {
            std::cout << numbers[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    struct tm buf;
    time_t t = time(NULL);
    localtime_s(&buf, &t);
    int index = buf.tm_mday % 5;
    int sum = 0;


    for (unsigned i{}; i < n; i++)
    {
       sum += numbers[index][i];
    }

    std::cout << "the sum of the line " << index + 1 << " is equal to " << sum;

    //освобождаем память
    for (unsigned i{}; i < n; i++)
    {
        delete[] numbers[i];
    }
    delete[] numbers;
}