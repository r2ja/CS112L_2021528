#include <iostream>
using namespace std;

class Officer
{
    private:
        int ID;
        string Name, Rank;
        static int Officer_Count;
    
    public:

        void Getter_And_Checker()
        {

            cout << "Enter ID of the officer : ";
            cin >> ID;
            cout << endl;

            cout << "Enter the name of the officer : ";
            cin >> Name;
            cout << endl;

            cout << "Enter the rank of the officer : ";
            cin >> Rank;
            cout << endl;

            int temp_ID, modded_ID, ulti_ID;

            temp_ID = ID;

            for (int i = 0; ID != 0; i++)
            {
               modded_ID = ID % 10;
               ulti_ID = (ulti_ID * 10) + modded_ID;
               ID = ID / 10;
            }

            if (temp_ID == ulti_ID)
            {
                cout << "The officer is allowed to enter the restricted area." << endl;
            }
            else
            {
                cout << "The officer is NOT allowed to enter the restricted area." << endl;
            }


            Officer_Count++;

        }

        void count()
        {
            cout << "The total number of officers is " << Officer_Count << endl;
        }
};

int Officer::Officer_Count = 0;

int main()
{
    while(1)
    {
        int option;
        Officer off;

        cout << "Please select the desired option." << endl;
        cout << "1. Enter ID of Officer." << endl;
        cout << "2. Get total number of officers." << endl;
        cout << "3. Exit." << endl;

        cout << endl << "Please choose an option : ";
        cin >> option;
        cout << endl;

        while(1)
        {
            if (option > 3 && option < 1)
            {
                cout << "Please reenter the option: ";
                cin >> option;
                cout << endl;
            }
            else
            {
                break;
            }
        }

        if (option == 3)
        {
            cout << "Thank you for using the system, goodbye!" << endl;
            break;
        }

        if (option == 1)
        {
            off.Getter_And_Checker();
        }

        if (option == 2)
        {
            off.count();
        }

    }

    return 0;
}
