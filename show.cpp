#include<iostream>
#include<fstream>

using namespace std;

void show()
{
    // account variables
    int id,money;
    string name, pass;

    // search variables
    int uid ;
    string password;

   	  bool account_found = false; // ááÊÍŞŞ ãä Çäå ÍÕá ÇáÍÓÇÈ ÇáãØáæÈ
      bool password_correct = false;// ááÊÊÍŞŞ ãä Çä ßáãå ÇáÓÑ ÕÍíÍå
      
	//account statement varible
		double amount; // ãŞÏÇÑ ÇáãÇá ÇáÊí ÇÓÊÎÏã ááÚãáíå
		double balance; // ÑÕíÏß ÇáÍÇáí 
		
		string operation; // íÎÒä äæÚ ÇáÚãáíå
		string datetime; // íÎÒä æŞÊ ÍÏæË ÇáÚãáíå
		
		string sid,samount,sbalance; // ÚÔÇä íŞÑÇ ÇáÈíÇäÇÊ ãä Çáãáİ ãÚ "|" 
		
    ifstream account("account.txt");
    if(!account.is_open()){
    	cout<<"Error:could not open account.txt"<<endl;
    	return;
    }

    cout<<"Search here\n";
    cout<<"Enter the id you need to search about\nid: ";
    cin>>uid;

    while(account >> id &&getline(account,name,',') &&
          getline(account,pass,',') &&account >> money
          )
    {
        account.ignore(); //ÊäÙíİ ÇáÓØÑ 

        if(id == uid)
        {
            account_found = true;

            cout<<"Enter your account password\npassword: ";
            cin>>password;

            if(pass == password){
				password_correct=true;
            	break;        //ÎÑÌ ãä ÇáÍáŞå ÈÓÈÈ Çä ÇáÍÓÇÈ ÇáĞí ÇÏÎáå ÕÍ ãÚ ßáãå ÇáãÑæÑ
            	
            }
            
        }
    }

    if(!account_found)
    
        cout<<"Account not found"<<endl;
    
    else if (!password_correct)
    	cout<<"wrong password"<<endl;
   	
   	else {
	   	cout <<"\n welcome ,"<<name<<endl; // äÌÇÌ ÊÓÌíá ÇáÏÎæá 
	   	cout <<" === account data ==="<<endl;
	   	cout <<"name :"<<name <<endl;
	   	cout <<"id :"<<uid <<endl;
	   	
	   	cout<<"_________________________\n\n";
	   cout<<" ==== your account statement====\n"; //ÈÚÏ ÊÓÌíá ÇáÏÎæá ÈäÌÇÍ  äİÊÍ ãáİ ÇáÚãáíÇÊ ÇáÍÓÇÈíÉ
   	
	   ifstream statementfile("statement.txt");
		   if(!statementfile.is_open()){    // ÇÌÑÇÁ ÇĞÇ ÍÏË ÎØÇ æáã íİÊÍ Çáãáİ ÇáäÕí
	   		cout <<"could not open statement.txt file"<<endl;
	   		return;
	   	}
	   	while(getline(statementfile,sid,'|')&&getline(statementfile,operation,'|')&&
		   	getline(statementfile,samount,'|')&&getline(statementfile,sbalance,'|')&&getline(statementfile,datetime)){
		   		
				    id = stoi(sid);		    	//ÊÍæíá ãä äÕæÕ Çáì ÇÑŞÇã ÈÚÏ ãŞÇÑäå İí  
				       amount = stod(samount);	//while 
				    balance = stod(sbalance);	// ãÚ "|"				
				    						
 											
				 
				    
	   		if (id==uid)
	   		{
		   		cout<<" operation  | amount | balance | datetime "<<endl;
		   		cout<<  operation  <<"|"<< amount <<"|"<< balance <<"|"<< datetime <<endl;
		   		
		   	}
	   	}
	   	
   	}
  
	   	
	   	

}