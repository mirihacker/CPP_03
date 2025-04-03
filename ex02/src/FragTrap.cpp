#include "../inc/FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
    _name = "FT";
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap constructor called. Initialized as ";
    std::cout << _name << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap constructor called. Initialized as ";
    std::cout << _name << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << _name << " is destroyed!" << std::endl;
}

void FragTrap::highFiveGuys(void)
{
    std::cout << "I am " << _name << ". Wanna high five?" << std::endl;
}