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
			
			//정렬 기준을 선택한다... 여기서는 정렬 기준을 나이 로 한다 
	        return this->age < student.age;
        }
	
};
	
	
	

int main(void){
	
	Student s[3]={
		Student("김", 100),
		Student("박", 215),
		Student("전", 22)
	
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
