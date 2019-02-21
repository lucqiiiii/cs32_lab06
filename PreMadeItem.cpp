#include "PreMadeItem.h"
#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>
using namespace std;

PreMadeItem::PreMadeItem(string name, string size) : IceCreamItem(size){
    if(size == "small"){
        price = 4.00;
    }else if(size == "medium"){
        price = 6.00;
    }else if(size == "large"){
        price = 7.50;
    }else{
        cout << "Not a valid size." << endl;
    }
    this -> size = size;  
    this -> name = name; 
}

PreMadeItem::~PreMadeItem(){
    price = 0;
    size = "";
    name = "";
}

string PreMadeItem::composeItem(){
    string result = "Pre-made Size: ";
    result += size;
    result += "\n";
    result += "Pre-made Item: ";
    result += this -> name;
    result += "\n";
    result += "Price: $";
    stringstream stream;
    stream << fixed << setprecision(2) << getPrice();
    result += stream.str();
    result += "\n";
    return result;
}

double PreMadeItem::getPrice(){
    
    return price;
}
