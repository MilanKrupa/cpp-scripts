#include <iostream>
#include <cstdlib>
#include <ctime>
#include "RandomizeArray.cpp"
using namespace std;

void DisplayChars(int *tab, int moc)
{
  for (int i = 1; i < moc; i++)
  {
    cout << char(*tab++);
    if (i < moc - 1)
    {
      cout << ", ";
    }
  }
  cout << endl;
}

int main()
{
  int i, j, k, moc, t[100];
  cout<<"Bubble sorting\n\n";
  cout<<"How many characters to randomize? (2-99): ";
  cin>>moc;
  if (moc >= 2 && moc <= 99)
  {
    RandomizeArray(t, moc, 97, 122);
    cout<<"\n\nRandomized characters: \n\n";
    DisplayChars(t, moc + 1);
    for (i = 1; i < moc; i++)
    {
      for (j = moc - 1; j >= i; j--)
      {
        if (t[j - 1] > t[j])
        {
          k = t[j - 1];
          t[j - 1] = t[j];
          t[j] = k;
        }
      }
    }
    cout<<"\n\nSorted characters: ";
    DisplayChars(t, moc + 1);
    cout<<"\n";
    system("pause");
  }
  return 0;
}
