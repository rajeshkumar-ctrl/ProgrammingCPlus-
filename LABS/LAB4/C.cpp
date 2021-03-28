#include <iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int index=0;
    int trios[num];
    for(int i =0;i<num;i++)
    {
        cin>>trios[i];
    }

    for(int i =1;i<num;i++)
    {
        if(trios[i+1]-trios[i]==trios[i]-trios[i-1])
        {
            index=i+1;
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
