#include "geometrija.h"
#include <iostream>
#include <cmath>

double atstumasIkiKoordinaciuPradzios(const Taskas3D& taskas){
      return sqrt(taskas.x * taskas.x + taskas.y * taskas.y + taskas.z * taskas.z);
}

double atstumasTarpTasku(const Taskas3D& taskas1, const Taskas3D& taskas2){
      double dx = taskas2.x - taskas1.x;
      double dy = taskas2.y - taskas1.y;
      double dz = taskas2.z - taskas1.z;
 
      return sqrt(dx * dx + dy * dy + dz * dz);
}

double atkarposIlgis(const Atkarpa3D& atkarpa){
     return atstumasTarpTasku(atkarpa.a, atkarpa.b);
}

void skaitykTaska(Taskas3D& taskas){

    std::cin >> taskas.x >> taskas.y >> taskas.z;

}

void rasykTaska(const Taskas3D& taskas){
    std::cout << "(" << taskas.x << ", " <<  taskas.y << ", " << taskas.z << ")";
  //      std::cout
  
}

double trikampioPlotas(const Trikampis3D& trikampis){
    double ac=atstumasTarpTasku(trikampis.a, trikampis.c);
    double ab=atstumasTarpTasku(trikampis.a, trikampis.b);
    double bc=atstumasTarpTasku(trikampis.b, trikampis.c);
    double p=(ac+ab+bc)/2;
    double plotas=sqrt(p*(p-ac)*(p-ab)*(p-bc));
    return plotas;
}
double trikampioPerimetras(const Trikampis3D& trikampis){
    double ac=atstumasTarpTasku(trikampis.a, trikampis.c);
    double ab=atstumasTarpTasku(trikampis.a, trikampis.b);
    double bc=atstumasTarpTasku(trikampis.b, trikampis.c);
    double perimetras=(ac+ab+bc);
    return perimetras;

}



