#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <string>

using namespace std;

int main() {

	int arr[10][10], arr2[10][10], arr3[10][10], myNumber = 10, rows, columns;
	string name = "John", surname="Doe", username;

	cout<<endl<<name<<" "<<surname<<"'s number is: "<<myNumber<<endl<<endl;
	cout<<"Type in your name: "<<endl;
	cin>>username;
	cout<<endl<<endl<<username<<", how many rows is the array supposed to have?"<<endl;
	cin>>rows;
	cout<<endl<<"And how many columns?"<<endl;
	cin>>columns;
	cout<<endl<<"---------------------Array 1-------------------"<<endl;

	srand(time(NULL));
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < columns; j++) {
			arr[i][j] = rand() % 100 + 1;
			cout<<setw(4)<<arr[i][j];
	}
		cout<<endl;
	}
	cout<<endl<<"---------------------Array 2-------------------"<<endl;

	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < columns; j++) {
			arr2[i][j] = rand() % 100 + 1;
			cout<<setw(4)<<arr2[i][j];
	}
		cout<<endl;
	}
	cout<<endl<<"---------------------Arrays added up-------------------"<<endl;

for(int i = 0; i < rows; i++) {
		for(int j = 0; j < columns; j++) {
		arr3[i][j] = arr[i][j] + arr2[i][j];
		cout<<setw(4)<<arr3[i][j];
	}
	cout<<endl;
	}


	system("pause");
	return 0;
}
