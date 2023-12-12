#include <iostream>
using namespace std;

int main()
{
    int barisA, kolomA, barisB, kolomB, z, t;

    cout << "Matrix Equations";
    cout << "\n========================================";

    /* MATRIX A */
    cout << "\n----- Matrix A -----";

    cout << "\nEnter the number of rows = ";
    cin >> barisA;

    cout << "Enter the number of columns = ";
    cin >> kolomA;

    int matrixA[barisA][kolomA];

    cout << endl;
    for (z = 0; z < barisA; z++)
    {
        for (t = 0; t < kolomA; t++)
        {
            cout << "Enter the data for row - " << z + 1 << " and column - " << t + 1 << " = ";
            cin >> matrixA[z][t];
        }
        cout << endl;
    }

    /* MATRIX B */
    cout << "\n----- Matrix B -----";

    cout << "\nEnter the number of rows = ";
    cin >> barisB;

    cout << "Enter the number of columns = ";
    cin >> kolomB;

    int matrixB[barisB][kolomB];

    cout << endl;
    for (z = 0; z < barisB; z++)
    {
        for (t = 0; t < kolomB; t++)
        {
            cout << "Enter the data for row - " << z + 1 << " and column - " << t + 1 << " = ";
            cin >> matrixB[z][t];
        }
        cout << endl;
    }

    /* ADDITION */
    cout << "\n----- Matrix A and B Addition -----\n";
    for (int z = 0; z < barisA; z++)
    {
        for (int t = 0; t < kolomA; t++)
        {
            cout << matrixA[z][t] << " ";
        }
        if (z == barisA / 2)
        {
            cout << " +  ";
        }
        else
        {
            cout << "    ";
        }
        for (int t = 0; t < kolomA; t++)
        {
            cout << matrixB[z][t] << " ";
        }
        if (z == barisA / 2)
        {
            cout << " =  ";
        }
        else
        {
            cout << "    ";
        }
        for (int t = 0; t < kolomA; t++)
        {
            cout << matrixA[z][t] + matrixB[z][t] << " ";
        }
        cout << endl;
    }

    /* SUBTRACTION */
    cout << "\n----- Matrix A and B Subtraction -----\n";
    for (int z = 0; z < barisA; z++)
    {
        for (int t = 0; t < kolomA; t++)
        {
            cout << matrixA[z][t] << " ";
        }
        if (z == barisA / 2)
        {
            cout << " -  ";
        }
        else
        {
            cout << "    ";
        }
        for (int t = 0; t < kolomA; t++)
        {
            cout << matrixB[z][t] << " ";
        }
        if (z == barisA / 2)
        {
            cout << " =  ";
        }
        else
        {
            cout << "    ";
        }
        for (int t = 0; t < kolomA; t++)
        {
            cout << matrixA[z][t] - matrixB[z][t] << " ";
        }
        cout << endl;
    }

    /* MATRIX MULTIPLICATION */
    if (kolomA != barisB)
    {
        cout << "The number of columns in Matrix A must be equal to the number of rows in Matrix B.";
    }
    else
    {
        int resultkali[barisA][kolomB];

        cout << "\n----- Matrix A and B Multiplication -----\n";
        for (int z = 0; z < barisA; z++)
        {
            for (int t = 0; t < kolomB; t++)
            {
                resultkali[z][t] = 0;
                for (int k = 0; k < kolomA; k++)
                {
                    resultkali[z][t] += matrixA[z][k] * matrixB[k][t];
                }
            }
        }
        for (int z = 0; z < barisA; z++)
        {
            for (int t = 0; t < kolomA; t++)
            {

                cout << resultkali[z][t] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}



