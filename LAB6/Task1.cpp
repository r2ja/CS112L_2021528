//There is a speed programing competition in FAST NU Lahore, comprising of 6 different competitions.
//You are a lodging head there and your task is to find the people of same competitions
//For this reason write a CPP code making two objects of person in coordinator class and prompt each person to enter
//competition and University name.


#include <iostream>
#include <string.h>
using namespace std;

class Person
{
    friend class Coordinator;

    private:
        string Competition_And_University;

};

class Coordinator
{
    friend class Person;

    private:
        Person p1, p2;
        int Room_Number;

    public:

        void Getter()
        {
            cout << "Enter the competition and University name: ";
            getline(cin, p1.Competition_And_University);
            cout << endl;

            cout << "Enter the competition and University name: ";
            getline(cin, p2.Competition_And_University);
            cout << endl;
        }

        void comparison()
        {
            bool check = false;

            int k = 0;

            for(int i = 0; p1.Competition_And_University[i] != ' '; i++)
            {
                k++;
            }

            int l = 0;

            for(int j = 0; p2.Competition_And_University[j] != ' '; j++)
            {
                l++;
            }

            if (k == l)
            {
                Room_Number = k;
            }
            else if (k > l)
            {
                Room_Number = l;
            }
            else
            {
                Room_Number = k;
            }

            //Calculating length after finding competition for comparison.

            int length1;
            for(length1 = 0; p1.Competition_And_University[(length1 + k) + 1] != '\0'; length1++);

            int length2;
            for(length2 = 0; p2.Competition_And_University[(length2 + k) + 1] != '\0'; length2++);

            if (length1 == length2)
            {
                for (int i = 0; i < length1; i++)
                {
                    if (p1.Competition_And_University[i] != p2.Competition_And_University[i])
                    {
                        check = true;
                        break;
                    }
                }
            }

            if (check == true)
            {
                cout << "Person 1 and Person 2 are not roommates." << endl;
            }
            else if (check == false)
            {
                cout << "Person 1 and Person 2 are roommates, and their room number is " << Room_Number << endl;
            }

            if (length1 > length2)
            {
                cout << "Person 1 and Person 2 are not roommates." << endl;
            }

            if (length1 < length2)
            {
                cout << "Person 1 and Person 2 are not roommates." << endl;
            }
        }


};


int main()
{
    Coordinator test;

    test.Getter();
    test.comparison();

    return 0;    
}

