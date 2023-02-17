#include<iostream>
using namespace std;

int main() {
	int n;
	cout << "Enter a number ";
	cin >> n;
	for(int i=1; i<n; i++) cout << "* *" << endl;
	cout << "*" << endl;
	for(int i=1; i<n; i++) cout << "* *" << endl;
}