#include <iostream>
using namespace std;


void readPositifNumber(int &number, string Message)
{
    do{
        cout << Message;
        cin >> number;
    } while(number < 0);
}

void ReadCharacter(char &op)
{
    cout << "enter operator symbole : ";
    cin >> op;
}

int operation(int num1, int num2, char op)
{
    switch (op)
    {
    case '+':
        return num1 + num2;
    case '-':
        return num1 - num2;
    case '*':
        return num1 * num2;
    case '/':
        if  (num2 == 0) cout << "number second must be !=0 ";
        else return num1 / num2 ;
    }

    return 0;
}

void PrintResults(int num1, int num2, int Result, char op)
{
    cout << num1 << " " << op << " " << num2 << " = " << Result << endl;
}

int main()
{
    int num1;
    int num2;
    char op;

    readPositifNumber(num1, "enter frist number : ");
    readPositifNumber(num2, "enter second number : ");
    ReadCharacter(op);

    PrintResults(num1, num2, operation(num1, num2, op), op);

    return 0;
}