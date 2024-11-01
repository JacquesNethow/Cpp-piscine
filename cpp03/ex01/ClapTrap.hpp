#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap
{
	public:

	ClapTrap(void);
	explicit ClapTrap(std::string);
	ClapTrap(const ClapTrap &other);

	ClapTrap &operator=(const ClapTrap &other);

	~ClapTrap(void);

	void 			attack(const std::string& target);
	void 			takeDamage(unsigned int amount);
	void 			beRepaired(unsigned int amount);

	unsigned int	getHealth( void ) const;
	void			setHealth( const unsigned int );

	unsigned int	getEnergy( void ) const;
	void			setEnergy( const unsigned int );

	unsigned int	getAttackPower( void ) const;
	void			setAttackPower( const unsigned int );

	std::string		getName(void) const;
	void        	setName( const std::string );

	private:
	const std::string	name;

	unsigned int			health;
	unsigned int			energy;
	unsigned int			attackPower;
};


#endif