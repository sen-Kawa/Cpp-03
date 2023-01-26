#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP

#include <iostream>

class ClapTrap
{
	protected:

		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;

	public:

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		
		std::string	getClapTrap(void) const;

		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		ClapTrap &operator=(ClapTrap const &assign);
		~ClapTrap(void);

};

#endif

