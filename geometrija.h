#ifndef _GEOMETRIJA3D_H_
#define _GEOMETRIJA3D_H_

class Taskas3D{
   private:
      double x;
      double y;
      double z;
   public:
      Taskas3D();
      Taskas3D(const double x, const double y, const double z);
      double atstumasIkiKoordinaciuPradzios(const Taskas3D& taskas);
      static double atstumasTarpTasku(const Taskas3D& taskas1, const Taskas3D& taskas2);
      static void skaitykTaska(Taskas3D& taskas);
      void rasykTaska(const Taskas3D& taskas);
};


class Atkarpa3D{
   private:
      Taskas3D a;
      Taskas3D b;
   public:
      Atkarpa3D(const Taskas3D& a, const Taskas3D& b);
      double atkarposIlgis(const Atkarpa3D& atkarpa);
};

class Trikampis3D{
   private:
      Taskas3D a;
      Taskas3D b;
      Taskas3D c;
   public:
      Trikampis3D(const Taskas3D& a, const Taskas3D& b, const Taskas3D& c);
      double trikampioPlotas(const Trikampis3D& trikampis);
      double trikampioPerimetras(const Trikampis3D& trikampis);
};

#endif
