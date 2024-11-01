#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("Scavy") 
{
  this->setHealth(100);
  this->setEnergy(100);
  this->setAttackPower(20);

  std::cout << this->getName() << " is ready for action!!!" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name) 
{
  this->setHealth(100);
  this->setEnergy(100);
  this->setAttackPower(20);

  std::cout << this->getName() << " is ready for action!!!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other.getName()) 
{
  this->setHealth(other.getHealth());
  this->setEnergy(other.getEnergy());
  this->setAttackPower(other.getAttackPower());

  std::cout << this->getName() << " twin is ready for action!!!" << std::endl;
}

ScavTrap::~ScavTrap(void) {
  std::cout << this->getName() << " is going offline!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other) 
{
  this->setName(other.getName());
  this->setHealth(other.getHealth());
  this->setEnergy(other.getEnergy());
  this->setAttackPower(other.getAttackPower());
  return (*this);
}

void ScavTrap::attack(std::string target) 
{
  	if (this->getHealth() == 0) 
  	{
    	std::cout << this->getName() << " is fainted, unable to attack" << std::endl;
    	return;
  	}
  	if (this->getEnergy() == 0) 
  	{
    std::cout << this->getName() << " has ran out of gas, unable to attack" << std::endl;
    	return;
	}
	this->setEnergy(getEnergy() - 1);
	std::cout << this->getName() << " has grab a shovel and rush towards " << target;
	if (this->getAttackPower() <= 0)
		std::cout << ", gently hitting , causing no damage!";
	else
		std::cout << ", smacking with all it's strenght, causing " << this->getAttackPower() << " points of damage!";
	std::cout << std::endl;

}

void ScavTrap::guardGate(void) 
{
  	if (this->getHealth() == 0)
	{
    	std::cout << this->getName() << " is fainted, unable to enter guard keeper mode!"<< std::endl;
    	return;
 	 }

  	std::cout << this->getName() << " has briefly heighten it's senses, entering GUARD KEEPER MODE!!!" << std::endl;
}