//Task 3 - Adder

#include <iostream>
#include <math.h>
#include <bitset>
using namespace std;

#define read(type, var) type var; cin >> var;

void addition(string val1, string val2)
{
    bitset<8> Sum;
    bitset<8> Carry_Out;
    bitset<8> A;
    bitset<8> B;
    bitset<8> Answer;

    // SUM IS (A ^ B) ^ Carry_In
    // CARRY IS (A & B) | (cout<<(A ^ B))

    A = bitset<8>(stoi(val1));
    B = bitset<8>(stoi(val2));

    Sum = A ^ B;
    Carry_Out = A & B;
    Carry_Out = Carry_Out<<1;

    Answer = Sum | Carry_Out;

    cout << "Your answer is : " << Answer << endl;

}




int main()
{
    cout << "Please enter the base-system (2, 8 or 16) : ";
    read(int, base);
    cout << endl;

    // while(1)
    // {
        
    //     if (base != 2 || base != 8 || base != 16)
    //     {
    //         cout << "Invalid." << endl;
    //         cout << "Please enter a valid base-system : ";
    //         cin >> base;
    //         continue;
    //     }
    //     else
    //         break;
    // }

    switch(base)
    {
        case 2:
        {
            int temp1 = 0;
            int temp2 = 0;

            cout << "You have chosen the Binary base system, please enter the first value : ";
            read(string, val1);
            cout << endl;

            int j = 0;

            for(int i = val1.length() - 1 ; i >= 0 ; i--)
            {
                temp1 = temp1 + ((int(val1[i]) - '0') * pow(2, j));
                j++;
            }

            cout << "Please enter the second value : ";
            read(string, val2);

            j = 0;

            for(int i = val2.length() - 1 ; i >= 0 ; i--)
            {
                temp2 = temp2 + ((int(val2[i]) - '0') * pow(2, j));
                j++; 
            }

            addition(to_string(temp1), to_string(temp2));

            break;
        }

        case 8:
        {
            int temp1 = 0;
            int temp2 = 0;

            cout << "You have chosen the Octal base system, please enter the first value : ";
            read(string, val1);
            cout << endl;

            int j = 0;

            for(int i = val1.length() - 1 ; i >= 0 ; i--)
            {
                temp1 = temp1 + ((int(val1[i]) - '0') * pow(2, j));
                j++;
            }

            cout << "Please enter the second value : ";
            read(string, val2);

            j = 0;

            for(int i = val2.length() - 1 ; i >= 0 ; i--)
            {
                temp2 = temp2 + ((int(val2[i]) - '0') * pow(2, j));
                j++; 
            }

            addition(to_string(temp1), to_string(temp2));

            break;
        }

        case 16:
        {
            int temp1 = 0;
            int temp2 = 0;

            cout << "You have chosen the Hexa-Decimal base system, please enter the first value : ";

            read(string, val1);
            cout << endl;
            
            int j = 0;

            for(int i = val1.length() - 1 ; i >= 0 ; i--)
            {
                switch(val1[i]){
                    case '0':
                    case '1':
                    case '2':
                    case '3':
                    case '4':
                    case '5':
                    case '6':
                    case '7':
                    case '8':
                    case '9':
                    {
                        temp1 = temp1 + (int(val1[i]) * pow(16, j));
                        break;

                    }
                        
                    case 'A':
                    {
                        temp1 = temp1 + ((10 - '0') * pow(16, j));
                        break;

                    }
                    case 'B':
                    {
                        temp1 = temp1 + ((11 - '0') * pow(16, j));
                        break;

                    }
                    case 'C':
                    {
                        temp1 = temp1 + ((12 - '0') * pow(16, j));
                        break;

                    }
                    case 'D':
                    {
                        temp1 = temp1 + ((13 - '0') * pow(16, j));
                        break;

                    }
                    case 'E':
                    {
                        temp1 = temp1 + ((14 - '0') * pow(16, j));
                        break;

                    }
                    case 'F':
                    {
                        temp1 = temp1 + ((15 - '0') * pow(16, j));
                        break;

                    }
                    
                }
                j++;
            }

            cout << "Please enter the second value : ";
            read(string, val2);

            j = 0;

            for(int i = val2.length() - 1 ; i >= 0 ; i--)
            {
                switch(val2[i]){
                    case '0':
                    case '1':
                    case '2':
                    case '3':
                    case '4':
                    case '5':
                    case '6':
                    case '7':
                    case '8':
                    case '9':
                    {
                        temp1 = temp1 + (int(val2[i]) * pow(16, j));
                        break;

                    }
                    case 'A':
                    {
                        temp1 = temp1 + ((10 - '0') * pow(16, j));
                        break;

                    }
                    case 'B':
                    {
                        temp1 = temp1 + ((11 - '0') * pow(16, j));
                        break;

                    }
                    case 'C':
                    {
                        temp1 = temp1 + ((12 - '0') * pow(16, j));
                        break;

                    }
                    case 'D':
                    {
                        temp1 = temp1 + ((13 - '0') * pow(16, j));
                        break;

                    }
                    case 'E':
                    {
                        temp1 = temp1 + ((14 - '0') * pow(16, j));
                        break;

                    }
                    case 'F':
                    {
                        temp1 = temp1 + ((15 - '0') * pow(16, j));
                        break;

                    }
                    
                }
                j++;
            }
            
            addition(to_string(temp1), to_string(temp2));

            break;
        }

    }

        

        
    
    
}