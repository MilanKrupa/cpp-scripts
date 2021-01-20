#include <iostream>
#include <cstdlib>
#include <fstream>
#include <ctime>
#include "RandomizeArray.cpp"
using namespace std;

void DisplayCharacters(int *tab, int power)
{
	fstream outputFile;
    outputFile.open("output.txt", ios::out | ios::app);

  for (int i = 1; i < power; i++)
  {
  	if(outputFile.good()){
  	 	outputFile << char(*tab);
	   }
    cout << char(*tab++);
    if (i < power - 1)
    {

      cout << ", ";
          	if(outputFile.good()){
    	outputFile << ", ";
	}
    }
  }
  if(outputFile.good()){
  	outputFile<<endl;
  }
  cout << endl;
  outputFile.close();
}

int main()
{
  int i, j, k, power, t[100], characters;
  cout<<"Characters sorting\n Choose: \n\n 1)upper case\n 2)lower case\n";
  cin>>characters;
  cout<<"\nHow many characters to randomize? (2-99): ";
  cin>>power;
  if (power >= 2 && power <= 99 && (characters==1||characters==2))
  {
  	if(characters==1){
  		RandomizeArray(t, power, 65, 90);
	  }else{
	  	RandomizeArray(t, power, 97, 122);
	  }
    cout<<"\n\nRandomized characters: ";
    DisplayCharacters(t, power + 1);
    for (i = 1; i < power; i++)
    {
      for (j = power - 1; j >= i; j--)
      {
        if (t[j - 1] > t[j])
        {
          k = t[j - 1];
          t[j - 1] = t[j];
          t[j] = k;
        }
      }
    }
    cout<<"\nSorted characters: ";
    DisplayCharacters(t, power + 1);
    cout<<"\n";
    system("pause");
  }else{
  	cout<<"\nWrong display of characters (1 or 2) or amount (between 2 and 99) chosen";
  }
  return 0;
}
