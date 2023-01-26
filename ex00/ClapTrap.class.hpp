#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP

#include <iostream>

class ClapTrap
{
	private:

			std::string	name;
			int			hitPoints = 10;
			int			energyPoints = 10;
			int			attackDamage = 0;

	public:

		int		getClapTrap(void) const;
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		
		ClapTrap &	operator=(ClapTrap const &assign);

		ClapTrap(void);
		ClapTrap(ClapTrap const &src);
		~ClapTrap(void);

};

#endif

