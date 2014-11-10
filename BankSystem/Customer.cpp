#include "stdafx.h"
#include "customer.h"

Customer::Customer(const Name &name) :name(name), id(nextId++){};
int Customer::nextId = Customer::nextId++;



