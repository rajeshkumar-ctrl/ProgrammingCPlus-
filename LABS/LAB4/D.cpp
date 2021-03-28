#include <iostream>
using namespace std;
int main()
{
    string num;
    getline(cin,num);

    for(int i =0;i<num.length();i++)
    {
        if(num.substr(i,3)=="adv")
        {
            cout<<"yes";
            return 0;
        }

    }
    cout<<"no";

return 0;
}
