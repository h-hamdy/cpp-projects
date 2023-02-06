# include <iostream>
# include <iomanip>
# include "Account.hpp"

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

Account::Account() {}

Account::Account( int initial_deposit )
{
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_amount = initial_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount = _totalAmount + _amount;
	_nbAccounts += 1;
	std::cout 	<< "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";" 
				<< "created" << std::endl;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout	<< "index:" <<  _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "closed" << std::endl;
}

int	Account::getNbAccounts () {return (_nbAccounts);}

int	Account::getTotalAmount () {return (_totalAmount);}

int	Account::getNbDeposits () {return (_totalNbDeposits);}

int	Account::getNbWithdrawals () {return (_totalNbWithdrawals);}

void Account::displayAccountsInfos ()
{
	_displayTimestamp();
	std::cout 	<< "index:" << getNbAccounts() << ";"
				<< "total:" << getTotalAmount() << ";"
				<< "deposits:" << getNbDeposits() << ";"
				<< "withdrawls:" << getNbWithdrawals()
				<< std::endl;
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "deposits:" << _nbDeposits << ";"
				<< "withdrawls" << _nbWithdrawals
				<< std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_amount = _amount + deposit;
	_nbDeposits++;
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";" 
				<< "p_amount:" << _amount - deposit << ";"
				<< "deposit:" << deposit << ";"
				<< "amount:" << _amount << ";"
				<< "nb_deposits:" << _nbDeposits
				<< std::endl;
	_totalAmount = _totalAmount + deposit;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawl)
{
	int tmp;
	tmp = _amount - withdrawl;
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";" 
				<< "p_amount:" << _amount << ";";
	if (tmp >= 0)
	{
		_amount = tmp;
		_nbWithdrawals++;
		std::cout	<< "withdrawl:" << withdrawl << ";"
					<< "amount:" << _amount << ";"
					<< "nb_withdrawl:" << _nbWithdrawals
					<< std::endl;
		_totalAmount = _totalAmount - withdrawl;
		_totalNbWithdrawals++;
	}
	else
	{
		std::cout << "withdrawl:refused" << std::endl;
		return (false);
	}
	return (true);
}

void	Account::_displayTimestamp( void )
{
	std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    std::cout << '[';
	std::cout << (now->tm_year + 1900);
	std::cout << std::setfill('0') << std::setw(2) << (now->tm_mon + 1);
	std::cout << std::setfill('0') << std::setw(2) <<  now->tm_mday << '_';
	std::cout << std::setfill('0') << std::setw(2) << now->tm_hour;
	std::cout << std::setfill('0') << std::setw(2) << now->tm_min;
	std::cout << std::setfill('0') << std::setw(2) << now->tm_sec;
	std::cout << "] ";
}
