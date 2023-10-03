#include <unordered_map>
#include <string>
#include <iostream>
#include <Order.h>
#ifndef H_USER
#define H_USER
using namespace std;
class User {
    private:
    int ID;//ID пользователя
    unordered_map<string, long double> balance, freezed// Реальный баланс в валюте [val] и замороженный баланс в валюте [val]
    vector <Order> orderHistory; //история ордеров
    vector <Order> openOrders; //открытыя ордера
    public:
    User();
    
    void userSetId (int newId); 

    void processUserDeposit (int depositValue, string currency);

    unordered_map <string, long double> getUserBalance ();
    
    long double getUserBalance (string currency);

    string sendTo (User* reciepient, long double value, string currency);

    Order initLimitOrder (long double value, string currencyFrom, string color, string currencyTo, string type, long double price);
    
    Order initMarketOrder (long double value, string currencyFrom, string color, string currencyTo, string type);

    void declaneOrder (Order order);
    
    void finishOrder (Order order);
    
    void finishOrder (Order order, long double price);

};
#endif