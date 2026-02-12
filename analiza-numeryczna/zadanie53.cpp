#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Definicja funkcji w(x)
double f(double x) {
    return pow(x, 5) - x + 1;
}

// Definicja pochodnej w'(x) - potrzebna do metody Newtona
double df(double x) {
    return 5 * pow(x, 4) - 1;
}

// 1. Metoda Bisekcji (Połowienia przedziału)
void bisection(double a, double b, double epsilon) {
    int iterations = 0;
    double c;

    if (f(a) * f(b) >= 0) {
        cout << "Bisekcja: Zle dobrany przedzial (brak zmiany znaku)." << endl;
        return;
    }

    while ((b - a) >= epsilon) {
        iterations++;
        c = (a + b) / 2; // Srodek przedzialu

        if (f(c) == 0.0) break; // Trafilismy idealnie

        if (f(c) * f(a) < 0) {
            b = c; // Pierwiastek jest w lewej polowce
        } else {
            a = c; // Pierwiastek jest w prawej polowce
        }
    }
    cout << "Bisekcja:      x = " << setprecision(15) << c 
         << " (Iteracji: " << iterations << ")" << endl;
}

// 2. Metoda Newtona (Stycznych)
void newton(double x0, double epsilon) {
    int iterations = 0;
    double x1 = x0;

    do {
        x0 = x1;
        // Wzor: x_new = x_old - f(x)/f'(x)
        if (df(x0) == 0) {
            cout << "Newton: Pochodna zerowa, blad." << endl;
            return;
        }
        x1 = x0 - f(x0) / df(x0);
        iterations++;
    } while (abs(x1 - x0) > epsilon && iterations < 1000);

    cout << "Newton:        x = " << setprecision(15) << x1 
         << " (Iteracji: " << iterations << ")" << endl;
}

// 3. Metoda Siecznych
void secant(double x0, double x1, double epsilon) {
    int iterations = 0;
    double x2, d;

    do {
        iterations++;
        if (f(x0) == f(x1)) {
            cout << "Sieczne: Dzielenie przez zero." << endl;
            return;
        }
        
        // Wzor siecznych: x2 = x1 - f(x1) * (x1-x0) / (f(x1)-f(x0))
        x2 = x1 - f(x1) * (x1 - x0) / (f(x1) - f(x0));
        
        d = abs(x2 - x1); // Sprawdzamy zmiane
        x0 = x1;
        x1 = x2;
        
    } while (d > epsilon && iterations < 1000);

    cout << "Sieczne:       x = " << setprecision(15) << x2 
         << " (Iteracji: " << iterations << ")" << endl;
}

// 4. Metoda Regula Falsi (Fałszywego Położenia)
void regula_falsi(double a, double b, double epsilon) {
    int iterations = 0;
    double c, c_old;
    
    if (f(a) * f(b) >= 0) {
        cout << "Regula Falsi: Zle dobrany przedzial." << endl;
        return;
    }

    c = a; // Inicjalizacja
    do {
        iterations++;
        c_old = c;
        
        // Wzor identyczny jak w siecznych, ale logika doboru przedzialu inna
        c = (a * f(b) - b * f(a)) / (f(b) - f(a));

        if (f(c) == 0) break;

        // Zawężamy przedział tak, aby zachować zmianę znaku (jak w bisekcji)
        if (f(c) * f(a) < 0) {
            b = c;
        } else {
            a = c;
        }
        
    } while (abs(c - c_old) > epsilon && iterations < 1000);

    cout << "Regula Falsi:  x = " << setprecision(15) << c 
         << " (Iteracji: " << iterations << ")" << endl;
}

int main() {
    // Dokladnosc
    double epsilon = 1e-14; // Bardzo wysoka precyzja
    
    // Przedzial [-2, -1]
    double a = -2.0;
    double b = -1.0;

    cout << "Szukane rozwiazanie: -1.167303978261418..." << endl;
    cout << "------------------------------------------------" << endl;

    bisection(a, b, epsilon);
    newton(-1.0, epsilon); // Startujemy blisko pierwiastka (np. -1.0)
    secant(a, b, epsilon);
    regula_falsi(a, b, epsilon);

    return 0;
}