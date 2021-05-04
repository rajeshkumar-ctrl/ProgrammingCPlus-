#include <iostream>
using namespace std;

int main()

{

int stops;
int amountperstop;
int operationcost;

        cin >> stops;
bool dosra = true;

    cin >> amountperstop >> operationcost;


    int GetON[stops];
    int GetOFF[stops];

    for(int i=0;i<stops;i++)
    {
    bool chotha=true;
    while (chotha)
    {
        cin >> GetON[i] >> GetOFF[i];


        chotha = GetON[i] < 0 || GetON[i] > 800 || GetOFF[i] < 0 || GetOFF[i] > 800;;
        if (chotha)
        {
            cerr << "You entered a string or an invalid number" << endl;
        }
        cin.clear();
        cin.ignore(999, '\n');
    }
    }

    int finalEco;
    finalEco= stops*operationcost;

    int PassSum=0;

    for(int i=0;i<stops;i++)
    {
    PassSum= PassSum+GetOFF[i];
    }


int signal;
    if((PassSum*amountperstop)>=operationcost*stops)
    {
    signal= 1;
    }
    else
    {
    signal= 0;
    }
    cout<<signal;

return 0;
}
