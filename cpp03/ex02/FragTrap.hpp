#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:

	FragTrap(void);

	explicit FragTrap(const std::string name);

	FragTrap(const FragTrap &other);

	~FragTrap(void);

	FragTrap &operator=(const FragTrap &other);

	void highFivesGuys(void);
};

#endif