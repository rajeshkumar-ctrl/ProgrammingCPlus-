#include <iostream>
using namespace std;

struct slaves {
    int numbers;
    int indexes;
};
int main()
{

    int n;
    cin>>n;

    slaves Hmnumbers [n];

    for (int i = 0; i < n; i++)
        {
        cin >> Hmnumbers[i].numbers;
    }

    int counter = 0;
    for (int i = 0; i < n; i++) {
        if (Hmnumbers[i].numbers >= 1000) {
            counter++;
        }
    }
    cout<<counter<<endl;


    int indexes[n];
    counter = 0;
    for (int i = 0; i < n; i++) {
        if (Hmnumbers[i].numbers >= 1000) {
            counter++;
            indexes[counter] = i;
        }
    }

    for (int i = 1; i <= counter; i++) {
        cout << indexes[i]+1 << " ";
    }
    return 0;
}
