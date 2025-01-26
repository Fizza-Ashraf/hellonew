#include<iostream>
using namespace std;
struct account{
    string name;
    int accountnumber;
    int balance;
};
account create(){
    account acc;
    cout<<"Create an acoount:"<<endl;
    cout<<"Enter the name:";
    cin>>acc.name;
    cout<<"Enter account number:";
    cin>>acc.accountnumber;
   acc.balance=0;
    return acc;
}
account deposit(account &acc){
    int amount;
    cout<<"Enter the amount use want to deposit:";
    cin>>amount;
    acc.balance+=amount;
   cout<<"CURRENT BALANCE:"<<acc.balance;
   return acc;
   
 

}
account withdraw(account &acc){
    
    int withdraw;
    cout<<"Enter amount to withdraw:";
    cin>>withdraw;
    cout<<"Current balance:"<<acc.balance<<endl;
    if(acc.balance<withdraw){
        cout<<"NOT ENOUGH BALANCE:";
    }
    else{
    acc.balance= acc.balance-withdraw;
     cout<<"BALANCE AFTER WITHDRAWAL:"<<acc.balance<<endl;
    }
    return acc;
 

}
  account display(account acc){
    cout<<"ACCOUNT HOLDER'S NAME:"<<acc.name<<endl;
    cout<<"ACCOUNT NUMBER"<<acc.accountnumber<<endl;
    cout<<"ACCOUNT BALANCE:"<<acc.balance<<endl;
   }
int main(){
     account account1;
    account1 = create();
    account1 = deposit(account1);
    account1 = withdraw(account1);
    display(account1);
  
}