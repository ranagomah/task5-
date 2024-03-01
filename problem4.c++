#include <iostream>
using namespace std;

int read_array(int array[],int n)
{

  for (int i; i < n; i++)
  {
    for (int j; j < n; j++)
    {

      if (array[i] == array[j]&& i!=j)
      {
        cout << " not palindromic";
        return 0;
      }
    }
  }
        cout << "palindromic";
  return 0;
}
int main(){
  int array[]={1,5,6,8,9};
 read_array(array,5);
  return 0;
}