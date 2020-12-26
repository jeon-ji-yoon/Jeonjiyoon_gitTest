#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//매개변수가 헷갈림.....!!!!!!!!! 
bool compare(   pair<string, pair<int, int> > a,pair<string, pair<int, int> > b){
	if(a.second.first==b.second.first){
		return a.second.second > b.second.second;
	}
	else{
		return a.second.first > a.second.first; 
		
	}
}

int main(void){
	/*vector<  pair<int, string>        > v;
	v.push_back(pair<int, string>(30, "박")) ;
	v.push_back(pair<int, string>(19,"노스페이스")); 
	v.push_back(pair<int, string>(20, "스"));
	v.push_back(pair<int, string>(18, "나"));
	v.push_back(pair<int, string>(87, "랄프로"));
	
	sort(v.begin(), v.end());
	
	for(int i=0; i<v.size(); i++){
		cout<<v[i].second<<' ';
	} 
	
	*/
	//정렬의 기준이 두개인경우 => pair 안에 pair를 사용한다 
	vector<  pair(string, pair(int, int))    > v2;
	v2.push_back( pair(string, pair(int, int))("디키즈", make_pair(90. 19990315))     );
	v2.push_back( pair(string, pair(int, int))("니들즈", make_pair(100, 19870315))     );
	v2.push_back( pair(string, pair(int, int))("유니클로", make_pair(210,19856321))     );
	v2.push_back( pair(string, pair(int, int))("발란드레",make_pair(900,19845632))     );
	
	
	sort(v.begin(),v.end(), compare);
	return 0;
}
