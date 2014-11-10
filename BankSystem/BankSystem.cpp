// BankSystem.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "bank_account.h"
#include "customer.h"
#include "Currency.h"
#include <conio.h>


int _tmain(int argc, _TCHAR* argv[])
{
	
	Currency h(9, 9);
	Name n("Pacheco", "Hector");
	Name n2("Apolo", "Roko");
	Name n3("Pacheco", "Israel");
	
	Customer c(n);
	BankAccount a("Savings");
	a.deposit(h);
	BankAccount b("Deposit");

	c.add(&a);
	
	c.add(&b);
	


	Customer c2(n2);
	c2.add(&b);
	Customer c3(n3);
	BankAccount ct("Deposit");
	c3.add(&ct);

	cout << c2.getName() << " Customer ID: " << c2.getId() << " B "<< b.getId() <<  "\n";
	cout << c3.getName() << " Customer ID: " << c3.getId() <<  "Number of accounts: " << c3.getNumAccounts() <<"\n";


	cout << c.getName() << " Customer ID: " << c.getId() << " B " << a.getId() << a.getAccountName() << b.getAccountName() << "Number of accounts: " << c.getNumAccounts();
	
	

	_getch();
	return 0;
}

