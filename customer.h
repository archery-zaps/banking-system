#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
#include <vector>
#include "account.h"

class Customer {
public:
    Customer(const std::string& name);
    void addAccount(const Account& account);

private:
    std::string name;
    std::vector<Account> accounts;
};

#endif // CUSTOMER_H
