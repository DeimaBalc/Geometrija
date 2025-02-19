#include "geometrija.h"
#include <iostream>

int main(){

    Taskas3D pA{0,0,0};
    Taskas3D pB{1, 0, 0};
    Taskas3D pC{0, 1, 0};
    Taskas3D pD{0, 0, 1};

    //Tasku skaitymas
    
    std::cout<<"Įvesktite tašką pA: "<<std::endl;
    pA.skaitykTaska(pA);
    std::cout << "Taskas pA: ";
    pA.rasykTaska(pA);
    std::cout<< std::endl; 

    std::cout<<"Įvesktite tašką pB: "<<std::endl;
    pB.skaitykTaska(pB);
    std::cout << "Taskas pB: ";
    pB.rasykTaska(pB);
    std::cout<< std::endl;

    pB.keiskX(0.5);
    pC.keiskTaska(0, 0, 0);
    

    
    std::cout << "Atstumas nuo pB iki k. centro: " << pB.atstumasIkiKoordinaciuPradzios(pB) << std::endl; 
    Atkarpa3D atkAB{pA, pB};
    std::cout << "Atkarpos AB ilgis: " << atkAB.atkarposIlgis(atkAB) << std::endl;

    Trikampis3D trkABC{pA, pB, pC};
    std::cout << "Trikampio ABC plotas: " << trkABC.trikampioPlotas(trkABC) << std::endl;
    std::cout << "Trikampio ABC perimetras: " << trkABC.trikampioPerimetras(trkABC) << std::endl;
    
    Trikampis3D trkBCD{pC, pB, pD};
    std::cout << "Trikampio BCD plotas: " << trkBCD.trikampioPlotas(trkBCD) << std::endl;
    std::cout << "Trikampio BCD perimetras: " << trkBCD.trikampioPerimetras(trkBCD) << std::endl;
   
    return 0;



}
