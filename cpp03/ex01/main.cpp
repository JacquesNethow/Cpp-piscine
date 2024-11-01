# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int main (void)
{
    ClapTrap Clapper;
    ScavTrap Scavy;
    ScavTrap Scavy2(Scavy);
	ScavTrap Bob("Bob");


	// atacando com ScavTrap
	Scavy.attack(Bob.getName());
	Bob.setAttackPower(0);
	Bob.attack(Scavy.getName());

	// testando açoes sem vida ou sem energia
	Bob.setHealth(0);
	Bob.attack("himself");
	Bob.guardGate();
	Bob.beRepaired(10);
	Bob.setEnergy(0);
	Bob.attack("Himself");

	//testando o guard keeper mode
	Scavy.guardGate();

}