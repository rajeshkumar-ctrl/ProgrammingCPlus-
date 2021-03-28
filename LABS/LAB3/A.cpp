#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array [n]= { };
    for( int i =0;i<n;i++)
    {
        cin>>array [i];
    }
    int maxxi=0;
    int indexx=0;
    for(int i=0;i<n;i++)
    {
        if(array[i]> maxxi)
        {
            indexx = i+1;
            maxxi = array[i];
        }
    }
    cout<<indexx;
    return 0;
}
