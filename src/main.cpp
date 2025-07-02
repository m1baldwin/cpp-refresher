#include "bankAccount.h"

int main() {

	std::cout << "Hello, world! " << std::endl;

	int x = 42;

	std::cout << "The value of x is: " << x << std::endl;

	if (x > 0) {
		std::cout << "x is positive." << std::endl;
	} else {
		std::cout << "x is not positive." << std::endl;
	}


	BankAccount account(123456789, "John Doe", 1000.0);
	std::cout << "Account Holder: " << account.getAccountHolderName() << std::endl;
	std::cout << "Account Number: " << account.getAccountNumber() << std::endl;
	std::cout << "Account Balance: $" << account.getAccountBalance() << std::endl;
}
