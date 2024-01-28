#include <iostream>
#include <string>
#include <limits>
using namespace std;

void Read_txt_EnKey(string& txt, int &Enkey, string Message)
{
    cout << Message;
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    getline(cin, txt);
    cout << "enter Encription Key : ";
    cin >> Enkey;
}

string Encryption(string text, int Enkey)
{
    string txt = text;
    for (int i = 0; i < txt.length(); i++)
    {
        txt.at(i) += Enkey;
    }

    return txt;
}

string DeEncruption(string text, int EnKey)
{
    string txt = text;
    for (int i = 0; i < txt.length(); i++) {
        txt.at(i) -= EnKey;
    }

    return txt;
}


int main()
{
    string text;
    int EnKey;
    int userChoice;

    cout << "type : [1] : To Encrypte a text\n";
    cout << "type : [2] : To deencrypte a text\n";
    cout << "=> ";
    cin >> userChoice; 
    
    switch (userChoice)
    {
    case 1:
        Read_txt_EnKey(text, EnKey, "enter the text : ");
        cout << "Encryption Key : " << EnKey << endl;
        cout << "Text after Encryption : " << Encryption(text, EnKey) << endl;
        break;
    case 2:
        Read_txt_EnKey(text, EnKey, "enter the encypted text : ");
        cout << "The original Text Is : " << DeEncruption(text, EnKey) << endl;
        break;
    default:
        cout << "unvalid command" << endl;
        break;
    }

    // close app //
    int close;
    cin >> close;
    //           //

    return 0;
}