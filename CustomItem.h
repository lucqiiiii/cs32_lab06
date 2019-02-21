// CustomItem.h

#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H

#include <string>
#include <vector>
#include "IceCreamItem.h"

class CustomItem : public IceCreamItem{
public:
	// Constructs a custom ice cream order with a size. Size are: small, medium, and large.
	//Each size will have a base price for the order (without the addition of toppings). A small size is $3.00, a medium size is $5.00, and a large size is $6.50.
	CustomItem(std::string size);

	// A virtual method that composes a string with the details
	// of an IceCreamItem. See the lab writeup and test files
	// for examples of the format for composeItem.
	virtual std::string composeItem();

	// Returns the dollar amount of an ice cream item.
	virtual double getPrice();

	//A virtual deconstructor in case you have to deallocate any memory on the heap.
	virtual ~CustomItem();

	//A method that allows you to add a topping to the custom ice cream order.
	//Toppings are not predefined and can be identified with strings. You may assume any topping added to a CustomItem has a weight of 1 oz. Each oz. increases the price of the CustomItem by $0.40 cents.
	//You may add the same topping (i.e. represented as the same string) as many times you want, with each topping addition being 1 oz. Your implementation will need to keep track of the number of ounces for each topping and display the correct number of ounces when constructing a string in composeItem.
	void addTopping(std::string topping);

//	virtual double getPrice();

protected:
	double price;
	std::string size;
	std::vector<std::pair<std::string,int>> toppings;
};

#endif
