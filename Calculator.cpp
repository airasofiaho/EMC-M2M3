#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;

void Sum(){
	int num1, num2;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;

	cout << "Sum is: " << num1+num2 << endl;
}

void Diff(){
	int num1, num2;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;

	cout << "Difference is: " << num1-num2 << endl;
}

void Prod(){
	int num1, num2;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;

	cout << "Product is: " << num1*num2 << endl;
}

void Div(){
	int num1, num2;
	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;

	cout << "Quotient is: " << num1/num2 << endl;
}

int main(){
	int choice, op;
	system("cls");
	do{  
		system("cls");
		cout << "***CALCULATOR***" << endl;
		cout << "[0]Exit" << endl;
		cout << "[1]Addition" << endl;
		cout << "[2]Subtraction" << endl;
		cout << "[3]Multiplication" << endl;
		cout << "[4]Division" << endl << endl;
		
		cout << "Enter option: ";
		cin >> op;

		switch(op){
		case 1:
			Sum();
			system("pause");
			break;
		case 2:
			Diff();
			system("pause");
			break;
		case 3:
			Prod();
			system("pause");
			break;
		case 4:
			Div();
			system("pause");
			break;
		case 0:
			cout << "Thank you for using the calculator." << endl;
			cout << "Press 0 to exit." << endl;
			system("pause");
			exit(0);
		default:
			cout << "Invalid Input!" << endl;
			system("pause");
		}
	}while(op != 0);
}

