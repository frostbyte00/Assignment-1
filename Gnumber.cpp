#include <iostream>
using namespace std;
int main()
{
    int first, second, third, greatest;
    cout << "Enter the first number : ";
    cin >> first;
    cout << "Enter the second number : ";
    cin >> second;
    cout << "Enter the third number : ";
    cin >> third;

    if((first>=second)&&(first>=third))
    cout << "Largest number is " << first;
    else if((second>=first)&&(second>=third))
    cout << "Largest number is " << second;
    else 
    cout << "Largest number is " << third;

}
    