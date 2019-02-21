#include "CustomItem.h"
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

CustomItem::CustomItem(string size) : IceCreamItem(size){
    if(size == "small"){
        price = 3.00;
    }else if(size == "medium"){
        price = 5.00;
    }else if(size == "large"){
        price = 6.50;
    }else{
        cout << "Not a valid size." << endl;
    }
    this -> size = size;   
}

CustomItem::~CustomItem(){
    price = 0;
    size = "";
}

string CustomItem::composeItem(){
    string result = "Custom Size: " + size + "\n";
    result += "Toppings:\n";
    for(unsigned int i = 0; i < toppings.size(); i++){
        result += toppings[i].first;
        result += ": ";
        result += to_string(toppings[i].second);
        result += " oz\n";
    }
    stringstream stream;
    stream << fixed << setprecision(2) << getPrice();

    result += "Price: $";
    result += stream.str();
    result += "\n";
    return result;
}

void CustomItem::addTopping(string topping){
    for(unsigned int i = 0; i < toppings.size(); i++){
        if(toppings[i].first == topping){
            toppings[i].second++;
            price += 0.4;
            return;
        }
    }
    toppings.push_back(make_pair(topping,1));
    price += 0.4;
}

double CustomItem::getPrice(){
     return price;
}
