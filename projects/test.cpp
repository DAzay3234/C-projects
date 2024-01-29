#include <iostream> 
#include "C:\Users\mdelh\OneDrive\Desktop\fundamontal.cpp\git_github\cpp\MyLibraries\ProblemeSolving.h"
using namespace std;
using namespace arr;
/*this c++  file is just for testin Mylabraries*/
int main()
{
    int number = Input::ReadPositifNumber("Read your age : ");
    string name = Input::readtext("enter your name ");
    cout << "Your name Is : " << name << endl;
    cout << "your age Is : " << number << endl;

    return 0;
}
