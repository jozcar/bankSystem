#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <iostream>

#include "name.h"
#include "bank_account.h"

using namespace std;

class Customer {

public:
	Customer(const Name &name);
	int getId() const { return id; }
	const Name &getName() const { return name; }
	void add(BankAccount *account){
		numAccounts++;
	}
	int getNumAccounts() const { return numAccounts; }
private:
	Name name;
	string accountName;
	int id;
	int numAccounts, capacity;
	static int nextId;
	BankAccount *accounts;
	static const int initCapacity = 10;
	/*friend std::ostream & operator <<(std::ostream &os, const Customer &customer);
public:
	static Customer *read(istream &is);
	void write(ostream &os);
	Customer(const Name &name);
	void add(BankAccount *account);
	int getNumAccounts() const { return numAccounts; }
	BankAccount *getAccount(int accountNum) const;
	int getId() const { return id; }
	const Name &getName() const { return name; }
	void accrueInterest();
	void listOverdrawn() const;
private:
	Customer(int id, const Name &name);

	Customer(const Customer &customer);
	Customer &operator =(const Customer &customer);

	void checkCapacity();

	Name name;
	int id;
	int numAccounts, capacity;
	BankAccount *accounts;
	static int nextId;
	static const int initCapacity = 10;*/
};

#endif