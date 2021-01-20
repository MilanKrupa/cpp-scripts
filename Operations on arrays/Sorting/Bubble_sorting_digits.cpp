#include <iostream>
#include <cstdlib>
#include <ctime>
#include "RandomizeArray.cpp"
#include "DisplayArray.cpp"
using namespace std;

int main()
{
  int i, j, k, power, t[100];
  cout<<"Bubble sorting \n\n";
  cout<<"How many digits to randomize? (2-99):";
  cin>> power;
  if (power >= 2 && power <= 99)
  {
    RandomizeArray(t, power, 10, 99);
    cout<<"\n\n Randomized digits: \n\n";
    DisplayArray(t, power);
    for (i = 1; i < power; i++)
    {
      for (j = power - 1; j >= i; j--)
      {
        if (t[j - 1] < t[j])
        {
          k = t[j - 1];
          t[j - 1] = t[j];
          t[j] = k;
        }
      }
    }
    cout<<"\n\n Sorted digits: \n\n";
    DisplayArray(t, power);
    cout<<"\n";
    system("pause");
  }
  return 0;
}
