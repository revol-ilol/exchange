#ifndef H_ORDER
#define H_ORDER
#include <bits/stdc++.h>
#include <User.h>

using namespace std;

class Order {
    private:
    string currencyFrom;
    string currencyTo;
    string color;
    string type;
    long double value;
    int ownerID;
    long double price;
    public:
    Order (string currencyFrom, string currencyTo, string color, string type, long double value, int ownerID, long double price = -1);
};
#endif