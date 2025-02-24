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

Trikampis3D::Trikampis3D(const Atkarpa3D& a, const Atkarpa3D& b, const Atkarpa3D& c): a(a), b(b), c(c) {}


void Taskas3D::keiskTaska(const double naujasX, const double naujasY, const double naujasZ){
    
    this->x = naujasX;
    this->y = naujasY;
    this->z = naujasZ;

}

void Taskas3D::keiskX(const double naujasX){

    this->x = naujasX;

}

void Taskas3D::keiskY(const double naujasY){

    this->y = naujasY;

}

void Taskas3D::keiskZ(const double naujasZ){

    this->z = naujasZ;

}

double Taskas3D::atstumasIkiKoordinaciuPradzios(){
      
      return sqrt(x * x + y * y + z * z);
      
}

double Atkarpa3D::atstumasTarpTasku(){
      
      double dx = b.gaukX() - a.gaukX();
      double dy = b.gaukY() - a.gaukY();
      double dz = b.gaukZ() - a.gaukZ();

      return sqrt(dx * dx + dy * dy + dz * dz);

}

void Taskas3D::skaitykTaska(Taskas3D& taskas){

    std::cin >> taskas.x >> taskas.y >> taskas.z;

}

void Taskas3D::rasykTaska() const{
    
    std::cout << "Tasko koordinates (" << this->x << ", " <<  this->y << ", " << this->z << ")";
    
}

double Trikampis3D::trikampioPlotas(){
    
    double ab=a.atstumasTarpTasku();
    double bc=b.atstumasTarpTasku();
    double ac=c.atstumasTarpTasku();
    
    double p=trikampioPerimetras();
    
    return sqrt(p*(p-ac)*(p-ab)*(p-bc));;

}

double Trikampis3D::trikampioPerimetras(){
    
    return a.atstumasTarpTasku()+b.atstumasTarpTasku()+c.atstumasTarpTasku();

}


