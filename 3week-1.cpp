#include <iostream>
#include <string>
using namespace std;

class Member{
public:
	int id, grade;
	string name;
	void printInfo(){
		cout << "학번: " << id << endl << "학년: " << grade << endl << "이름: " << name << endl << endl;
	}
	int getid(int id){
		return this->id =id;
	}
	int getgrade(int grade){
		return this->grade = grade;
	}
	string getname(string name){
		return this->name = name;
	}
	void setid(){
		cout << "학번: " << id << endl;
	}
	void setgrade(){
		cout << "학년: " << grade << endl;
	}
	void setname(){
		cout << "이름: " << name << endl;
	}
};
int main(){
	int n;
	int g, q;
	string t;

	cin >> n;
	Member *m = new Member[n];
	
	for (int i = 0; i < n; i++){
		cin >> q >> g >> t;
		m[i].getid(q);
		m[i].getgrade(g);
		m[i].getname(t);
	}

	for (int i = 0; i < n; i++){
		m[i].setid();
		m[i].setgrade();
		m[i].setname();
	}

	delete[] m;
}