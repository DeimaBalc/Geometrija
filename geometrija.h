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
      double atstumasIkiKoordinaciuPradzios();
      static void skaitykTaska(Taskas3D& taskas);
      void keiskTaska(const double naujasX, const double naujasY, const double naujasZ);
      void rasykTaska() const;
      void keiskX(const double naujasX);
      void keiskY(const double naujasY);
      void keiskZ(const double naujasZ);

      double gaukX() const { return x; }
		double gaukY() const { return y; }
		double gaukZ() const { return z; }
};


class Atkarpa3D{
   private:
      Taskas3D a;
      Taskas3D b;
   public:
      Atkarpa3D(const Taskas3D& a, const Taskas3D& b);
      double atstumasTarpTasku();
};

class Trikampis3D{
   private:
      Atkarpa3D a;
      Atkarpa3D b;
      Atkarpa3D c;
   public:
      Trikampis3D(const Atkarpa3D& a, const Atkarpa3D& b, const Atkarpa3D& c);
      double trikampioPlotas();
      double trikampioPerimetras();
};

#endif
