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
    pA.rasykTaska();
    std::cout<< std::endl; 

    std::cout<<"Įvesktite tašką pB: "<<std::endl;
    pB.skaitykTaska(pB);
    std::cout << "Taskas pB: ";
    pB.rasykTaska();
    std::cout<< std::endl;


    pB.keiskX(0.5);
    pC.keiskTaska(0, 0, 0);
    
    std::cout << "naujas Taskas pB: ";
    pB.rasykTaska();
    std::cout<< std::endl;

    std::cout << "naujas Taskas pC: ";
    pC.rasykTaska();
    std::cout<< std::endl;

    
    std::cout << "Atstumas nuo pB iki k. centro: " << pB.atstumasIkiKoordinaciuPradzios() << std::endl; 
    Atkarpa3D atkAB{pA, pB};
    Atkarpa3D atkBC{pB, pC};
    Atkarpa3D atkAC{pA, pC};
    Atkarpa3D atkBD{pB, pD};
    Atkarpa3D atkCD{pC, pD};
    std::cout << "Atkarpos AB ilgis: " << atkAB.atstumasTarpTasku() << std::endl;

    Trikampis3D trkABC{atkAB, atkBC, atkAC};
    std::cout << "Trikampio ABC plotas: " << trkABC.trikampioPlotas() << std::endl;
    std::cout << "Trikampio ABC perimetras: " << trkABC.trikampioPerimetras() << std::endl;
    
    Trikampis3D trkBCD{atkBC, atkCD, atkBD};
    std::cout << "Trikampio BCD plotas: " << trkBCD.trikampioPlotas() << std::endl;
    std::cout << "Trikampio BCD perimetras: " << trkBCD.trikampioPerimetras() << std::endl;
   
    return 0;



}
