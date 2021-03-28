#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string array1 [n];
    
    for( int i =0;i<n;i++)
    {
        cin>>array1[i];
    }

    int index=0;
    int i =0;
    int size = 100000;
    

    for(int i=0;i<n;i++)
    {
        if(array1[i].length() < size)
        {
          index = i;
          size = array1[i].length();  
        }
    }
    cout<<index+1;
    return 0;

}
