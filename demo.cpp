#include "geometrija.h"
#include <iostream>

int main(){

    Taskas3D pA{0,0,0};
    Taskas3D pB{1, 0, 0};
    Taskas3D pC{0, 2, 0};
    Taskas3D pD{0, 0, 2};
    
    //skaitykTaska(pB);
    std::cout << "Taskas pA: "; 
    rasykTaska(pA);
    std::cout << std::endl;
    std::cout << "Taskas pB: "; 
    rasykTaska(pB);
    std::cout << std::endl;
    
    std::cout << "Atstumas nuo pB iki k. centro: " << atstumasIkiKoordinaciuPradzios(pB) << std::endl; 
    Atkarpa3D atkAB{pA, pB};
    std::cout << "Atkarpos AB ilgis: " << atkarposIlgis(atkAB) << std::endl;
    Trikampis3D trkABC{pA, pB, pC};
    std::cout << "Trikampio ABC plotas: " << trikampioPlotas(trkABC) << std::endl;
    std::cout << "Trikampio ABC perimetras: " << trikampioPerimetras(trkABC) << std::endl;
    
    Trikampis3D trkBCD{pC, pB, pD};
    std::cout << "Trikampio BCD plotas: " << trikampioPlotas(trkBCD) << std::endl;
    std::cout << "Trikampio BCD perimetras: " << trikampioPerimetras(trkBCD) << std::endl;
    
    return 0;



}
