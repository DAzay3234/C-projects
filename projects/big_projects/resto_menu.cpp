#include <iostream>
#include <array>
#include <vector>

using namespace std;

// Constants needed
array<string, 19> menu = {
    "TOMATO SOUP", "CHICKEN SOUP", "CRISPY CORNE",
    "GUCAMOLE SALAD", "CHICKEN SALAD",
    "GRILLED FISH WITH POTATO", "CHIKEN AND RICE", "TURKXEY AND HAM PIE", "VEGETABLE PASTA ",
    "FRUIT AND CREAM", "ICE CREAM", "CHOCLATE CAKE", "STRAWBERRY CAKE", "APPLE PIE",
    "MINERAL WATER", "FRESH FRUIT JUICE ", "COFFEE", "TEA ", "WINES",
};

int prices[19] = {10, 10, 10, 10, 10, 10, 10, 10, 10, 5, 5, 5, 5, 5, 2, 2, 2, 2, 2};

//array<int, 10> commands = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
vector<int> commands;

//===========
int TakeMenu()
{
    cout << "Welcome to the resto menu app (:\n"
         << "==============Let's take the menu ========================\n"
         << "=====STARTERS=====\n"
         << "[1] : TOMATO SOUP  ......................[$ 10.00]\n"
         << "[2] : CHICKEN SOUP ......................[$ 10.00]\n"
         << "[3] : CRISPY CORNE ......................[$ 10.00]\n"
         << "=====SALADS=====\n"
         << "[4] : GUCAMOLE SALAD ....................[$ 10.00]\n"
         << "[5] : CHICKEN SALAD .....................[$ 10.00]\n"
         << "=====MAIN COURSES=====\n"
         << "[6] : GRILLED FISH WITH POTATO ..........[$ 10.00]\n"
         << "[7] : CHICKEN AND RICE ...................[$ 10.00]\n"
         << "[8] : TURKEY AND HAM PIE ...............[$ 10.00]\n"
         << "[9] : VEGETABLE PASTA ...................[$ 10.00]\n"
         << "=====DESSERT=====\n"
         << "[10] : FRUIT AND CREAM ..................[$ 05.00]\n"
         << "[11] : ICE CREAM ........................[$ 05.00]\n"
         << "[12] : CHOCOLATE CAKE ....................[$ 05.00]\n"
         << "[13] : STRAWBERRY CAKE ..................[$ 05.00]\n"
         << "[14] : APPLE PIE ........................[$ 05.00]\n"
         << "=====DRINKS=====\n"
         << "[15] : MINERAL WATER ....................[$ 02.00]\n"
         << "[16] : FRESH FRUIT JUICE ................[$ 02.00]\n"
         << "[17] : COFFEE ............................[$ 02.00]\n"
         << "[18] : TEA ..............................[$ 02.00]\n"
         << "[19] : WINES ............................[$ 02.00]\n"
         << "                                                          \n"
         << endl;

    cout << "What do you want to order?" << endl;
    cout << "(1-19) ";
    bool isMore = true;
    int comNum = 0;
    int i = 0;
    do
    {
        commands.push_back(0);
        cout << "Enter order num => ";
        cin >> commands[i];
        cout << "Type [1] to add another command, or [2] to see the bill: ";
        cin >> comNum;
        isMore = (comNum == 1);
        i++;
    } while (isMore);
    cout << "  " << endl;

    cout << "======================bill======================" << endl;
    cout << "   " << endl;
    cout << "You have to pay for:" << endl;

    int total = 0;
    vector<int> repeat(19, 0);

    for (int i = 0; i < commands.size(); i++)
    {
        int index = commands[i];
        repeat[index - 1]++;
        total += prices[index - 1];
    }

    for (int i = 0; i < commands.size(); i++)
    {
        int index = commands[i] - 1;
        if (repeat[index] > 0)
        {
            cout << menu[index] << "....................*" << repeat[index] << endl;
            repeat[index] = 0; // Reset the repeat count
        }
    }

    cout << "TOTAL TO PAY" << endl;
    cout << "[$ " << total << ".00]" << endl;
    cout << "THANKS FOR YOUR VISIT...." << endl;

    return 0;
}

int main()
{
    cout << "===================" << endl;
    cout << "=====RESTO-MENU====" << endl;
    cout << "===================" << endl;

    TakeMenu();

    return 0;
}
//V 2.1.0