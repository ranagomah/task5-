#include <iostream>
using namespace std;

string reverse_str(const string &str)
{
    string name = str;
    int start = 0;
    int end = str.size() - 1;
    while (start < end)
    {
        char temp;
        temp = name[start];
        name[start] = name[end];
        name[end] = temp;
        start++;
        end--;
    }
    return name;
}

int main()
{
    string name = "khaled";
    string a = reverse_str(name);
    cout<< a;

}