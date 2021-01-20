#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <string>

using namespace std;

int main() {

	int arr[10][10], myNumber = 10, rows, columns, highest=0, lowest=100, highestcount=0, lowestcount=0;
	string name = "John", surname="Doe", username;

	cout<<endl<<name<<" "<<surname<<"'s number is: "<<myNumber<<endl<<endl;
	cout<<"Type in your name: "<<endl;
	cin>>username;
	cout<<endl<<endl<<username<<", how many rows is the array supposed to have?"<<endl;
	cin>>rows;
	cout<<endl<<"And how many columns?"<<endl;
	cin>>columns;
	cout<<endl;

	srand(time(NULL));
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < columns; j++) {
			arr[i][j] = rand() % 100 + 1;
			cout<<setw(4)<<arr[i][j];
			if(arr[i][j]>highest){
				highest = arr[i][j];
			}
			if(arr[i][j]<lowest){
				lowest = arr[i][j];
			}
	}
		cout<<endl;
	}


for(int i = 0; i < rows; i++) {
		for(int j = 0; j < columns; j++) {
			if(arr[i][j]==highest) highestcount++;
			if(arr[i][j]==lowest) lowestcount++;
	}
	}

	cout<<endl<<"Highest number is: "<<highest<<" and it appeard "<<highestcount<<" times. Lowest number is: "<<lowest<<" and it appeared "<<lowestcount<<" times."<<endl;

	system("pause");
	return 0;
}
