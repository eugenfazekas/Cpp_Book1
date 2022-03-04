#include <iostream>

using namespace std;

class Pont2D {
    protected:
        int x,y;
    public:
        Pont2D(int _x = 0, int _y = 0) { x = _x; y = _y; }    
        Pont2D(Pont2D & p ) { *this = p; }
        void setPoint2D( int _x = 0, int _y= 0) { x = _x; y = _y; }
        void getPoint2D( int & _x, int & _y) { _x = x ; _y = y; }
        void Kiir() {cout<<'('<<x<<','<<y<<')'<<endl;}
};

class Pont3D : public Pont2D {
    protected:
        int z;
    public:
        Pont3D(int x = 0, int y = 0, int z = 0) : Pont2D(x,y),z(z) {}    
        Pont3D(Pont3D & p) :Pont2D(p.x,p.y),z(p.z) {}
        void setPoint3D( int _x = 0, int _y = 0, int _z = 0) { x = _x; y = _y; z = _z; }
        void getPoint3D( int & _x, int & _y, int & _z) { _x = x ; _y = y; _z = z; }
        void Kiir() {cout<<'('<<x<<','<<y<<','<<z<<')'<<endl;}
};

void Megjelenit(Pont2D & p) {
    p.Kiir();
}

int main() {
    Pont2D p1 (12,23), p2(p1), p3;
    Pont3D q1 (12,23,79), q2(q1), q3;
    p1.Kiir();
    q1.Kiir();
    q2.setPoint3D(1,2,3);
    p3 = q2;
    p2.Kiir();
    Megjelenit(p3);
    Megjelenit(q3);
}