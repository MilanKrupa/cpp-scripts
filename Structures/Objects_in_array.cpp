#include <iostream>
using namespace std;

struct car{

    string brand;
    string model;
    string color;
    int year;
    float price;
    int horsepower;
};
struct car cars[5];

void createCar(int count, string brand, string model,string color,int year,float price,int horsepower){
    cars[count].brand = brand;
    cars[count].model = model;
    cars[count].color = color;
    cars[count].year = year;
    cars[count].price = price;
    cars[count].horsepower = horsepower;
}

int main(){
    int averageAge=0, totalPrice=0, red=0, black=0;

    createCar(0,"Toyota","GR Yaris","red",2021,140000,261);
    createCar(1,"Mazda","Rx8","black",2012,40000,250);
    createCar(2,"Honda","NSX","red",2020,150000,294);
    createCar(3,"Nissan","Skyline R34","black",2002,60000,190);
    createCar(4,"Subaru","Impreza","black",2008,90000,280);

    for(int i=0; i<5; i++){
        averageAge += cars[i].year;
        totalPrice += cars[i].price;

        if(cars[i].color=="red")red++;
        else if(cars[i].color=="black")black++;
    }

    averageAge = 2021 - (averageAge / 5);

    cout << "\nAverage age: "<<averageAge<<" years\nTotal price: "<<totalPrice<<"pln \nRed cars: "<<red<<"\nBlack cars: "<<black<<"\n\n";

    system("pause");
	return 0;
}
