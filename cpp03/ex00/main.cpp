# include "ClapTrap.hpp"

int main (void)
{
    ClapTrap Bob("Bob");
    ClapTrap Ken("Ken");
	ClapTrap Clapper;

	// atacando com 0 de dano
	Bob.attack("Ken");

	// atacando com algum valor maior que 0
	Ken.setAttackPower(2);
	Ken.attack("Bob");
	Bob.takeDamage(2);

	// atacando com valor maior que a vida
	Bob.setAttackPower(11);
	Bob.attack("Clapper");
	Clapper.takeDamage(11);

	// tentando fazer algo sem vida
	Clapper.attack("the wind");
	Clapper.takeDamage(0);

	// usando o reparo
	Clapper.beRepaired(1);
	Clapper.beRepaired(1);
	Clapper.beRepaired(1);
	Clapper.beRepaired(1);
	Clapper.beRepaired(1);
	Clapper.beRepaired(1);
	Clapper.beRepaired(1);
	Clapper.beRepaired(1);
	Clapper.beRepaired(1);
	Clapper.beRepaired(2);

	// tentando repara sem energia
	Clapper.beRepaired(1);

	// tentando reparar alem da vida maxima
	Clapper.setEnergy(1);
	Clapper.beRepaired(1);

	// testando o operador = e construtor de copia
	Clapper = Bob;
	ClapTrap Ken2(Ken);
}
