#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{

    int arr[11][11];
    int diagonal1=0, diagonal2=0;

    for (int i = 1; i < 11; i++)
    {
      for (int j = 1; j < 11; j++)
      {
        arr[i][j] = i * j;
        cout << setw(4) << arr[i][j];
      }
      cout << endl;
  }


for (int i = 1; i <= 10; i++)
  {
    diagonal1 += arr[i][i];
  }

   int j = 10;
  for (int i = 1; i <= 10; i++)
  {
    diagonal2 += arr[i][j];
    j--;
  }


  cout << "\nSum of digits on diagonal 1: " << diagonal1<<"\n\n";
  cout << "Sum of digits on diagonal 2: " << diagonal2<<"\n\n";
  cout << "Total: " << diagonal1+diagonal2<<"\n\n";

  system("pause");

  return 0;
}
