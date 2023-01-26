#include "FragTrap.class.hpp"
#include "ClapTrap.class.hpp"

void FragTrap::highFivesGuys(void)
{
	std::cout << "Frag highFivesGuys"
	<< std::endl;
	return ;
}

void FragTrap::attack(const std::string &target)
{
	std::cout << "Frag attack function called." << std::endl;

	if (this->energyPoints <= 0 || this->hitPoints <= 0)
	{
		std::cout
		<< "Not enough points to attack." << std::endl;
		return ;
	}

	std::cout
	<< "FragTrap " << this->name << " attacks " << target
	<< ", causing " << this->attackDamage << " points of damage."
	<< std::endl;
	this->energyPoints--;

	return ;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src.name)
{
	std::cout << "Frag Trap Copy constructor called" << std::endl;
	*this = src;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FragTrap Constructor called" << std::endl;
	this->attackDamage = 30;
	this->hitPoints = 100;
	this->energyPoints = 100;
	return ;
}

FragTrap::FragTrap(void)
{
	std::cout << "FragTrap Constructor called" << std::endl;
	this->name = "Default";
	this->attackDamage = 30;
	this->hitPoints = 100;
	this->energyPoints = 100;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;
	return ;
}

