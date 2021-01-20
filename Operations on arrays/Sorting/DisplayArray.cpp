#include <iostream>
using namespace std;

void DisplayArray(int *arr, int power)
{
  for (int i = 1; i <= power; i++)
  {
    cout << *arr++;
    if (i < power)
      cout << ", ";
  }
  cout << endl;
}
