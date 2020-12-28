// ������ � �������� ������� ������ ������������
#include <stdio.h>
#include <stdlib.h>

int man()
{
    unsigned n;
    printf("\t�������� ������� �������� n*n. ������� �������� n: ");
    scanf("%u", &n);

    int *arr = (int*)malloc(n*n * sizeof(int));

    printf("\n\t������� �������� �������:");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("\n������� %d-� ������ %d-� �������: ", i+1, j+1);
            scanf("%d", (arr + i*n + j));
        }
    }

    printf("\n\t�������:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("\t%d ", *(arr + i*n + j));
        }
        printf("\n");
    }

    float k, m, a = 0, vec[n];
    for (int j = 0; j < n; j++) // ������� �������������� �� ��������
    {
        for (int i = 0; i < n; i++)
        {
            if(i != j) // �������� ������� �� ������� ���������
            a += *(arr + i*n +j); // ����� ��������� �������
        }
        m = a / (n - 1) ; // ������� �������������� �������
        vec[j] = m;
        a = 0;
    }

    printf("\n\t������:");
    k = vec[0];
    for (int j = 0; j < n; j++)
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

