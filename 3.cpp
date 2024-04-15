#include <iostream>
using namespace std;

class Book{
	char *title;
	int price;
public:
	Book(const char* title, int price){
		this->title = new char[strlen(title) + 1];
		strcpy_s(this->title, strlen(title) + 1, title);
		this->price = price;
	}
	Book(const Book & b){
		this->title = new char[strlen(b.title) + 1];
		strcpy_s(this->title, strlen(b.title) + 1, b.title);
		this->price = b.price;
	}
	~Book(){
		delete[]title;
	}
	void set(const char * title, int price){
		delete[] this->title;
		this->title = new char[strlen(title) + 1];
		strcpy_s(this->title, strlen(title) + 1, title);
		this->price = price;
	}
	void show(){ cout << title << ' ' << price << "원" << endl; }
};

int main(){
	Book cpp("명품C++", 10000);
	Book java(cpp);
	java.set("명품자바", 12000);
	cpp.show();
	java.show();
}