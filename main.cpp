#include <iostream>

int main() {
    float h_iniziale, h_finale, crescita;
    int n_mesi;
    std::cout<<"inserisci l'altezza iniziale: "<<std::endl;
    std::cin>>h_iniziale;
    std::cout<<"inserisci il numero di mesi: "<<std::endl;
    std::cin>>n_mesi;
    crescita = h_iniziale/2;
    h_finale = h_iniziale;
    for (int i = 0; i < n_mesi; ++i) {
        h_finale+=crescita;
        crescita = crescita/2;
    }
    std::cout<<"l'altezza finale della pianta sara pari a "<<h_finale;
    return 0;
}
