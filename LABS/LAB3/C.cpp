#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array1 [n]= { };
    
    for( int i =0;i<n;i++)
    {
        cin>>array1[i];
    }

    int maxxi=-1;  

    for(int i=0;i<n;i++)
    {
        if(array1[i] > maxxi && array1[i] <=10 )
        {
            maxxi = array1[i];
        }
    }
    cout<<maxxi;
    return 0;
}
