#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "");
	int a;
	int b;
	cout << "Введите 2 числа для сложения: ";
	cin >> a;
	cin >> b;
	cout << a + b << endl;
}