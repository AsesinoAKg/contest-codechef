#include <iostream>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int upper = 0, lower = 0, number = 0, special = 0;
    if (str[0] >= 'A' && str[0] <= 'Z')
        cout<<"1"<<endl;
    else if (str[0] >= 'a' && str[0] <= 'z')
        cout<<"0"<<endl;
    else
        cout<<"-1"<<endl;
}