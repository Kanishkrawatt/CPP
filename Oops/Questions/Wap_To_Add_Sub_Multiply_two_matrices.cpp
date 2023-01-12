#include <iostream>
using namespace std;
class Matrix
{
    int rows = 2, cols = 2;
    int matrix[2][2];

public:
    Matrix(int matrix[2][2])
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                this->matrix[i][j] = matrix[i][j];
            }
        }
    }
    void add(Matrix m)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                this->matrix[i][j] += m.matrix[i][j];
            }
        }
    }
    void sub(Matrix m)
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                this->matrix[i][j] -= m.matrix[i][j];
            }
        }
    }
    void mul(Matrix m)
    {
        int temp[2][2];
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                temp[i][j] = 0;
                for (int k = 0; k < rows; k++)
                {
                    temp[i][j] += this->matrix[i][k] * m.matrix[k][j];
                }
            }
        }
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                this->matrix[i][j] = temp[i][j];
            }
        }
    }
    void display()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << this->matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};
int main()
{
    int matrix1[2][2], matrix2[2][2];
    cout << "Enter first matrix: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> matrix1[i][j];
        }
    }
    cout << "Enter second matrix: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> matrix2[i][j];
        }
    }
    Matrix m1(matrix1);
    Matrix m2(matrix2);
    m1.add(m2);
    cout << "Addition of two matrices: " << endl;
    m1.display();
    m1.sub(m2);
    cout << "Subtraction of two matrices: " << endl;
    m1.display();
    m1.mul(m2);
    cout << "Multiplication of two matrices: " << endl;
    m1.display();
    return 0;
}
