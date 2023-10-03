#include <User.h>
// #include <unordered_map>
// #include <string>
// #include <iostream>

User::User() {
    this->ID = -1;
}

void User::userSetId (int newId) {
    this->ID = newId;
}
void User::processUserDeposit (int depositValue, std::string currency) {
    this->balance[currency] += depositValue;
}
void User::processUserDeposit (int depositValue, std::string currency) {
    this->balance[currency] += depositValue;
}

std::unordered_map <std::string, long double> User::getUserBalance () {
    return balance;
}

long double User::getUserBalance (std::string currency) {
    return balance[currency];
}

std::string User::sendTo (User* reciepient, long double value, std::string currency) {
    if (value > balance[currency]) {
        return "Not enough to transfer";
    }
    if (reciepient->ID == -1) {
        return "Recipient not found";
    }
    this->balance[currency] -= value;
    reciepient->balance[currency] += value;
}

Order User::initMarketOrder (long double value, string currencyFrom, string currencyTo, string color, string type) {
    
}


Order User::initLimitOrder (long double value, string currencyFrom, string currencyTo, string color, string type, long double price) {
    
}


void declaneOrder (Order order) {

}

void finishOrder (Order order) {

}

void finishOrder (Order order, long double price) {

}