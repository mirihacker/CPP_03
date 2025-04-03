#include "../inc/FragTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include <climits> // For UINT_MAX

int main()
{
    // Basic tests
    ClapTrap clap("Clappy");
    ScavTrap scav("Scavy");
    FragTrap frag("Fraggy");

    std::cout << "\n--- Initial Stats ---\n";
    std::cout << clap << std::endl;
    std::cout << scav << std::endl;
    std::cout << frag << std::endl;

    // Testing attack
    std::cout << "\n--- Testing Attacks ---\n";
    clap.attack("Enemy 1");
    scav.attack("Enemy 2");
    frag.attack("Enemy 3");

    // Testing taking damage
    std::cout << "\n--- Testing Take Damage ---\n";
    clap.takeDamage(5);
    scav.takeDamage(50);
    frag.takeDamage(10);
    std::cout << clap << std::endl;
    std::cout << scav << std::endl;
    std::cout << frag << std::endl;

    // Testing healing
    std::cout << "\n--- Testing Healing ---\n";
    clap.beRepaired(5);
    scav.beRepaired(50);
    frag.beRepaired(10);
    std::cout << clap << std::endl;
    std::cout << scav << std::endl;
    std::cout << frag << std::endl;

    // Edge case: Healing beyond max value
    std::cout << "\n--- Edge Case: Healing Beyond Limits ---\n";
    scav.beRepaired(UINT_MAX); // Overflow check
    frag.beRepaired(UINT_MAX);
    std::cout << scav << std::endl;
    std::cout << frag << std::endl;

    // Edge case: Taking damage more than HP
    std::cout << "\n--- Edge Case: Fatal Damage ---\n";
    scav.takeDamage(99999);
    frag.takeDamage(99999);
    std::cout << scav << std::endl;
    std::cout << frag << std::endl;

    // Testing energy depletion
    std::cout << "\n--- Edge Case: Energy Depletion ---\n";
    for (int i = 0; i < 55; i++) // Exceed energy points
        scav.attack("Dummy Target");
    std::cout << scav << std::endl;
    for (int i = 0; i < 105; i++) // Exceed energy points
        frag.attack("Dummy Target");
    std::cout << frag << std::endl;

    // Testing guard mode
    std::cout << "\n--- Testing Guard Mode ---\n";
    scav.guardGate();

    // Testing high fiving
    std::cout << "\n--- Testing High Fives ---\n";
    frag.highFiveGuys();
    std::cout << std::endl;

    return 0;
}