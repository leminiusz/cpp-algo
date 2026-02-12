#include <iostream>
#include <vector>

using namespace std;

// Zmienne globalne dla wygody w algorytmach grafowych
// adj - lista sąsiedztwa (reprezentacja grafu)
vector<vector<int>> adj;
// kolory - tablica przechowująca kolory wierzchołków
// Wartości: -1 (nieodwiedzony), 0 (kolor A), 1 (kolor B)
vector<int> kolory;

// Funkcja DFS sprawdzająca dwudzielność
// u - aktualny wierzchołek
// c - kolor, jaki chcemy nadać wierzchołkowi u (0 lub 1)
bool dfs(int u, int c) {
    kolory[u] = c; // Przypisz kolor aktualnemu wierzchołkowi

    // Przejdź przez wszystkich sąsiadów wierzchołka u
    for (int v : adj[u]) {
        if (kolory[v] == -1) {
            // Jeśli sąsiad nie był odwiedzony, wywołaj DFS rekurencyjnie
            // z kolorem przeciwnym (1 - c zamienia 0 na 1 i odwrotnie)
            if (dfs(v, 1 - c) == false) {
                return false; // Konflikt wykryty głębiej
            }
        } else {
            // Jeśli sąsiad był już odwiedzony, sprawdź czy nie ma tego samego koloru
            if (kolory[v] == c) {
                return false; // Konflikt: sąsiedzi mają ten sam kolor!
            }
        }
    }
    return true; // Brak konfliktów w tej gałęzi
}

int main() {
    // Optymalizacja wejścia/wyjścia (szybsze działanie dla dużych danych)
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cout << "Podaj liczbe wierzcholkow (n) i krawedzi (m): ";
    if (!(cin >> n >> m)) return 0;

    // Inicjalizacja struktur
    // Używamy n + 1, aby mieć indeksy od 1 do n
    adj.resize(n + 1);
    kolory.assign(n + 1, -1); // Wypełnij tablicę wartościami -1

    cout << "Podaj krawedzie (u v):" << endl;
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        // Graf jest nieskierowany, dodajemy krawędź w obie strony
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    bool czyDwudzielny = true;

    // Pętla po wszystkich wierzchołkach (obsługa grafów niespójnych)
    for (int i = 1; i <= n; i++) {
        if (kolory[i] == -1) {
            // Jeśli wierzchołek nieodwiedzony, startujemy DFS z kolorem 0
            if (dfs(i, 0) == false) {
                czyDwudzielny = false;
                break; // Znaleziono konflikt, przerywamy
            }
        }
    }

    if (czyDwudzielny) {
        cout << "TAK, graf jest dwudzielny." << endl;
        
        // Opcjonalnie: wypisz podział na zbiory
        cout << "Zbior 0: ";
        for(int i=1; i<=n; i++) if(kolory[i]==0) cout << i << " ";
        cout << "\nZbior 1: ";
        for(int i=1; i<=n; i++) if(kolory[i]==1) cout << i << " ";
        cout << endl;
    } else {
        cout << "NIE, graf nie jest dwudzielny." << endl;
    }

    return 0;
}