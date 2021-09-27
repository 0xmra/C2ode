#include <iostream>
#include<fstream>
#include<map>
#include<cstdlib>
using namespace std;
#define MIN_BALANCE 500
class InsufficientFunds
{
  private:
  string s;
  public:
  InsufficientFunds(string str)
  {
    str = "InsufficientFunds";
  }
  InsufficientFunds():InsufficientFunds("InsufficientFunds")
  {

  }
  friend ostream& operator<<(ostream &out, InsufficientFunds &c);

};
ostream& operator<<(ostream &out, InsufficientFunds &c)
{
  out<<c.s;
  return out;
}

class Account 
{
  private:
  long accountNumber;
  string firstName;
  string lastName;
  float balance;
  static long nextAccountNumber;

  public:
  Account()
  {

  }
  Account(string fname, string lname, float bal)
  {
    nextAccountNumber+=1;
    firstName = fname;
    lastName = lname;
    accountNumber = nextAccountNumber;
    bal = balance;
  }
  long getAccNo()
  {
    return accountNumber;
  }
  string getFirstName()
  {
    return firstName;
  }
  string getLastName()
  {
    return lastName;
  }
  float getBalance()
  {
    return balance;
  }
  void deposit(float amount)
  {
    balance+=amount;
  }
  void withdraw(float amount)
  {
    try
    {
    if(balance-amount<MIN_BALANCE)
    throw InsufficientFunds();
    balance-=amount;
    }
    catch(InsufficientFunds i)
    {
      cout<<i<<endl;
    }
  }
  static void setLastAccountNumber(long accountNumber)
  {
     nextAccountNumber = accountNumber;
  }
  static long getLastAccountNumber()
  {
    return nextAccountNumber;
  }

friend ifstream & operator>>(ifstream &fis, Account &acc);
friend ofstream & operator<<(ofstream &fos,Account &acc);
friend ostream & operator<<(ostream &os,Account &acc);
};
long Account::nextAccountNumber = 0;
ofstream & operator<<(ofstream &fos,Account &acc)
{
  fos<<acc.accountNumber<<endl;
  fos<<acc.firstName<<endl;
  fos<<acc.lastName<<endl;
  fos<<acc.balance<<endl;
  return fos;
}
ifstream & operator>>(ifstream &fis, Account &acc)
{
  fis>>acc.accountNumber;
  fis>>acc.firstName;
  fis>>acc.lastName;
  fis>>acc.balance;
  return fis;
}
ostream & operator<<(ostream &os,Account &acc)
{
  os<<"First Name:"<<acc.getFirstName()<<endl;
  os<<"Last Name:"<<acc.getLastName()<<endl;
  os<<"Account Number:"<<acc.getAccNo()<<endl;
  os<<"Balance:"<<acc.getBalance()<<endl;
  return os;
}
class Bank
{
  private:
  map<long,Account> account_info;
  public:
  Bank()
  {

  }
  Account OpenAccount(string fname, string lname, float balance)
  {
    Account account(fname, lname, balance);
    account_info.insert(pair<long,Account>(account.getAccNo(), account));
    ofstream fos("Bank.data", ios::trunc);
    map<long,Account>::iterator itr;
    for(itr=account_info.begin();itr!=account_info.end();itr++)
    {
      fos<<itr->second;
    }
    fos.close();
    return account;
  }
  Account BalanceEnquiry(long accountNumber)
  {
    map<long,Account>::iterator itr1;
    itr1 = account_info.find(accountNumber);
    return itr1->second;
  }
  Account Deposit(long accountNumber, float amount)
  {
    map<long, Account>::iterator itr2;
    itr2 = account_info.find(accountNumber);
    itr2->second.deposit(amount);
    return itr2->second;
  }
  Account withdraw (long accountNumber, float amount)
  {
    map<long, Account>::iterator itr3;
    itr3 = account_info.find(accountNumber);
    itr3->second.withdraw(amount);
    return itr3->second;
  }
  void closeAccount(long accountNumber)
  {
    map<long,Account>::iterator itr4;
    itr4 = account_info.find(accountNumber);
    cout<<"Account Deleted"<<itr4->second;
    account_info.erase(accountNumber);
  }
  void showAllAccounts()
  {
    map<long,Account>::iterator itr5;
    for(itr5 = account_info.begin();itr5!=account_info.end();itr5++)
    {
      cout<<"Account "<< itr5->first<<endl<<itr5->second<<endl;
    }
  }
  ~Bank()
  {
    ofstream fos("Bank.data", ios::trunc);
    map<long,Account>::iterator itr;
    for(itr=account_info.begin();itr!=account_info.end();itr++)
    {
      fos<<itr->second;
    }
    fos.close();
  }
};

int main() {
  Bank b;
Account acc;
int choice;
string fname,lname;
long accountNumber;
float balance;
float amount;
cout<<"***Banking System***"<<endl;
do
{
cout<<"\n\tSelect one option below ";
cout<<"\n\t1 Open an Account";
cout<<"\n\t2 Balance Enquiry";
cout<<"\n\t3 Deposit";
cout<<"\n\t4 Withdrawal";
cout<<"\n\t5 Close an Account";
cout<<"\n\t6 Show All Accounts";
cout<<"\n\t7 Quit";
cout<<"\nEnter your choice: ";
cin>>choice;
switch(choice)
{
case 1:
cout<<"Enter First Name: ";
cin>>fname;
cout<<"Enter Last Name:  ";
cin>>lname;
cout<<"Enter initil Balance: ";
cin>>balance;
acc=b.OpenAccount(fname,lname,balance);
cout<<endl<<"Congradulation Account is Created"<<endl;
cout<<acc;
break;
case 2:
cout<<"Enter Account Number:";
cin>>accountNumber;
acc=b.BalanceEnquiry(accountNumber);
cout<<endl<<"Your Account Details"<<endl;
cout<<acc;
break;
case 3:
cout<<"Enter Account Number:";
cin>>accountNumber;
cout<<"Enter Balance:";
cin>>amount;
acc=b.Deposit(accountNumber, amount);
cout<<endl<<"Amount is Deposited"<<endl;
cout<<acc;
break;
case 4:
cout<<"Enter Account Number:";
cin>>accountNumber;
cout<<"Enter Balance:";
cin>>amount;
acc=b.withdraw(accountNumber, amount);
cout<<endl<<"Amount Withdrawn"<<endl;
cout<<acc;
break;
case 5:
cout<<"Enter Account Number:";
cin>>accountNumber;
b.closeAccount(accountNumber);
cout<<endl<<"Account is Closed"<<endl;
cout<<acc;
case 6:
b.showAllAccounts();
break;
case 7: break;
default:
cout<<"\nEnter corret choice";
exit(0);
}
}while(choice!=7);
return 0;

}