# include "FragTrap.hpp"
# include "ScavTrap.hpp"


int main (void)
{
    ClapTrap Clapper;
    FragTrap Gary;
    FragTrap Gary2(Gary);
	FragTrap Bob("Bob");


	//testando o high five
	Gary.setHealth(0);
	Gary.highFivesGuys();
	Gary2.highFivesGuys();

	// outros teste
	/*
	Gary.setHealth(100);

	Gary.attack(Bob.getName());
	Bob.takeDamage(Gary.getAttackPower());

	Bob.setAttackPower(0);
	Bob.attack(Gary.getName());

	Bob.setHealth(0);
	Bob.attack("himself");

	Bob.beRepaired(10);

	Bob.setEnergy(0);
	Bob.attack("Himself");
	*/
}