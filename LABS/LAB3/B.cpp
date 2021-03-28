#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int array1 [n]= { };
    int array2 [n]= { };
    for( int i =0;i<n;i++)
    {
        cin>>array1[i]>>array2[i];
    }

    int maxxi=100000;
    int score;    

    for(int i=0;i<n;i++)
    {
        if(array1[i]- array2[i] < maxxi )
        {
            score = array1[i]-array2[i];
            maxxi = score;
        }
    }
    cout<<score;
    return 0;
}
