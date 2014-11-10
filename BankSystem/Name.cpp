#include "stdafx.h"
#include "Name.h"



std::ostream &operator <<(std::ostream &out, const Name &obj){
	out << "(Name: " << obj.first  << " Last Name: " << obj.last;
	return out;
}
