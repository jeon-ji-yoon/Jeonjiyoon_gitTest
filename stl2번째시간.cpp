#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//�Ű������� �򰥸�.....!!!!!!!!! 
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
	v.push_back(pair<int, string>(30, "��")) ;
	v.push_back(pair<int, string>(19,"�뽺���̽�")); 
	v.push_back(pair<int, string>(20, "��"));
	v.push_back(pair<int, string>(18, "��"));
	v.push_back(pair<int, string>(87, "������"));
	
	sort(v.begin(), v.end());
	
	for(int i=0; i<v.size(); i++){
		cout<<v[i].second<<' ';
	} 
	
	*/
	//������ ������ �ΰ��ΰ�� => pair �ȿ� pair�� ����Ѵ� 
	vector<  pair(string, pair(int, int))    > v2;
	v2.push_back( pair(string, pair(int, int))("��Ű��", make_pair(90. 19990315))     );
	v2.push_back( pair(string, pair(int, int))("�ϵ���", make_pair(100, 19870315))     );
	v2.push_back( pair(string, pair(int, int))("����Ŭ��", make_pair(210,19856321))     );
	v2.push_back( pair(string, pair(int, int))("�߶��巹",make_pair(900,19845632))     );
	
	
	sort(v.begin(),v.end(), compare);
	return 0;
}
