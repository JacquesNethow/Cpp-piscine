#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap("Gary")
{
	this->setHealth(100);
	this->setEnergy(100);
	this->setAttackPower(30);

	std::cout << this->getName() << " is happily waiting for instructions" << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	this->setHealth(100);
	this->setEnergy(100);
	this->setAttackPower(30);

	std::cout << this->getName() << " is happily waiting for instructions" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other) : ClapTrap(other.getName()) {
  	this->setHealth(other.getHealth());
  	this->setEnergy(other.getEnergy());
  	this->setAttackPower(other.getAttackPower());

  	std::cout << this->getName() << " twin is also happily waiting for instructions" << std::endl;
}

FragTrap::~FragTrap(void) {
  	std::cout << this->getName() << " waves a goodbye!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other) {
  	this->setName(other.getName());
	this->setHealth(other.getHealth());
  	this->setEnergy(other.getEnergy());
  	this->setAttackPower(other.getAttackPower());
	return (*this);
}

void FragTrap::highFivesGuys(void)
{
	if(this->getHealth() == 0)
	{
		std::cout << this->getName() << " lost all of it's health, it's incapable of High-Fiving :(" << std::endl;
		return ;
	}
	std::cout << this->getName() << " stretches its arms to the maximum, going for a almighty high five !!!" << std::endl;
}