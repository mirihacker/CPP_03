#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "../inc/ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(void);
        ScavTrap(const std::string &name);
        ScavTrap(const ScavTrap &other);
        ScavTrap &operator=(const ScavTrap &other);
        ~ScavTrap();

        void attack(const std::string &target);
        void guardGate(void);
};

#endif