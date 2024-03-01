#include <iostream>
using namespace std;

void start ()
{
    cout << "1- add 2 numbers \n";
    cout << "2- subtract 2 numbers \n";
    cout << "3- multiply 2 numbers \n";
    cout << "4- divide 2 numbers \n";
    cout << "5- end  \n";
}
int add (int n1 ,int n2)
{
    return n1+n2;
}
int main()
{

    start();
    int choice;
    double a, b;
    cout << "enter your choice";
    cin >> choice;
    cin >> a >> b;
    if (choice == 1)
    {
        cout << add(a,b);
    }
    if (choice == 2)
    {
        cout << a - b;
    }
    if (choice == 3)
    {
        cout << a * b;
    }
    if (choice == 4 && b != 0)
    {
        cout << a / b;
    }
    if (choice == 4 && b == 0)
    {
        cout << " error";
    }
    if (choice == 5)
    {
        return 0;
    }
    return 0;
}