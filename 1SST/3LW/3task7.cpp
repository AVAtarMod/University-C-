//ни одно из чисел x, y, z не является положительным;
#include <iostream>

int main()
{
    using namespace std;

    int x, y, z;
    printf("\n\nВведите х,у,z через пробел.Пример: 1 2 3\n");
    scanf("%d %d %d", &x, &y, &z);
    /*
    После ввода данных проверка числел на то,что они не положительны с помощью
    тернарного оператора,и вывод результата.
    */
    (x <= 0 && y <= 0 && z <= 0) ? printf("\nTrue\n\n") : printf("\nFalse\n\n");

    return 0;
}