/*
    small to capital character and the reverse functions
*/
#include <iostream>
#include <vector>
using namespace std;

string smallTOCapitale(string mot)
{
    for (int i = 0; i < mot.size(); i++)
    {
        if (mot[i] >= 'a' && mot[i] <= 'z')
        {
            mot[i] -= 32;
        }
        
    }
    
    return mot;
}

string CapitaleToSmall(string mot)
{
    for (int i = 0; i < mot.size(); i++)
    {
        if (mot[i] >= 'A' && mot[i] <= 'Z')
        {
            mot[i] += 32;
        }
        
    }
    
    return mot;
}

int main()
{
    string mot;
    cout << "what do you want ? =>\n"
    << "type : [1] for Capitale to small\n"
    << "type : [2] for small to capitale\n" << endl;
    int choice;
     cin >> choice;
     switch (choice)
     {
         case 1:
                cout << "enter the string => ";
                cin >> mot;
                cout << CapitaleToSmall(mot) << endl;
             break;
         case 2:
                cout << "enter the string => ";
                cin >> mot;
                cout << smallTOCapitale(mot) << endl;
             break;
         default:
                cout << "undefined command enter (1/2) " << endl;
             break;
     }
    return 0;
}