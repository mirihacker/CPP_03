#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>
#include <limits>

class ClapTrap
{
		protected:
			std::string _name;
			unsigned int _hitPoints;
			unsigned int _energyPoints;
			unsigned int _attackDamage;
			bool _checkPoints(void);
		
		public:
			ClapTrap(void);
			ClapTrap(const std::string &name);
			ClapTrap(ClapTrap const &other);
			ClapTrap& operator=(ClapTrap const &other);
			~ClapTrap(void);
			
			virtual void attack(const std::string &target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
			
			unsigned int getHitPoints(void);
			unsigned int getEnergyPoints(void);
			unsigned int getAttackDamage(void);
};

std::ostream &operator<<(std::ostream &out, ClapTrap &clap);

#endif