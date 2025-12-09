// banking management system
#include<iostream>
using namespace std;
class BankAccount{
	private:
		string name;
		int account_number;
		double account_balance;
	public :
		void create_account(){
			cout<<"enter account holder name : ";
			cin.ignore(); // to clear buffer
			// getline function
			getline(cin,name);
			cout<<"enter account number : ";
			cin>>account_number;
			account_balance = 0.00;
			cout<<"account created successfully!";
		}
		void deposit(){
			int amount;
			cout<<"enter amount to deposit : ";
			cin>>amount;
			if(amount>0){
				account_balance=+amount;
				cout<<"amount deposit successfully";
			}
			else
			cout<<"invalid amount";
		}
		
		void withdraw(){
				int amount;
				cout<<"enter amount to withdraw : ";
				cin>>amount;
				if(amount>0 && amount <= account_balance){
					account_balance -=amount;
					cout<<"withdraw successfully";
				}
				else
				cout<<"invalid amount / insufficient amount";
			}
			
			void display(){
				cout<<"\n ---account details---";
				cout<<"Name:"<<name<<endl;
				cout<<"Account number : "<<account_number<<endl;
				cout<<"Balance : "<<account_balance;
			}
		
};

			
int main(){
	
	BankAccount account;
	int choice;
	
	do{
		cout<<"\n======Banking Management System======\n";
		cout<<"1. Create Account \n";
		cout<<"2. Deposit Money \n";
		cout<<"3. Withdraw Money \n";
		cout<<"4. Display Account Details\n";
		cout<<"5. Exit \n";
		cout<<"enter choice ";
		cin>>choice;
		
		switch(choice){
			case 1:
				account.create_account();
				break;
			case 2 :
				account.deposit();
				break;
			case 3:
				account.withdraw();
				break;
			case 4:
				account.display();
				break;
			case 5:
				cout<<" Exiting...\n";
				break;
			default :
				cout<<"invalid choice! Try again. \n";
				
		}
	}while(choice!=5);
	
	return 0;
}
