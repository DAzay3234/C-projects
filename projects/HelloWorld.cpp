#include <iostream>
using namespace std;/* h e l l o  w o r l d*/

int main()
{
    const int start = int('a'); 

    for (int i = start; i <= int('h'); i++)
    {
        for(int j = start; j <= int('e'); j++)
        {
            for (int r = start; r <= int('l'); r++)
            {
                for (int i2 = start; i2 <= int('l'); i2++)
                {
                    for (int j2 = start; j2 <= int('o'); j2++)
                    {
                        cout << char(i) << char (j) << char(r) << char(i2) << char(j2) << "\n";
                        
                    }
                    
                }
            }
        }
    }

    int test;
    cin >> test;

    return 0;
}