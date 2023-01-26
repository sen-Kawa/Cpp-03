#include "ClapTrap.class.hpp"

void ClapTrap::attack(const std::string &target)
{
	std::cout << "Attack function called." << std::endl;

	if (this->energyPoints <= 0 || this->hitPoints <= 0)
	{
		std::cout
		<< "Not enough points to attack." << std::endl;
		return ;
	}

	std::cout
	<< "ClapTrap " << this->name << " attacks " << target
	<< ", causing " << this->attackDamage << " points of damage."
	<< std::endl;
	this->energyPoints--;

	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->energyPoints <= 0 || this->hitPoints <= 0)
	{
		std::cout
		<< "Not enough points to takeDamage." << std::endl;
		return ;
	}

	std::cout
	<< "Take damage of " << amount << " points." << std::endl;

	this->hitPoints = this->hitPoints - amount;

	if (this->hitPoints <= 0)
	{
		std::cout
		<< "ClapTrap " << this->name << " died."
		<< std::endl;
	}
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints <= 0 || this->hitPoints <= 0)
	{
		std::cout
		<< "Not enough points to beRepaired." << std::endl;
		return ;
	}

	std::cout
	<< "Is repared with " << amount << " points." << std::endl;

	this->hitPoints = this->hitPoints + amount;
	this->energyPoints--;

	return ;
}

std::string ClapTrap::getClapTrap(void) const
{
	return (this->name);
}

ClapTrap &	ClapTrap::operator=(const ClapTrap &assign)
{
	std::cout << "Assing operator called" << std::endl;
	if (this != &assign)
	{
		this->name = assign.getClapTrap();
		this->hitPoints = assign.hitPoints;
		this->energyPoints = assign.energyPoints;
		this->attackDamage = assign.attackDamage;
	}
	return (*this);
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "Constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(void)
{
	std::cout << "Constructor called" << std::endl;
	this->name = "Default";
	this->attackDamage = 0;
	this->hitPoints = 10;
	this->energyPoints = 10;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

