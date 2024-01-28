#include <iostream>
#include <vector>
#include <string>
using namespace std;


    vector<string> th;

    int main();
    int DisplayThinks()
    {
        int choice;
        cout << "type : [1] to see all added thinks" << endl;
        cout << "type : [2] to see a specifique thinks" << endl;
        cout << "type : [3] to restart the app and clear all" << endl;
        cout << "type : [4] to close the app" << endl;
        cout << " => ";
        cin >> choice;
        int thChoice;
        switch (choice)
        {
        case 1:
            for (int i = 0; i < th.size(); i++)
            {
                cout << "think number " << i + 1 << " : " << endl;
                cout << th.at(i) << endl;
            }
            break;
        case 2:
            cout << "enter the think  number => ";
            cin >> thChoice;
            cout << th.at(thChoice) << endl;
            break;
        case 3:
            th.clear();
            main();
            break;
        case 4:
            return 0;
            break;
        default:
            cout << "undefined command (1/4)" << endl;
            break;
        }

        DisplayThinks();
        return 0;
}

int main()
{
    cout << "----what-to-do-app-----" << endl;
    int thinknums;

    cout << "how many thinks do you want to add  => ";
    cin >> thinknums;
    // cout << "!!please do not use spaces use (- or _ )!!" << endl;
    string think;
    for (int i = 0; i < thinknums; i++)
    {
        cout << "type think number " << i+1 << " : " << endl;
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        getline(cin, think);
        th.push_back(think);
    }
    string IsSave;
    cout << "do you want to save those thinks ? (yes/no) => ";
    cin >> IsSave;
    if (IsSave == "yes")
    {
        DisplayThinks();
    }
    else if (IsSave == "no")
    {
        th.clear();
        main();
    }

    return 0;
    
}