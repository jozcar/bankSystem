#ifndef CURRENCY_H
#define CURRENCY_H
#include <iostream>
#include <string>
class Currency{
	friend std::ostream &operator << (std::ostream &os, const Currency &currency);
	friend std::istream &operator << (std::istream &os, Currency &currency);
	
	friend Currency operator +(const Currency &c1, const Currency &c2);
	friend Currency operator -(const Currency &c1, const Currency &c2);

	friend bool operator ==(const Currency &c1, const Currency &c2);
	friend bool operator !=(const Currency &c1, const Currency &c2);
	friend bool operator <(const Currency &c1, const Currency &c2);
	friend bool operator <=(const Currency &c1, const Currency &c2);
	friend bool operator >(const Currency &c1, const Currency &c2);
	friend bool operator >=(const Currency &c1, const Currency &c2);

public:
	Currency(int dollars = 0, int cents = 0);
	Currency(std::string valueStr);

	Currency &operator += (const Currency &currency);
	Currency &operator -= (const Currency &currency);
	Currency &operator *= (double d);
	int asCents() const;
	operator int();
	void normalize();
private: 
	int dollars, cents;




};



#endif