#include <iostream>
using namespace std;

int charToAsclValue(char character)
{
    return int(character);
}
char asclToChar(int asclValue)
{
    return char(asclValue);
}

int main()
{
    int convertType;
    cout << "-----ascl value app-----" << endl;
    cout << "frist choise the convert type :\n";
    cout << "--type : [1] to converte from character value to ascl value\n";
    cout << "--type : [2] to converte from ascl value to character\n";
    cout << "==> ";
    cin >> convertType;
    int ascl;
    char character;
    switch (convertType)
    {
        case 1:
            cout << "enter the character => ";
            cin >> character;
            cout << charToAsclValue(character);
            break;
        case 2:
            cout << "enter the ascl value = > ";
            cin >> ascl;
            cout << asclToChar(ascl) << endl;
            break;
        default:
            cout << "undefined value.! (1/2)";
            break;
    }
    cin >> ascl;
    cout << "kkkk" << endl;
    return 0;
}