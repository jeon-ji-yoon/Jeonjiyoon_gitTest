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

void swapObject(Car&r1, Car&r2){
	Car tmp;
	tmp = r1;
	r1 = r2;
	r2 = tmp;
	r1.display();
	r2.display();
}


int main()
{
	Car mine(0,1,"black");
	Car yours(0,1,"red");
	swapObject(mine, yours);
	mine.display();
	yours.display();
}
