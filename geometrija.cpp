#include "geometrija.h"
#include <iostream>
#include <cmath>

Taskas3D::Taskas3D() : x(0), y(0), z(0) {}

Taskas3D::Taskas3D(double x, double y, double z){

    this-> x = x;
    this-> y = y;
    this-> z = z; 

}

Atkarpa3D::Atkarpa3D(const Taskas3D& a, const Taskas3D& b){

    this-> a = a;
    this-> b = b;

}

Trikampis3D::Trikampis3D(const Taskas3D& a, const Taskas3D& b, const Taskas3D& c){

    this-> a = a;
    this-> b = b;
    this-> c = c;

}

void Taskas3D::keiskTaska(const double naujasX, const double naujasY, const double naujasZ){
    
    this->x = naujasX;
    this->y = naujasY;
    this->z = naujasZ;

}

void Taskas3D::naujasX(const double naujasX){

    this->x = naujasX;

}

void Taskas3D::naujasY(const double naujasY){

    this->Y = naujasY;

}

void Taskas3D::naujasZ(const double naujasZ){

    this->Z = naujasZ;

}

double Taskas3D::atstumasIkiKoordinaciuPradzios(const Taskas3D& taskas){
      
      return sqrt(taskas.x * taskas.x + taskas.y * taskas.y + taskas.z * taskas.z);
      
}

double Taskas3D::atstumasTarpTasku(const Taskas3D& taskas1, const Taskas3D& taskas2){
      
      double dx = taskas2.x - taskas1.x;
      double dy = taskas2.y - taskas1.y;
      double dz = taskas2.z - taskas1.z;
 
      return sqrt(dx * dx + dy * dy + dz * dz);

}

double Atkarpa3D::atkarposIlgis(const Atkarpa3D& atkarpa){
     
     return Taskas3D::atstumasTarpTasku(atkarpa.a, atkarpa.b);

}

void Taskas3D::skaitykTaska(Taskas3D& taskas){

    std::cin >> taskas.x >> taskas.y >> taskas.z;

}

void Taskas3D::rasykTaska() const{
    
    std::cout << "Tasko koordinates (" << this->x << ", " <<  this->y << ", " << this->z << ")";
    
}

double Trikampis3D::trikampioPlotas(const Trikampis3D& trikampis){
    
    double ac=Taskas3D::atstumasTarpTasku(trikampis.a, trikampis.c);
    double ab=Taskas3D::atstumasTarpTasku(trikampis.a, trikampis.b);
    double bc=Taskas3D::atstumasTarpTasku(trikampis.b, trikampis.c);
    
    double p=(ac+ab+bc)/2;
    double plotas=sqrt(p*(p-ac)*(p-ab)*(p-bc));
    
    return plotas;

}

double Trikampis3D::trikampioPerimetras(const Trikampis3D& trikampis){
    
    double ac=Taskas3D::atstumasTarpTasku(trikampis.a, trikampis.c);
    double ab=Taskas3D::atstumasTarpTasku(trikampis.a, trikampis.b);
    double bc=Taskas3D::atstumasTarpTasku(trikampis.b, trikampis.c);
    
    double perimetras=(ac+ab+bc);
    
    return perimetras;

}


