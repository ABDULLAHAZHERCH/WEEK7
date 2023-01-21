#include <iostream>
using namespace std;
main()
{
    system("cls");
    int y;
    while (y != 'y')
    {
        cout << "Enter a Number : ";
        cin >> y;
        if (y <= 0)
        {
            cout << "ERROR !  Enter number greater than 0 " << endl;
        }
        else
        {
            break;
        }
    }
}