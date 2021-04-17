// modul4_kel31c++function.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
void non_return_func(string praktikan1, string praktikan2, int kelompok) {
    cout << "Selamat datang di Praktikum DKP 2021\n";
    cout << praktikan1 << " dan " << praktikan2 << " adalah kelompok " << kelompok;
}

int return_func(int perkalian) {
    if (perkalian > 0 || perkalian < 3) {
        return perkalian * 3;
    }
    else {
        return perkalian * 0;
    }
}

int main() {
    non_return_func("Ur name here", "Ur name here", 1);
    cout << "\nhasil perkalian 1 dengan 3 adalah " << return_func(1);
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
