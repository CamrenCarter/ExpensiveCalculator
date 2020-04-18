//Expensive Calculator
//3/27/2018
//Author: Camren Carter
//Date: 4/18/2020


#include<iostream>
#include<string>
#include<math.h>
using namespace std;

int main()
{

	float x, y, add, sub, divide, exponent, multiply;
	

	string nameString;

	cout << "What is your name? ";
	getline(cin, nameString);

	cout << "Enter a number: ";
	cin >> x;

	cout << "Enter a second number: ";
	cin >> y;

	add = x + y;
	sub = x - y;
	divide = x / y;
	multiply = x * y;
	exponent = pow(x,y);
	

	cout << "When the two numbers are added they equal: " << add;
	cout << "\nWhen the two numbers are subtracted they equal: " << sub;
	cout << "\nWhen the two numbers are divided they equal: " << divide;
	cout << "\nWhen the two numbers are multiplied they equal: " << multiply;
	cout << "\nThe power of the two numbers equal: " << exponent << "\n";


	system("Pause");
	return 0;



}