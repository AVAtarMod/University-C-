// Составить  программу  для  графического  изображения  делимости
// чисел  от  1  до n(n–вводится  с  клавиатуры).  В  каждой  строке
// надо  печатать  число  и  столько плюсов, сколько делителей у этого числа.
// Например,  если  исходное  данное  число равно
// 4,  то  на  экране  должно  быть напечатаноследующее:1+ 2++ 3++ 4+++

#include <iostream>

int main()
{
    int n;
    printf("Введите n: ");
    scanf("%d", &n);
    for (int i = 1; i < n + 1; i++) {
        printf("%d", i);
        int count = 0;
        for (int pos = 1; pos < i + 1; pos++) {
            if (i % pos == 0) {
                printf("+");
                count++;
            }
        }
        printf("\n");
    }
    return 0;
}