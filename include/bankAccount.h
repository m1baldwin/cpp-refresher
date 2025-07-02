//header for bank account class
#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>
#include <cstdint> // for u_int64_t
#include <iostream>

class BankAccount {
private:
    u_int64_t accountNumber;
    double accountBalance;
    std::string accountHolderName;

public: 
    double getAccountBalance() const;
    bool deposit(double amount);
    bool withdraw(double amount);
    void setAccountHolderName(const std::string& name);
    std::string getAccountHolderName() const;
    u_int64_t getAccountNumber() const;
    BankAccount(u_int64_t accountNumber, const std::string& accountHolderName,
                double initialBalance = 0.0);
    ~BankAccount();
}; //

#endif // BANKACCOUNT_H