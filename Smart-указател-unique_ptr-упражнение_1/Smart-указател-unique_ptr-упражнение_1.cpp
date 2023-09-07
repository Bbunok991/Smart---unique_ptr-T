// Smart-указател-unique_ptr-упражнение_1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <memory>
#include <math.h>

using namespace std;

int main()
{
    /*Упражнение 1
    Напишите программу, в которой пользователь вводит размер массива, и программа создает smart - указатель типа unique_ptr и инициализирует его динамическим массивом такого размера(пусть массив хранит значения типа int).
    Инициализируйте все элементы массива так, чтобы значение элемента по индексу i было равно i* i(то есть квадрату числа i).Вычислите сумму элементов и выведите результат на консоль.*/
    
    unsigned int sizeOfArray;
    int counter = 0;
    cout << "Enter the size of the array: ";
    cin >> sizeOfArray;

    unsigned n{ sizeOfArray };   // размер массива
    auto pnumbers{ make_unique<int[]>(n) };    // массив из n элементов

    // изменим и выведем все элементы на консоль
    for (unsigned i{}; i < n; i++)
    {
        pnumbers[i] = rand() % 10 + 1;
        pnumbers[i] = pow(pnumbers[i], 2);
        counter += pnumbers[i];

        cout << "pnumbers[" << i << "] = " << pnumbers[i] << endl;
    }
    cout << "Sum of elements: " << counter << endl;
}
