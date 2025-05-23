#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>

int main() {
    const int COUNT = 3000;
    std::ofstream fichier("nombres.txt");

    if (!fichier) {
        std::cerr << "Erreur lors de l'ouverture du fichier." << std::endl;
        return 1;
    }

    std::srand(std::time(nullptr)); // Initialiser le générateur de nombres aléatoires

    for (int i = 0; i < COUNT; ++i) {
        int nombre = std::rand() % 10000; // Génère un nombre entier aléatoire
        fichier << nombre;
        if (i < COUNT - 1)
            fichier << " ";
    }

    fichier.close();
    std::cout << "3000 nombres aléatoires ont été écrits dans 'nombres.txt'." << std::endl;

    return 0;
}

