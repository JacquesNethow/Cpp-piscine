#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : name("Clapper"), health(10), energy(10), attackPower(30)
{
	std::cout << this->name << " reporting for duty!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), health(10), energy(10), attackPower(30)
{
	std::cout << this->name << " reporting for duty!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	this->setHealth(other.getHealth());
	this->setEnergy(other.getEnergy());
	this->setAttackPower(other.getAttackPower());
	this->setName(other.getName());

	std::cout << "A new " << this->name << " is reporting for duty!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << this->name << " has become another " << other.getName() << std::endl;
	
	this->setHealth(other.getHealth());
	this->setEnergy(other.getEnergy());
	this->setAttackPower(other.getAttackPower());
	this->setName(other.getName());
	
	return (*this);
}

ClapTrap::~ClapTrap(void) {
  std::cout << this->getName() << " is signing out!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->health <= 0)
	{
		std::cout << this->getName() << " can't attack because it is already fainted!" << std::endl;
		return ;
	}
	if (this->energy <= 0)
	{
		std::cout << this->getName() << " can't attack because it's out of energy!" << std::endl;
		return ;
	}
	this->energy--;
	std::cout << this->getName() << " has launched a attack at " << target;
	if (this->attackPower <= 0)
		std::cout << ", but it was too weak, causing no damage!";
	else
		std::cout << ", causing " << this->attackPower << " points of damage!";
	std::cout << std::endl;
}

void ClapTrap::takeDamage(unsigned int damageAmount )
{

	if (this->health <= 0)
	{
		std::cout << this->getName() << " can't take damage because it is already fainted!" << std::endl;
		return ;
	}
	std::cout << this->getName() << " was hit, ";
	if (damageAmount == 0)
		std::cout << "but didn't take any damage! ";
	else
	{
		if (damageAmount >= this->health)
		{
			damageAmount = health;
			this->health = 0;
		}
		else
			this->health -= damageAmount;
		std::cout << "receiving " << damageAmount << " points of damage! ";
	}
	std::cout << this->getName() << " health is standing at " << this->health << "." << std::endl;
}

void ClapTrap::beRepaired(unsigned int healingAmount )
{

	if (this->energy <= 0)
	{
		std::cout << this->getName() << " can't heal because it's out of energy!" << std::endl;
		return ;
	}
	if (this->health <= 0)
	{
		std::cout << this->name << " was healed and became operational again, ";
	}
	else
	{
		std::cout << this->name << " was healed by " << healingAmount << ", ";
	}
	this->health+= healingAmount;
	this->energy--;
	std::cout << this->name << " health is standing at " << this->health << "." << std::endl;
}

unsigned int ClapTrap::getHealth( void ) const
{
	return (this->health);
}

void ClapTrap::setHealth( const unsigned int health )
{
	this->health = health;
}

unsigned int ClapTrap::getEnergy( void ) const
{
	return (this->energy);
}

void ClapTrap::setEnergy( const unsigned int energy )
{
	this->energy = energy;
}

unsigned int ClapTrap::getAttackPower() const 
{
	return (this->attackPower);
}

void ClapTrap::setAttackPower(unsigned int attackPower) {
  this->attackPower = attackPower;
}

std::string ClapTrap::getName( void ) const
{
	return (this->name);
}

void ClapTrap::setName( const std::string name )
{
	const_cast<std::string &>(this->name) = name;
}
