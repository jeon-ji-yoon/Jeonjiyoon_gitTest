#include<iostream>
#include<algorithm>
#include<string>
using namespace std;





class Student{
	public:
		string name;
		int age;
	
		Student(string n, int a) : name(n), age(a){
			
		};
		
		bool operator <(Student &student){
			
			//���� ������ �����Ѵ�... ���⼭�� ���� ������ ���� �� �Ѵ� 
	        return this->age < student.age;
        }
	
};
	
	
	

int main(void){
	
	Student s[3]={
		Student("��", 100),
		Student("��", 215),
		Student("��", 22)
	
	};
	 
	
	int i;
	for(i=0; i<3; i++){
		cout<<s[i].age <<" ";
	}
	cout<<endl;
	sort(s, s+3); 
	
	
	for(i=0; i<3; i++){
		cout<<s[i].age <<" ";
	}
	return 0;
	
}
