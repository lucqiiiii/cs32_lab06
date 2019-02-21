// CustomItem.h

#ifndef PREMADEITEM_H
#define PREMADEITEM_H

#include <string>
#include <vector>
#include "IceCreamItem.h"

class PreMadeItem : public IceCreamItem{
public:
	// Constructs a custom ice cream order with a size. Size are: small, medium, and large.
	//Each size will have a base price for the order (without the addition of toppings). A small size is $4.00, a medium size is $6.00, and a large size is $7.50.
	PreMadeItem(std::string name, std::string size);

	// A virtual method that composes a string with the details
	// of an IceCreamItem. See the lab writeup and test files
	// for examples of the format for composeItem.
	virtual std::string composeItem();

	// Returns the dollar amount of an ice cream item.
	virtual double getPrice();

	//A virtual deconstructor in case you have to deallocate any memory on the heap.
	virtual ~PreMadeItem();

protected:
	double price;
	std::string size;
	std::string name;
};

#endif
