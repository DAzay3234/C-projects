#include <iostream>
using namespace std;

int main()
{
    int a ,b;
    char op;
    cout << "-----Basic calculator-----" << endl;
    cout << "for int only....!" << endl;
    cout << "enter the number one : " ;
    cin >> a;
    cout << "enter the number two : ";
    cin >> b;
    cout << "enter the operator symbole or enter 'a' to all : ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << a << " + " << b << " = " << a + b << endl;
        break;
    case '-':
        cout << a << " - " << b << " = " << a - b << endl;
        break;
    case '*':
        cout << a << " * " << b << " = " << a * b << endl;
        break;
    case '/':
        if(b == 0)
        {
            cout << "b most be !- 0........!" << endl;
            break;
        }
        cout << a << " / " << b << " = " << a / b << endl;
    case 'a':
        cout << a << " + " << b << " = " << a + b << endl;
        cout << a << " - " << b << " = " << a - b << endl;
        cout << a << " * " << b << " = " << a * b << endl;
        if(b == 0)
        {
            cout << "b most be !- 0........!" << endl;
            break;
        }
        cout << a << " / " << b << " = " << a / b << endl;
    default:
    cout << "indefined op symbole...!" << endl;
        break;
    }
    cin >> b;
    cout << b;
    return 0;
}