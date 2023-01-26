#include "ClapTrap.class.hpp"
#include "ScavTrap.class.hpp"

int main (void)
{
	ClapTrap	clap("Ho");
	ScavTrap	scav("Ke");	

	scav.guardGate();
	clap.attack("Jim");
	scav.attack("Tim");
	clap.attack("Wim");
	clap.attack("Lim");
	clap.takeDamage(5);
	clap.beRepaired(6);
	scav.takeDamage(7);
	scav.beRepaired(5);
	return (0);
}

