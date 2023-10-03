#include <Order.h>

Order::Order (string currencyFrom, string currencyTo, string color, string type, long double value, int ownerID, long double price = -1) {
        this->currencyFrom = currencyFrom;
        this->currencyTo = currencyTo;
        this->color = color;
        this->type = type;
        this->value = value;
        this->ownerID = ownerID;
        this->price = price;
}