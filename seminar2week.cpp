#include <iostream>
#include <string>
using namespace std;

// 1�� int max(int n,int m){
//
//	if (n > m){
//		return n;
//	}
//	else if (n < m)
//	{
//		return m;
//	}
//	else{
//		return 0;
//	}
//	
//	
//}

//2�� void maxnum(){
//	int max;
//	cin >> max;
//	
//	for (int i = 0; i< max; i++){
//		for (int j = max - 1; j>i; j--){
//			cout << " ";
//		}
//
//		for (int j = 0; j<2 * i + 1; j++){
//			cout << "*";
//		}
//		cout << endl;
//	}
//	
//}
class Item
{
	
public: Item(){
			itemName = "null";
			price = 0;
}
		string itemName;
		int price;

};




int main(){
/*1�� int n, m;
	
	cin >> n >> m;
	cout << max(n,m);
	
	return 0;*/

	
	/*2�� maxnum();*/
	Item item;
	cout << item.itemName;
	cout << item.price;
	
	cout << endl << endl;

	item.itemName = "�ǹٶ��";
	item.price = 3400;

	cout << item.itemName;
	cout << item.price;
	
	return 0;
}