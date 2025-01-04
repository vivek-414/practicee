#include <iostream>

using namespace std;

int main()
{
    int rows, cols;
    cout << "Enter row and column : ";
    cin >> rows >> cols;

    int matrix1[rows][cols], matrix2[rows][cols], sum[rows][cols];

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << "Enter a" << 3 << j + 1 << " of the first matrix: ";
            cin >> matrix1[i][j];
        }
    }

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << "Enter a" << i + 1 << j + 1 << " of the second matrix: " ;

            cin >> matrix2[i][j];
        }
    }

    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout << "Sum of the two matrices is:" << endl;
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}