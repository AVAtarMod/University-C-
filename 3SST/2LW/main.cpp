#include <iostream>

#include "functions.hpp"
#include "list.hpp"

void task1();
void task2();
void task3();
void task4();
void task5();
void task6();
void task7();

int main(int argc, char const *argv[])
{
    bool noData = false;
    if (argc == 1)
    {
        printf("Введите программу для запуска: ");
        argc++;
        noData = true;
    }
    for (int i = 1; i < argc; i++)
    {
        int choice;
        if (noData)
        {
            scanf("%d", &choice);
            std::cin.ignore(32767, '\n');
        }
        else
        {
            choice = std::stoi(argv[i]);
        }

        switch (choice)
        {
        case 1:
            std::cout << "Задание №1\n";
            task1();
            std::cout << "-----\n";
            break;
        case 2:
            std::cout << "Задание №2\n";
            task2();
            std::cout << "-----\n";
            break;
        case 3:
            std::cout << "Задание №3\n";
            task3();
            std::cout << "-----\n";
            break;
        case 4:
            std::cout << "Задание №4\n";
            task4();
            std::cout << "-----\n";
            break;
        case 5:
            std::cout << "Задание №5\n";
            task5();
            std::cout << "-----\n";
            break;
        case 6:
            std::cout << "Задание №6\n";
            task6();
            std::cout << "-----\n";
            break;
        case 7:
            std::cout << "Задание №7\n";
            task7();
            std::cout << "-----\n";
            break;
        default:
            std::cout << "Номер задачи введен не верно либо не удалось конвертировать введенные данные\n";
            break;
        }
    }
}

void task1()
{
    intList1D list1 = new intList1D_element *;
    intList1D list2 = new intList1D_element *;
    int userInput;
    while (true)
    {
        std::cin >> userInput;
        if (std::cin.eof())
            break;
        insertUpperSorted(list1, userInput, USE_RECURSION);
        insertUpperSorted(list2, userInput, USE_CYCLE);
    }
    std::cout << "Recursion: ";
    printFromBegin(list1);
    std::cout << "\nCycle: ";
    printFromBegin(list2);
    std::cout << "\n";
}

void task2()
{
}

void task3()
{
}

void task4()
{
}

void task5()
{
}

void task6()
{
}

void task7()
{
}
