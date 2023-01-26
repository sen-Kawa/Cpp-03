#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP

#include <iostream>
#include "ClapTrap.class.hpp"

class ScavTrap : public ClapTrap
{
	private:


	public:

		void	attack(const std::string& target);
		void	guardGate(void);

		ScavTrap &	operator=(ScavTrap const &assign);

		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap(void);

};

#endif

