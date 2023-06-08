

#include <iostream>


class Matrix
{
private:
    int row;
    int col;
    int** mat;

public: 

    Matrix(int row, int col) : row(row), col(col)
    {
        mat = new int* [row];
        for (int i = 0; i < row; ++i)
        {
            mat[i] = new int[col];

            
            for (int j = 0; j < col; ++j)
                {
                    mat[i][j] = (rand() % 100);
                }
            
          
        }

    }

    ~Matrix()
    {
        for (int i = 0; i < row; ++i)
        {
            delete[] mat[i];
        }
        delete[] mat;

    }

    void print()
    {
        for (int i = 0; i < row; ++i)
        {
            for (int j = 0; j < col; ++j)
            {
                std::cout << " " << mat[i][j];
            }
            std::cout << std::endl;
        }
    }




};

int main()
{
    int rows = -2;
    int cols = 4;

    if (rows > 0 && cols > 0)
    {
        Matrix  matrix(rows, cols);
        matrix.print();
    }
    else
    {
        std::cout << "Not a valid row or col" << std::endl;
        
    }


    
    return 0;

    
}

