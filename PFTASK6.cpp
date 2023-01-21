#include <iostream>
using namespace std;
int totalDigits(int, int);
main()
{
    system("cls");
    int num, frequent;
    cout << "Enter A Number : ";
    cin >> num;
    cout << "Enter Frequent number : ";
    cin >> frequent;
    int result = totalDigits(num, frequent);
    cout << result;
}
int totalDigits(int num, int frequent)
{
    int digits = 0;
    while (num > 0)
    {
        if (num % 10 == frequent)
        {
            digits++;
        }
        num = num / 10;
    }
    return digits;
}