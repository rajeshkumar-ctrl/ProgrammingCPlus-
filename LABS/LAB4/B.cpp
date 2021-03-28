#include <iostream>
using namespace std;
int main()
{
    int mini;
    cin>>mini;
    int index=0;

    int list_mini[mini];
    for(int i =0;i<mini;i++)
    {
        cin>>list_mini[i];
    }

    for(int i =0;i<mini;i++)
    {
        if(list_mini[i+1]<list_mini[i])
        {
            index=i+2;
            cout<<index;
            return 0;
        }
        else 
        {
            index=0;
        }

    }
    
    cout<<index;
return 0;
}
