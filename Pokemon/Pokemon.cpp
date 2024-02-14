// Pokemon.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
using namespace std;


int palucha_attaque(int PaluchaLife, int Aattack) {
    // Vérifier si l'attaque est positive
    if (Aattack < 0) {
        return PaluchaLife; // Ne pas infliger de dégâts négatifs
    }

    // Calculer les points de vie restants
    int new_life = PaluchaLife - Aattack;

    // Si les points de vie sont inférieurs à 0, les mettre à 0
    if (new_life < 0) {
        new_life = 0;
    }

    // Retourner les points de vie restants
    return new_life;
}

int main()
{
    int PaluchaLife = 250;
    int AstroLife = 100;
    int Aattack = 20;
    cout << "What's your name ?\n" << endl;
    string trainer;
    cin >> trainer;
    cout << "welcome " << trainer << " !" << endl;
    cout << "A wild Astro appear !" << endl;
    cout << " " << endl;
    cout << "Palucha go !" << endl;
    cout << " " << endl;
    do {
        cout << "choose an attack !\nCharge\nHigh Ground\nMega Smash\nHate" << endl;
        cout << " " << endl;
        int answer;
        cin >> answer;
        if (answer == 0) {
            cout << "Palucha use Charge !" << endl;
            AstroLife = AstroLife - 20;
        }
        if (answer == 1) {
            cout << "Palucha use High Ground!" << endl;
            AstroLife = AstroLife - 14;
        }
        if (answer == 2) {
            cout << "Palucha use Mega Smash!" << endl;
            AstroLife = AstroLife - 36;
        }
        if (answer == 3) {
            cout << "Palucha use Hate!" << endl;
            AstroLife = AstroLife - 10;
        }
        cout <<"Astro have " << AstroLife << " HP left" << endl;
        cout << " " << endl;
        cout << "Astro Attack !" << endl;
        cout << " " << endl;
        int randswer = rand() % 4;
        cout << randswer << endl;
        if (randswer == 0) {
            cout << "Astro use Charge !" << endl;
            PaluchaLife = PaluchaLife - 20;
        }
        if (randswer == 1) {
            cout << "Astro use Bite!" << endl;
            PaluchaLife = PaluchaLife - 14;
        }
        if (randswer == 2) {
            cout << "Astro use Flash Attack!" << endl;
            PaluchaLife = PaluchaLife - 36;
        }
        if (randswer == 3) {
            cout << "Astro use Fibonacci!" << endl;
            PaluchaLife = PaluchaLife - 10;
        }
        cout << "Palucha have " << PaluchaLife << " HP left" << endl;
    } while (AstroLife >= 0);
    cout << "Astro is KO." << endl;
    cout << "Congratulation you win the battle!" << endl;

}