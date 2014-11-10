#ifndef NAME_H
#define NAME_H
#include <iostream>
#include <string>
class Name{
	friend std::ostream & operator <<(std::ostream &os, const Name &name);
	friend std::istream &operator >>(std::istream &ifs, Name &name);
public:
	static Name *read(std::istream &is);
	void write(std::ostream &os);
	Name(std::string last, std::string first) : last(last), first(first){}
	
private:
	std::string last, first;
};


#endif