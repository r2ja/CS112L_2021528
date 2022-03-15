//Create aclass, heater that contains a single integer field, temperature. Define a constructor that takes no parameters.
//The temperature field should be set to the value of 15 in the constructor. Define the mutatotrs, warmers and coolers, whose effect
//is to increase or decrease the value of the temperature by 5 respectively.
//Define an accessor method to return the value of temperature.

#include <iostream>
#include <Windows.h>
using namespace std;


class heater
{
    private:

        int temperature;
    
    public:

        heater()
        {
            temperature = 15;
        }

        void cooler()
        {
            temperature = temperature - 5;
        }

        void warmer()
        {
            temperature = temperature + 5;
        }

        int accessor()
        {
            return temperature;
        }

        ~heater(){}
};

int main()
{
    heater t1;

    int option;

    cout << "Welcome to the Heater Control System." << endl;

    while(1)
    {
        cout << "1. Make the temperature warmer." << endl;
        cout << "2. Make the temperature cooler." << endl;
        cout << "3. Exit." << endl;
        cout << endl;

        cout << "Please choose an option from the menu : " << endl;
        cin >> option;

        while(option > 3 || option < 1)
        {
            cout << "Please choose the option again: " << endl;
            cin >> option;
        }

        if (option == 3)
        {
            cout << "Thank you for using the system, goodbye!" << endl;
            break;
        }

        switch(option)
        {
            case 1:
            {
                t1.warmer();
                cout << "Temperature = " << t1.accessor() << endl;
                Sleep(1500);
                cout << endl;
                break;
            }

            case 2:
            {
                t1.cooler();
                cout << "Temperature = " << t1.accessor() << endl;
                Sleep(1500);
                cout << endl;
                break;
            }
        }
    }
    return 0;
}
