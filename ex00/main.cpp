#include "ClapTrap.class.hpp"

int main (void)
{
	ClapTrap	inst("Ho");
	
	inst.attack("Jim");
	inst.attack("Jim");
	inst.attack("Jim");
	inst.attack("Jim");
	inst.attack("Jim");
	inst.attack("Jim");
	inst.attack("Jim");
	inst.takeDamage(5);
	inst.beRepaired(5);
	inst.attack("Jim");
	inst.attack("Jim");
	inst.attack("Jim");
	inst.attack("Jim");
	return (0);
}

