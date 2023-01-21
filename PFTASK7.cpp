#include <iostream>
using namespace std;
int digitSum(int);
main()
{
    system("cls");
    int num;
    cout << "Enter a number : ";
    cin >> num;
    int result = digitSum(num);
    cout << result;
}
int digitSum(int num)
{
    int sum = 0;
    int x = 0;
    while (num > 0)
    {
        x = num % 10;
        num = num / 10;
        sum = sum + x;
    }
    return sum;
}