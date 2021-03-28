#include <iostream>
using namespace std;
int main()
{
    int n;

    cin>>n;
 int blood_p [n];
    for(int i=0;i<n;i++)
    {
     cin>>blood_p[i];
    }

    int mini=1000;
    int index=0;
    for(int i=0;i<n;i++)
    {
     if((blood_p[i]<mini)&&(blood_p[i]<100))
     {
         index =i;
         mini= blood_p[i];
         cout<<index+1;
         return 0;
     }
     else
     {
         index = -1;
     }
    }

    cout<<index+1;
    return 0;
}
