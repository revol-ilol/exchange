#include <unordered_map>
#include <string>
#include <iostream>
#include <Order.h>
#ifndef H_USER
#define H_USER
using namespace std;
class User {
    private:
    int ID;
    unordered_map<string, long double> balance, freezed;
    vector <Order> orderHistory;
    vector <Order> openOrders;
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