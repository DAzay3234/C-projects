#include <iostream>
using namespace std;

int main()
{
	int number1, number2;
	char op;
	cout << "enterg the  frist number : ";
	cin >> number1;
	cout << "enter the second numbr : ";
	cin >> number2;
	cout << "enter the operator : ";
	cin >> op;

	switch (op)
	{
	case '+' :
		cout << number1 << " + " << number2 << " = " << number1 + number2 << endl;
		break;
	case '-' :
		cout << number1 << " - " << number2 << " = " << number1 - number2 << endl;
		break;
	case '*' :
		cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;
		break;
	case '/' :
		cout << number1 << " / " << number2 << " = " << number1 / number2 << endl;
		break;
	default : 
		cout << "unvalid operator....!" << endl;
	}
	return 0;
}