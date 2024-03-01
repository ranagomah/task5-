#include <iostream>

using namespace std;
void set_powers(int array[], int len = 5, int m = 2)
{
    array[0] = 1;
    for (int i = 0; i < len; ++i)
    {
        if (i >0)
         array[i] = array[i - 1] * m;
        
          
    }
}
int main()
{

    int m, len, array[200];
    cin >> len >> m;
    set_powers(array, len, m);
    cout<<array[0]<<" ";
    for (int i = 1; i < len; ++i)
    {
        cout << array[i] << " ";
    }
}