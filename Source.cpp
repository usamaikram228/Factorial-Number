#include <iostream>

using namespace std;

int main() 
{
    int num;
    cout << "Enter a number : ";
    cin >> num;

    while (num < 0)
    {
        cout << "This is invalid input.\n"
            << "Please enter a number again : ";
        cin >> num;
    }
    int i = 1 , factorial = 1;
    while (i <= num)
    {
        factorial = factorial * i;
        i++;
    }
    cout << "Factorial of given number is : " << factorial << endl;
    return 0;
}