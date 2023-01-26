#include "ClapTrap.class.hpp"

void ClapTrap::attack(const std::string &target)
{
	std::cout << "Attack function called." << std::endl;
	if (this->energyPoints == 0)
	{
		std::cout << "No energy points left to perfom attack." << std::endl;
		return ;
	}
	if (this->hitPoints == 0)
	{
		std::cout << "No hit points left to perfom attack." << std::endl;
		return ;
	}
	std::cout
	<< "ClapTrap " << this->name << " attacks " << target
	<< ", causing " << this->attackDamage << " points of damage."
	<< std::endl;
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

