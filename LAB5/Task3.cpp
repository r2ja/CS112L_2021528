//Design a class stringtype with two member variabels first and second of type string and follwo the member functions

#include <iostream>
#include <Windows.h>
using namespace std;

class stringType
{
    private:
        string s1, s2;
    
    public:

        stringType()
        {
            s1 = "";
            s2 = "";
        }

        void setValues(string str1, string str2)
        {
            s1 = str1;
            s2 = str2;
        }

        void printValues()
        {
            cout << s1 << endl;
            cout << s2 << endl;
        }

        void maxLength()
        {
            int i;
            for(i = 0; s1[i] != '\0'; i++);
            
            int j;
            for(j = 0; s2[i] != '\0'; i++);

            if (i < j)
            {
                cout << "String 1 is greater in length than String 2." << endl;
            }
            else if (i == j)
            {
                cout << "Both the strings are equal in length." << endl;
            }
            else
            {
                cout << "String 2 is greater in length than String 1." << endl;
            }
        }

        void compare()
        {
            if (s1 == s2)
            {
                cout << "The strings are the same." << endl;
            }
            else
            {
                cout << "The strings are not the same." << endl;
            }
        }

        void copy(string destination, string source)
        {
            destination = "\0";
            destination = source;
            cout << "The copied string is:" << destination;
        }

        void concatenate(string str1, string str2)
        {
            cout << "The concatenated string is: " << str1 << " " << str2 << endl;
            
        }

        void searchWord(string word)
        {
            bool answer = true;

            for(int i = 0; word[i] < '\0'; i++)
            {
                if (word[i] != s1[i] || word[i] != s2[i])
                {
                    answer = false;
                }
            }

            if (answer == false)
            {
                cout << "The word was not found in any strings." << endl;
            }
            else
            {
                cout << "The word was found." << endl;
            }
        }

        void searchChar(char ch)
        {
            bool answer = true;

            int str1_length, str2_length;

            int i;
            for (int i = 0; s1[i] != '\0'; i++);
            str1_length = i;

            int j;
            for (int j = 0; s2[i] != '\0'; j++);
            str2_length = j;

            int p = 0;
            int l = 0;

            for (int i = 0; i < str1_length; i++)
            {
                if (s1[i] == ch)
                {
                    p++;
                }
            }

            for (int k = 0; k < str2_length; k++)
            {
                if (s2[k] == ch)
                {
                    l++;
                }
            }

            cout << "The char was found " << p << " times in the first string." << endl;
            cout << "The char was found " << l << " times in the second string." << endl;

        }

        ~stringType(){};
 
        

};

int main()
{
    stringType ss;
    string Word = "word";
    char Charpy = 'a';

    string s1 = "Hello there";
    string s2 = "Why hello friend";

    ss.setValues(s1, s2);

    cout << endl;

    ss.printValues();

    cout << endl;

    ss.maxLength();

    cout << endl;

    ss.compare();
    
    cout << endl;

    ss.concatenate(s1, s2);

    cout << endl;

    ss.searchWord(Word);

    cout << endl;

    ss.searchChar(Charpy);

    cout << endl;

    ss.copy(s1, s2);
    cout << endl;


    return 0;
} 
