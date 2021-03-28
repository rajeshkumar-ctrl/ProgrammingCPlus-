#include <iostream>
using namespace std;

struct Person {
    string persi;
    int crimes;
};
int main()
{

    int n;
    cin>>n;

    Person listofp [n];
    Person numberofcrime[n];

    for (int i = 0; i < n; i++)
        {
        cin >> listofp[i].persi>>numberofcrime[i].crimes;
        }



    int counter = 0;
    for (int i = 0; i < n; i++) {
        if (numberofcrime[i].crimes >= 3) {
            counter++;
        }
    }

    cout<<counter<<endl;


    int indexes[n];
    counter = 0;

    for (int i = 0; i < n; i++) {
        if (numberofcrime[i].crimes>= 3) {
            counter++;
            indexes[counter] = i;
            cout<< listofp[i].persi<<endl;
        }
    }
    return 0;
}
