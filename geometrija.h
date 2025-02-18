#ifndef _GEOMETRIJA3D_H_
#define _GEOMETRIJA3D_H_


struct Taskas3D{
   double x;
   double y;
   double z;
};

struct Atkarpa3D{
   Taskas3D a;
   Taskas3D b;
};

struct Trikampis3D{
   Taskas3D a;
   Taskas3D b;
   Taskas3D c;
};


double atstumasIkiKoordinaciuPradzios(const Taskas3D& taskas);
double atstumasTarpTasku(const Taskas3D& taskas1, const Taskas3D& taskas2);
double atkarposIlgis(const Atkarpa3D& atkarpa);
void skaitykTaska(Taskas3D& taskas);
void rasykTaska(const Taskas3D& taskas);
double trikampioPlotas(const Trikampis3D& trikampis);

double trikampioPerimetras(const Trikampis3D& trikampis);



#endif
