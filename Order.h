#ifndef H_ORDER
#define H_ORDER
#include <bits/stdc++.h>
#include <User.h>

using namespace std;

class Order {
    private:
    string currencyFrom; // первая валюта в паре
    string currencyTo; // вторая валюта в паре
    string color; // цвет - buy-ордер или sell-ордер
    string type; // market/limit
    long double value; // количество валюты
    int ownerID; // ID пользователя, который создает ордер
    long double price; // лимит, если это лимитный ордер 
    public:
    Order (string currencyFrom, string currencyTo, string color, string type, long double value, int ownerID, long double price = -1);
};
#endif