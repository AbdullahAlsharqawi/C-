//============================================================================
// Name        : ATMmachine.cpp
// Author      : Abdullah
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void showMenu(){
	cout<< "********MENU********" <<endl;
	cout<< " 1. Check Balance   " <<endl;
	cout<< " 2. Deposit   " <<endl;
	cout<< " 3. Withdraw   " <<endl;
	cout<< " 4. Exit   " <<endl;
	cout<< "********************" <<endl;
}

int main() {
	int option;
	double balance=500;
	do{
		showMenu();
			cout<<"Option: " ;
			cin>>option;
			system("cls");
			switch (option){
			case 1:
				cout<<"Balance is: "<< balance <<"$"<<endl;
				break;
			case 2:
					cout<<"Deposit: ";
					double deposit;
					cin>> deposit;
					balance+= deposit;
					break;
			case 3:
				cout<<"Withdraw: ";
				double withdraw;
				cin>> withdraw;

				if(withdraw < balance){
					balance-= withdraw;
				}
				else{
					cout<<"No enenogh money "<<endl;
				}
				break;
			}
	}while(option!=4);

	return 0;
}
