//Write a parity class. This class allows the program to put any number of items into it and returns TRUE if an even
//number of items is put in and FALSE if an odd number is used.

#include <iostream>
#include <Windows.h>
using namespace std;

class parity
{
    private:

        int n;
        int *parity_check = new int[n];
    
    public:

        parity()
        {
            n = 0;
        }

        void put(int x)
        {
            int *temp = new int[n+1];

            for(int i = 0; i < n+1; i++)
            {
                temp[i] = parity_check[i];
            }

            delete [] parity_check;

            parity_check = temp; 

            parity_check[n] = x;

        }

        void print()
        {
            cout << "Printing the Parity..." << endl;
            Sleep(1000);

            for (int i = 0; i < n; i++)
            {
                cout << parity_check[i];
                Sleep(250);
            }

            Sleep(1000);
            cout << endl << "Parity has been printed!" << endl;
        }

        void delete_element()
        {
            cout << "Deleting the last element, please wait..." << endl;
            Sleep(1000);

            int *temp = new int[n-1];

            for(int i = 0; i < n-1; i++)
            {
                temp[i] = parity_check[i];
            }

            delete [] parity_check;

            parity_check = temp;
            cout << "Element has been deleted." << endl;

        }

        bool Test()
        {
            if (n % 2 == 0)
            {
                return 1;
            }
            else
                return 0;
        }

        ~parity(){}

};

int main()
{
    parity p1;

    int option;

    cout << "Welcome to the Parity Checking System." << endl;

    while(1)
    {
        cout << "1. Put another element." << endl;
        cout << "2. Print all the elements." << endl;
        cout << "3. Delete the last element." << endl;
        cout << "4. Perform the Parity Test." << endl;
        cout << "5. Exit." << endl;
        cout << endl;

        cout << "Please choose an option from the menu : " << endl;
        cin >> option;

        while(option > 5 || option < 1)
        {
            cout << "Please choose the option again: " << endl;
            cin >> option;
        }

        if (option == 5)
        {
            cout << "Thank you for using the system, goodbye!" << endl;
            break;
        }

        switch(option)
        {
            case 1:
            {
                int x;
                cout << "Please enter an element : ";
                cin >> x;
                p1.put(x);
                Sleep(1000);
                cout << "Element has been put into the Parity List." << endl;
                break;
            }

            case 2:
            {
                p1.print();
                Sleep(1000);
                break;
            }

            case 3:
            {
                p1.delete_element();
                Sleep(1000);
                cout << "Element has been deleted!" << endl;
                break;
            }

            case 4:
            {
                if (p1.Test() == 1)
                {
                    cout << "TRUE" << endl;
                }

                if (p1.Test() == 0)
                {
                    cout << "FALSE" << endl;
                }

                break;
            }
        }
    }
    return 0;

}
