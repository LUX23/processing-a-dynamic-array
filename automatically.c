// ������ � �������� ������� ��� ������
#include <stdio.h>
#include <stdlib.h>

int aut()
{
    int a = 0,
        *arr = (int*)malloc(3*3 * sizeof(int));

    printf("\n\t�������:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            *(arr + i*3 +j) = a + 1;
            a ++;
            printf("\t%d ", *(arr + i*3 + j));
        }
        printf("\n");
    }

    float m1, m2, m3, k;
    m1 = (*(arr + 1*3 +0) + *(arr + 2*3 +0)) / 2.00;
    m2 = (*(arr + 0*3 +1) + *(arr + 2*3 +1)) / 2.00;
    m3 = (*(arr + 0*3 +2) + *(arr + 1*3 +2)) / 2.00;
    // ������� �������������� �������

    printf("\n\t������:");
    float vec[3] = {m1, m2, m3};
    k = vec[0];

    for (int j = 0; j < 3; j++)
    {
        printf("\t%.2f ", vec[j]);
        if (k > vec[j]) // ����� ������������ �������� �������
            k = vec[j];
    }

    printf("\n\t����������� ������� ������� = ");
    printf("%.2f", k);

    free(arr);
    return 0;
}

