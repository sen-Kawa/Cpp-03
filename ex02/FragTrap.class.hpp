#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP

#include <iostream>
#include "ClapTrap.class.hpp"

class FragTrap : public ClapTrap
{
	private:


	public:

		void	attack(const std::string& target);
		void	highFivesGuys(void);

		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);
		~FragTrap(void);

};

#endif

