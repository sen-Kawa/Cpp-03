#include "ScavTrap.class.hpp"
#include "ClapTrap.class.hpp"

void ScavTrap::guardGate(void)
{
	std::cout << "Scav guarding gate"
	<< std::endl;
	return ;
}

void ScavTrap::attack(const std::string &target)
{
	std::cout << "Scav attack function called." << std::endl;

	if (this->energyPoints <= 0 || this->hitPoints <= 0)
	{
		std::cout
		<< "Not enough points to attack." << std::endl;
		return ;
	}

	std::cout
	<< "ScavTrap " << this->name << " attacks " << target
	<< ", causing " << this->attackDamage << " points of damage."
	<< std::endl;
	this->energyPoints--;

	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src.name)
{
	std::cout << "Scav Trap Copy constructor called" << std::endl;
	*this = src;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap Constructor called" << std::endl;
	this->attackDamage = 20;
	this->hitPoints = 100;
	this->energyPoints = 50;
	return ;
}

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap Constructor called" << std::endl;
	this->name = "Default";
	this->attackDamage = 20;
	this->hitPoints = 100;
	this->energyPoints = 50;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
	return ;
}

