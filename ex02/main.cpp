#include "ClapTrap.class.hpp"
#include "ScavTrap.class.hpp"
#include "FragTrap.class.hpp"

int main (void)
{
	ClapTrap	clap("El Clapo");
	ScavTrap	scav("El Scavo");	
	FragTrap	frag("El Frago");	

	scav.guardGate();
	frag.highFivesGuys();
	clap.attack("Jim");
	scav.attack("Tim");
	frag.attack("Wim");
	clap.takeDamage(5);
	clap.beRepaired(6);
	scav.takeDamage(7);
	scav.beRepaired(5);
	frag.takeDamage(100);
	frag.beRepaired(5);
	frag.attack("Wim");
	return (0);
}

