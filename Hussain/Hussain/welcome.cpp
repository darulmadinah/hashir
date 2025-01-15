#include <iostream>
using namespace std;
int main() {
	int num1 , num2,num3 ,num4,num5,num6,avj1,avj2;
	cout << "Enter number 1....";
	cin >> num1;
	cout << "Enter number 2....";
	cin >> num2;
	cout << "Enter number 3....";
	cin >> num3;
	cout << "Enter number 4....";
	cin >> num4;
	cout << "Enter number 5....";
	cin >> num5;
	cout << "Enter number 6....";
	cin >> num6;
	avj1 = num1 + num2 + num3 + num4 + num5 + num6 ;
	avj2 = avj1 / 6;
	cout << "The Average of all six numbers is ....."<<avj2;
	return 0;
}