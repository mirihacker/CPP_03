#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("CT"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap constructor is called. Initialized as " << _name << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
    std::cout << "ClapTrap constructor is called. Initialized as " <<_name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    _name = other._name;
    _hitPoints = other._hitPoints;
    _energyPoints = other._energyPoints;
    _attackDamage = other._attackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
        _name = other._name;
        _hitPoints = other._hitPoints;
        _energyPoints = other._energyPoints;
        _attackDamage = other._attackDamage; 
    }
    return (*this);
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTrap " << _name << " is destroyed!" << std::endl;
}

bool ClapTrap::_checkPoints(void)
{
    if (!_energyPoints)
    {
        std::cout << "No energy points!" << std::endl;
        return false;
    }
    if (!_hitPoints)
    {
        std::cout << "Sorry no hit points!" << std::endl;
        return false;
    }
    return true;
}

void ClapTrap::attack(const std::string &target)
{
    if (!_checkPoints())
        return;
    _energyPoints--;
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing ";
    std::cout << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << _name << " is attacked ";
    std::cout << amount << " points of damage!" << std::endl;
    if (_hitPoints < amount)
        _hitPoints = 0;
    else
        _hitPoints -= amount;
    std::cout << "Current hit point amount is " << _hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (!_checkPoints())
        return;
    _energyPoints--;;
    std::cout << "Hit points are repaired by " << amount << std::endl;
    if (std::numeric_limits<unsigned int>::max() - amount <_hitPoints)
        _hitPoints = std::numeric_limits<unsigned int>::max();
    else
        _hitPoints += amount;
    std::cout << "Current hit points status " << _hitPoints << std::endl;
}

unsigned int ClapTrap::getHitPoints(void)
{
    return (_hitPoints);
}

unsigned int ClapTrap::getEnergyPoints(void)
{
    return (_energyPoints);
}

unsigned int ClapTrap::getAttackDamage(void)
{
    return (_attackDamage);
}

std::ostream &operator<<(std::ostream &out, ClapTrap &clap)
{
    out << "Hit Points: " << clap.getHitPoints() << ", ";
    out << "Energy Points: " << clap.getEnergyPoints() << ", ";
    out << "Attack Damage: " << clap.getAttackDamage() << ", ";
    return (out);
}