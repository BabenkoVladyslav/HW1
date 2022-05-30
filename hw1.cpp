#include <iostream>
#include <algorithm>

using namespace std;

const int N = 3;

bool matrix_accord(int matrix_one[N][N], int matrix_two[N][N], int* n) {//Сравниваем матрицы.

    for (int i=0; i<N; i++)
    {
        for (int j=0; j<N; j++)
        {
            if (matrix_one[i][j] != matrix_two[n[i]][n[j]])
                {
                    return false;//Выход, если не совпадают - 0.
                }
        }
    }
    return true;//Выход, если совпадают - 1.
}

bool isomorphic_matrix_checker(int matrix_one[N][N], int matrix_two[N][N], int* n)//Определяем изоморфны ли матрицы.
{
    do
    {
        if (matrix_accord(matrix_one, matrix_two, n))
        {
            return true;//Выход, если изоморфны - 1.
        }
    }while (next_permutation(n, n + N));
    return false;//Выход, если не изоморфны - 0.
}

int main()
{
    int n[N] = {0,1,2};
    int matrix_one[N][N] = {{0,0,1},{0,1,0},{1,0,0}};//Матрица первая.
    int matrix_two[N][N] = {{1,1,1},{0,1,0},{1,1,0}};//Матрица вторая.

    if (isomorphic_matrix_checker(matrix_one, matrix_two, n))//Проверка на изоморфизм матриц.
    {
        cout << "Isomorphic.";//Вывод, еслим матрицы изоморфны.
    }
    else
    {
        cout << "Not isomorphic.";//Вывод, еслим матрицы не изоморфны.
    }


}