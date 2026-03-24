#include<iostream>
using namespace std;
class bankaccount
{
private:
    int account_number;
    double balance;
public:
    bankaccount();
    bankaccount(int accno,double bal);
    void displaydetails();
};

bankaccount::bankaccount()
{account_number=0;
    balance=0;
}    
bankaccount::bankaccount(int accno,double bal)
{
    account_number=accno;
    balance=bal;
}
void bankaccount::displaydetails(){
    cout<<"account number:"<<account_number<<endl;
    cout<<"balance:"<<balance<<endl;
}
int main(){
    bankaccount b1;
    bankaccount b2(234567,5000);
    b1.displaydetails();
    b2.displaydetails();
    return 0;
}
