// Размер массива вводит пользователь (значения случайны)
#include <stdio.h>
#include <stdlib.h>

int man_r()
{
    unsigned n;
    printf("\tСоздание матрицы размером n*n. Введите значение n: ");
    scanf("%u", &n);

    int *arr = (int*)malloc(n*n * sizeof(int));

    printf("\n\tМатрица:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            *(arr + i*n +j) = rand()%100;
            printf("\t%d ", *(arr + i*n + j));
        }
        printf("\n");
    }

    float k, m, a = 0, vec[n];
    for (int j = 0; j < n; j++) // среднее арифметическое по столбцам
    {
        for (int i = 0; i < n; i++)
        {
            if(i != j) // исключая элемент на главной диагонали
            a += *(arr + i*n +j); // сумма элементов столбца
        }
        m = a / (n - 1) ; // среднее арифметическое столбца
        vec[j] = m;
        a = 0;
    }

    printf("\n\tВектор:");
    k = vec[0];
    for (int j = 0; j < n; j++)
    {
        printf("\t%.2f ", vec[j]);
        if (k > vec[j]) // поиск минимального элемента вектора
        k = vec[j];
    }

    printf("\n\tМинимальный элемент вектора = ");
    printf("%.2f", k);

    free(arr);
    return 0;
}

