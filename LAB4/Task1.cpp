//Create a class swap to swap variables. The swap class will contain three functions
#include <iostream>
using namespace std;

class swap_class
{
    private:
        int value1;
        int value2;
        int *ptr_value1 = &value1;
        int *ptr_value2 = &value2;

    public:

        void Setter()
        {
            cout << "Please enter the two values: ";
            cin >> value1;
            cin >> value2;
        }

        //Pointer contains address and value1 and value2 contain actual values

        void Swap()
        {
            ptr_value2 = &value1;
            ptr_value1 = &value2; 
        }

        void Getter()
        {
            cout << "Before Swapping A = " << value1 << " & B = " << value2 << endl;
            cout << "After swapping A = " << *ptr_value1 << " & B= " << *ptr_value2 << endl; 
        }
};

int main()
{
    swap_class swap_function;

    swap_function.Setter();
    swap_function.Swap();
    swap_function.Getter();

    return 0;
}
