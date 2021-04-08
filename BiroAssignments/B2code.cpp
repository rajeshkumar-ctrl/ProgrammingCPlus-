#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{       int n;
        cin>> n;

        int current_date;
        int current_month;
        int current_year;
        int counter=0;
        int birth_years[n];
        int birth_months[n];
        int birth_dates[n];
        int finalyears[n];
        int temp;
        int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
     for(int i=0;i<n;i++)
     {
     cin>>birth_years[i]>>birth_months[i]>>birth_dates[i];

     }

    cin>>current_year>>current_month>>current_date;
//Calculation for Years by dates months and years!
//It worked well but dont work on same year 2013 whyy
for(int i=0;i<n;i++)
{
    if (birth_dates[i] > current_date)
    {
        current_date = current_date + month[birth_months[i] - 1];
        current_month = current_month - 1;
    }


    if (birth_months[i] > current_month)
    {
        current_year = current_year - 1;
        current_month = current_month + 12;
    }


    if((current_year - birth_years[i])<100)
    {
    counter++;
    finalyears[counter]=birth_years[i];
    }
}


//This thing for remove duplicates and count them
int i,j,k;

	for(i=0;i<counter;++i)

		for(j=i+1;j<counter;)
		{
			if(finalyears[i]==finalyears[j])
			{
				for(k=j;k<counter-1;++k)
					finalyears[k]=finalyears[k+1];
    
				--counter;

			}
			else
				++j;
		}

//This thing for ascending order but works on all except last element
for(int i=0; i<=counter; i++)
    {
        for(int j=i+1; j<counter; j++)
        {
            if(finalyears[j] < finalyears[i])
            {
                temp = finalyears[i];
                finalyears[i] = finalyears[j];
                finalyears[j] = temp;
            }
        }
    }

    
    cout<<counter<<" ";
    for(int i=1; i<=counter; i++)
    {
        cout<<finalyears[i]<<" ";

    }
    return 0;
}
