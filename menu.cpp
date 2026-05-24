#include <iostream>
using namespace std;

void mainMenu(int &i){

	    cout<<"========= Banking System ========="<<endl;
	    cout<<"1. Create Account"<<endl;
	    cout<<"2. Login"<<endl;
	    cout<<"3. Exit"<<endl;
	    cout<<"Choice: ";
	    cin>>i;
	    switch(i){
    		case 1:
    			Create();
   			break;
   			case 2:
    			Login();
   			break;
   			case 3:
    			cout<<"good buy\n\n";
   			break;
   			default:
   			cout<<"unknoun choices !\n";
    	}
}
void accountMenu(int &i){

	    cout<<"========= Banking System ========="<<endl;
	    cout<<"1. Deposit"<<endl;
	    cout<<"2. Withdraw"<<endl;
	    cout<<"3. Transfer"<<endl;
	    cout<<"4. Show Account Statement"<<endl;
	    cout<<"5. Logout"<<endl;
	    cout<<"Choice: ";
	    cin>>i;
	    	    switch(i){
    		case 1:
    			Deposit();
   			break;
   			case 2:
    			Withdraw();
   			break;
   			case 3:
    			Transfer();
   			break;
 			case 4:
    			Show();
   			break;
   			case 5:
    			cout<<"Thanks for using our applaction\n";
   			break;
   			default:
   			cout<<"unknoun choices !\n";
    	}
}
