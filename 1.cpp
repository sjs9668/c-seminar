#include <iostream>
#include <string>
using namespace std;

class Account{
	int id, bank;
	string name;
public:
	Account(string name, int id, int bank){ 
		this->name = name;
		this->id = id;
		this->bank = bank;
	}
	void deposit(int money){
		bank += money;
	}
	string getOwner(){
		return name;
	}
	int inquiry(){
		return bank;
	}
	int withdraw(int money){
		return bank -= money;
	}
};

int main(){
	Account a("Kitae", 1, 5000);
	a.deposit(50000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
	int money = a.withdraw(20000);
	cout << a.getOwner() << "ÀÇ ÀÜ¾×Àº " << a.inquiry() << endl;
}