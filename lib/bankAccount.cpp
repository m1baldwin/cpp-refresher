// simple bank account class with private and public methods
#include "bankAccount.h" 

BankAccount::BankAccount(u_int64_t accountNumber, const std::string& accountHolderName,
                double initialBalance) : accountNumber(accountNumber), accountBalance(initialBalance), accountHolderName(accountHolderName){}

BankAccount::~BankAccount() {}

double BankAccount::getAccountBalance() const {
    return accountBalance;
}

void BankAccount::setAccountHolderName(const std::string& name) {
    accountHolderName = name;
}

std::string BankAccount::getAccountHolderName() const {
    return accountHolderName;
}

u_int64_t BankAccount::getAccountNumber() const {
    return accountNumber;
}

bool BankAccount::deposit(double amount) {
    if (amount > 0){
        accountBalance += amount;
        return true;
    } else {
        std::cout << "Requesting to deposit negative amount, disallowed" << std::endl;
        return false;
    }
}

bool BankAccount::withdraw(double amount){
    if (amount > 0 && amount <= accountBalance){
        accountBalance -= amount;
        return true;
    } else if (amount > accountBalance){
        std::cout << "insufficient balance" << std::endl;
        return false;
    } else {
        std::cout << "amount requested must be positive" << std::endl;
        return false;
    }
}
