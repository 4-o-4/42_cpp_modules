#include <iostream>
#include <iomanip>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(void)
        : _accountIndex(0), _amount(0), _nbDeposits(0), _nbWithdrawals(0) {
}

Account::Account(int initial_deposit)
        : _accountIndex(_nbAccounts++), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
    _totalAmount += _amount;
    _displayTimestamp();

    std::cout
    << "index:" << _accountIndex << ";amount:" << _amount << ";created"
    << std::endl;
}

Account::~Account() {
    _displayTimestamp();

    std::cout
    << "index:" << _accountIndex << ";amount:" << _amount << ";closed"
    << std::endl;
}

int Account::getNbAccounts(void) {
    return _nbAccounts;
}

int Account::getTotalAmount(void) {
    return _totalAmount;
}

int Account::getNbDeposits(void) {
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void) {
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void) {
    _displayTimestamp();

    std::cout
    << "accounts:" << _nbAccounts
    << ";total:" << _totalAmount
    << ";deposits:" << _totalNbDeposits
    << ";withdrawals:" << _totalNbWithdrawals
    << std::endl;
}

void Account::makeDeposit(int deposit) {
    _nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
    _displayTimestamp();

    std::cout
    << "index:" << _accountIndex
    << ";p_amount:" << _amount
    << ";deposit:" << deposit;
    _amount += deposit;
    std::cout
    << ";amount:" << _amount
    << ";nb_deposits:" << _nbDeposits
    << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();

    std::cout
    << "index:" << _accountIndex
    << ";p_amount:" << _amount
    << ";withdrawal:";
    if (_amount < withdrawal) {
        std::cout << "refused" << std::endl;
        return false;
    }
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    std::cout << withdrawal
    << ";amount:" << _amount
    << ";nb_withdrawals:" << _nbWithdrawals
    << std::endl;
    return true;
}

int Account::checkAmount(void) const {
    return _amount;
}

void Account::displayStatus(void) const {
    _displayTimestamp();

    std::cout
    << "index:" << _accountIndex
    << ";amount:" << _amount
    << ";deposits:" << _nbDeposits
    << ";withdrawals:" << _nbWithdrawals
    << std::endl;
}

void Account::_displayTimestamp(void) {
    std::time_t time;
    std::tm *dt;

    time = std::time(NULL);
    dt = localtime(&time);
    std::cout
    << '[' << dt->tm_year + 1900
    << std::setw(2) << std::setfill('0') << dt->tm_mon + 1
    << std::setw(2) << std::setfill('0') << dt->tm_mday << '_'
    << std::setw(2) << std::setfill('0') << dt->tm_hour
    << std::setw(2) << std::setfill('0') << dt->tm_min
    << std::setw(2) << std::setfill('0') << dt->tm_sec << "] ";
}
