#include <iostream>
#include "Date.h"
#include<string>
using namespace std;

void main() {

	date d(24, 1, 2002);
	cin >> d;
	cout << d.what_day();
	
	

	system("pause");
}