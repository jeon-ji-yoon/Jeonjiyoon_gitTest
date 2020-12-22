#include <iostream>
#include <string>
using namespace std;


class Car{
	int speed;
	int gear;
	string color;
public:
	Car(int s = 0, int g = 1, string c = "white") : speed(s), gear(g), color(c){
	}
	void display();
};
void Car::display(){
	cout<<"속도는 : " <<speed <<"기어는 : " <<gear <<"색상은 : " <<color <<endl;
}

void swapObject(Car c1, Car c2){
	Car tmp;
	tmp = c1;
	c1 = c2;
	c2 = tmp;
	c1.display();
	c2.display();
}


int main()
{
	Car mine(0,1,"black");
	Car yours(0,1,"red");
	swapObject(mine, yours);
	mine.display();
	yours.display();
}
