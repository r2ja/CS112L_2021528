#include <Windows.h>
#include <iostream>
using namespace std;

class Matrix
{
    private:
        const static int size = 5;
        int a[size][size];
        int b[size][size];
        int transpose[size][size];
        int multiplied[size][size] = {0};
    
    public:

        void Initialize()
        {
            cout << "Intializing the values for A..." << endl;
            for(int i = 0; i<size;i++)
            {
                for(int j = 0; j < size; j++)
                {
                    cout << "Please enter the value of " << i+1 << " row & " << j+1 << " column : " << endl;
                    cin >> a[i][j];
                }
            }

            cout << "Now, intializing the values for B..." << endl;

            for(int i = 0; i<size;i++)
            {
                for(int j = 0; j < size; j++)
                {
                    cout << "Please enter the value of " << i+1 << " row & " << j+1 << " column : " << endl;
                    cin >> b[i][j];
                }
            }
            
            cout << endl;
            cout << "Values have been initialized." << endl;
        }

        void Print()
        {
            cout << "Printing values of A :" << endl;

            for(int i = 0; i < size; i++)
            {
                for(int j = 0; j < size; j++)
                {
                    cout << a[i][j] << "\t";
                }
                cout << endl;
            }

            cout << endl;

            cout << "Printing values of B :" << endl;
            
            for(int i = 0; i < size; i++)
            {
                for(int j = 0; j < size; j++)
                {
                    cout << b[i][j] << "\t";
                }
                cout << endl;
            }


        }

        void Transpose()
        {
            for (int i = 0; i < size; i++)
            {
                for (int j = 0; j < size; j++)
                {
                    transpose[i][j] = a[j][i];
                }
            }

            cout << "Transpose has been created." << endl;
        }

        bool isSymmetry()
        {
            for (int i = 0; int j = 0; j++)
            {
                for (int j = 0; j < size; j++)
                {
                    if (a[i][j] != transpose[j][i])
                    return 0;

                }
            }

            return 1;
        }

        void Multiply()
        {
            for(int i = 0; i <size; i++)
            {
                for (int j = 0; j < size; j++)
                {
                    for (int k = 0; k < size; k++)
                    {
                        multiplied[i][j] = multiplied[i][j] + (a[j][k] * b[k][i]);
                    }
                    
                }
            }

            cout << "Displaying the Multiplied Matrix, please wait..." << endl;
            Sleep(1000);

            for(int i = 0; i < size ; i++)
            {
                for (int j = 0; j < size; j++)
                {
                    cout << multiplied[i][j] << "\t";
                }
                cout << endl;
            }
        }
};



int main()
{   
    int options;
    Matrix matrix_operations;

    cout << "Welcome to the Matrix Machine..." << endl;
    Sleep(1000);

    cout << "Please choose from an array of options..." << endl;
    cout << endl;

    Sleep(1000);

    while (1)
    {
        cout << "1. Initialize Matrix A and B." << endl;
        cout << "2. Print Matrix A and B." << endl;
        cout << "3. Calculate the Transpose of Matrix A." << endl;
        cout << "4. Calculate the Symmetry of Matrix A." << endl;
        cout << "5. Mutiply Matrix A and B." << endl;
        cout << "6. Exit." << endl;
        
        Sleep(1000);
        cout << "Please choose an option : " << endl;
        cin >> options;

        while(options > 6 && options < 1)
        {
            cout << "Error! Please reenter the option." << endl;
            cin >> options;
        }

        if(options == 6)
        {
            cout << "Thank you for using this machine! Goodbye!" << endl;
            break;
        }

        switch(options)
        {
            case 1:
            {
                matrix_operations.Initialize();
                break;
            }
            case 2:
            {
                matrix_operations.Print();
                break;
            }
            case 3:
            {
                matrix_operations.Transpose();
                break;
            }
            case 4:
            {
                if (matrix_operations.isSymmetry() == 0)
                {
                    cout << "Not a tranpose" << endl;
                }
                else
                    cout << "Transpose" << endl;
                break;
            }
            case 5:
            {
                matrix_operations.Multiply();
                break;
            }

    }


    }

    
    return 0;
}
