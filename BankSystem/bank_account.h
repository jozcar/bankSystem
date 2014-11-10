#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H
#include<iostream>
#include "Currency.h"

class BankAccount {
	friend  std::ostream &operator <<(std::ostream &os, const BankAccount &bankAccount);
public:
	BankAccount(std::string account_name) :account_name(account_name),id(nextId++){};
	int getId()  { return id; };
	std::string getAccountName(){ return account_name; };
	//BankAccount(const Currency &balance = 0);
private:
		int id;
		std::string account_name;
		static int nextId;

//	friend  std::ostream &operator <<(std::ostream &os, const BankAccount &bankAccount);
//public:
//	static BankAccount *read(std::istream &is);
//	virtual void write(std::ostream &os);
//	BankAccount(const Currency &balance = 0);
//
//	virtual void deposit(const Currency &amount);
//	virtual bool withdraw(const Currency &amount);
//	Currency getBalance() { return balance; }
//	int getId() const { return id; }
//
//protected:
//	BankAccount(int id, const Currency &balance);
//	Currency balance;
//
//private:
//	BankAccount(const BankAccount &bankAccount);
//	BankAccount &operator =(const BankAccount &bankAccount);
//
//	int id;
//	static int nextId;
};


#endif