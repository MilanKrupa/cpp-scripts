#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{

    int tab[10][10];
    srand(time(NULL));

	cout<<endl<<"-------------------Random characters-------------------"<<endl<<endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            tab[i][j] = rand() % 122 + 1;
            while ((tab[i][j] < 65) || (tab[i][j] > 90) && (tab[i][j] < 97))
            {
                tab[i][j] = rand() % 122 + 1;
            }
            cout<<setw(4)<<char(tab[i][j])<<" ";
        }
        cout<<endl<<endl;

    }
    cout<<endl<<"------------------Characters to upper case------------------"<<endl<<endl;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout<<setw(4)<<char(toupper(tab[i][j]))<<" ";
        }
        cout<<endl<<endl;
    }

    return 0;
}
