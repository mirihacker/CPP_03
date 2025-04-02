#include "../inc/ClapTrap.hpp"

int main()
{
    ClapTrap ct1("Warrior");
    ClapTrap ct2("Defender");

    std::cout << "\nInitial status:" << std::endl;
    std::cout << ct1 << std::endl;
    std::cout << ct2 << std::endl;

    std::cout << "\nTesting attack:" << std::endl;
    ct1.attack("Defender");
    ct2.takeDamage(2);
    
    std::cout << "\nStatus after attack:" << std::endl;
    std::cout << ct1 << std::endl;
    std::cout << ct2 << std::endl;

    std::cout << "\nTesting repair:" << std::endl;
    ct2.beRepaired(5);
    
    std::cout << "\nFinal status:" << std::endl;
    std::cout << ct1 << std::endl;
    std::cout << ct2 << std::endl;
    
    return 0;
}