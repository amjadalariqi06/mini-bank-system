User u;


void proccess()
{
    ofstream accounts;
    accounts.open("users.txt", ios::app);

    accounts<<u.name<<','<<u.password<<','<<0<<endl;
}


void signUp()
{
    cout<<"Enter Your Full Name\nName:";
    cin>>u.name;

    cout<<"Enter Your Full Password\nPassword:";
    cin>>u.password;

    proccess();

    cout<<"signed up successfully!\nLogin...\n";

}

void logIn()
{

}

