#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "enter ypur age => ";
    cin >> age;
    age;
    int ageInMouths = age * 12;
    int ageInWeeks = ageInMouths * 4;
    int ageIndays = ageInWeeks * 7;
    int ageINHours = ageIndays * 24;

    cout << "your age in mouths is  : " << ageInMouths << endl;
    cout << "your age in weeks  is  : " << ageInWeeks << endl;
    cout << "your age in  days  is  : " << ageIndays << endl;
    cout << "your age in hours  is  : " << ageINHours << endl;
    cin >> age;
    return 0;
}