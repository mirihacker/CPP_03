#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
    _name = "ST";
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap constructor is called. Initialized as ";
    std::cout << _name << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap constructor is called. Initialized as ";
    std::cout << _name << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << _name << " is destroyed!" <<std::endl;
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << _name << " is now gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (!_checkPoints())
        return;
    _energyPoints--;
    std::cout << "ScavTrap " << _name << "attacks " << target << ", causing ";
    std::cout << _attackDamage << " points of damage!" << std::endl;
}