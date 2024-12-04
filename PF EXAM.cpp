#include<iostream>
#include<String>
using namespace std;
int main ()
{
	int choice;
 double balance, total_balance, deposit, withdraw, Exit, amount;
 cout<<"ENTER YOUR BALANCE";
 cin>>balance;
 cout<<"WRITE '1' TO CHECK BALANCE"<<endl;
 cout<<"WRITE '2' TO CHECK Deposite"<<endl;
 cout<<"WRITE '3' TO CHECK Withdraw"<<endl;
 cout<<"WRITE '4' TO CHECK Exit"<<endl;
 cin>>choice;
 
do
 {
 	switch (choice)
 	case 1 {
	 cout<<"YOUR CURRENT BALANCE IS :"<<balance<<endl;
		break;
	 }   
	 case 2 {
 	cout<<"Enter amount you want to deposite :"<<amount<<endl;
 	total_balance += amount;
	 cout<<"your new balance is:"<<total_balance<<endl;
		break;
	 } 
	 case 3 { 
	 if (total_balance >= withdraw)
	 cout <<amout is granted<<endl;
	 else if (total_balance <= withdraw)
	 cout <<insuffient balance""<<endl;
		break;
	 } 
	 total_balance -= balance;
	 case 4 { 
	 cout<<"program is exiting"<<endl;
		break;
	 }
 } while (choie !=4)
	return 0;
}
