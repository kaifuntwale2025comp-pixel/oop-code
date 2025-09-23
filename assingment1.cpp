#include <iostream>
#include <string>
using namespace std;
class bank {
private:
string name, acc_type;
int acc_no;
float balance;
public:
bank(string n, string at, int accnum, float bal) {
   name = n;
   acc_type = at;
   acc_no = accnum;
   balance = bal;
}

void display();
void deposit();
void withdraw();
};

void bank::display() {
cout << "\n\nAccount details:\nName: " << name << endl;
cout << "Account type: " << acc_type << endl;
cout << "Account number: " << acc_no << endl;
cout << "Bank acc balance: " << balance << endl;
}
void bank::deposit() {
float damount;
cout << "\nEnter the amount you wish to deposit: ";
cin >> damount;
balance += damount;
}
void bank::withdraw() {
float wamount;
cout << "\nEnter amt you wish to withdraw: ";
cin >> wamount;
if (wamount<= balance) {
balance -= wamount;
} else {
cout << "Insufficient bank account balance!" << endl;
}
}
int main () {
int choice;

string name1, actp;
int acnm;
float blnc;
      cout << "Enter details of your bank account\nEnter name: ";
cin >> name1;
cout << "Account type: ";
cin >> actp;
cout << "Enter acc number: ";
cin >> acnm;
cout << "Enter account balance: ";
cin >> blnc;
bank cust2 (name1, actp, acnm, blnc);
do {
cout << "\nMention the operation you wish to 1 for display,2 for withdraw,3 for deposite," << endl;
cin >> choice;
switch (choice) {
case 1: {
cust2.display();
break;
}
case 2: {
cust2.withdraw();
cust2.display();
break;
}
case 3: {
cust2.deposit();
cust2.display();
break;
}
case 4: {
cout << "Thank you!!";
break;
}
default: cout << "Error! Unidentified choice!" << endl;
}
} while (choice != 4);
return 0;
}
