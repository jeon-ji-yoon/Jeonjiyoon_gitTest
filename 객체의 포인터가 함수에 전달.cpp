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
	cout<<"�ӵ��� : " <<speed <<"���� : " <<gear <<"������ : " <<color <<endl;
}

void swapObject(Car * p1, Car * p2){
	Car tmp;
	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;
	p1->display();
	p2->display();
}

int main()
{
	Car mine(0,1,"black");
	Car yours(0,1,"red");
	swapObject(&mine, &yours);
	mine.display();
	yours.display();
}
