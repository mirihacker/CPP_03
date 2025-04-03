#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "../inc/ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap(void);
        FragTrap(const std::string &name);
        ~FragTrap();
        void highFiveGuys(void);
};

#endif