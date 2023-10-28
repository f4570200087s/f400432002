#include <iostream>
#include"Account.h"

using namespace std;
int main()
{
    Account myAccount("NASSER"),myAccount2("AHMAD");
    cout<<"Initlal name of myAccount"<<myAccount.getname()<<endl;
    cout<<"Initlal name of myAccount2:"<<myAccount.getname()<<endl;
    string newName;
    cin>>newName;
    myAccount.setName(newName);
    cout<<"new Name of Accound is :"<<myAccount.getname()<<endl;
    
    
    return 0;
}
