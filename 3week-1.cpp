#include <iostream>
#include <string>
using namespace std;

class Member{
public:
	int id, grade;
	string name;
	void printInfo(){
		cout << "�й�: " << id << endl << "�г�: " << grade << endl << "�̸�: " << name << endl << endl;
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
		cout << "�й�: " << id << endl;
	}
	void setgrade(){
		cout << "�г�: " << grade << endl;
	}
	void setname(){
		cout << "�̸�: " << name << endl;
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