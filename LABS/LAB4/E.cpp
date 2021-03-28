#include <iostream>
using namespace std;
int main()
{
    int lines;
    cin>>lines;

    string words [lines];


    for(int i =0;i<lines;i++)
    {
        cin>>words[i];
    }

    for(int i=0;i<lines;i++)
    {
        for(int k=0;k<words[i].length();k++)
        {
            if(words[i].substr(k,3)=="yes")
            {
                cout<<i+1;
                return 0;
            }
        }
    }

    cout<<"0";

return 0;
}
