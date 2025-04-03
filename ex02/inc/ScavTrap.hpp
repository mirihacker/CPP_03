#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include "../inc/ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(void);
        ScavTrap(const std::string &name);
        ~ScavTrap();

        void attack(const std::string &target);
        void guardGate(void);
};

#endif