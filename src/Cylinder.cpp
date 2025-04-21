# ifndef CYLINDER_CPP
# define CYLINDER_CPP

# include "Cylinder.h"
# include <cmath>
# include <iomanip>
using namespace std;

double Cylinder :: SurfaceArea(){
    
    double pi = M_PI;
    
    return 2.0*(double)this->radius*(double)this->radius*pi + 2.0*pi*(double)this->radius*(double)this->height;
}

double Cylinder :: Volume(){
    double pi = M_PI;
    
    return (double)this->radius*(double)this->radius*pi*(double)this->height;
}

double Cylinder :: Circumference(){
    double pi = M_PI;
    
    return (double)this->radius*pi*2.0;
}

istream & operator>>(istream & in, Cylinder & cldr)
{
    in >> cldr.radius >> cldr.height;
    return in;
}

ostream & operator<<(ostream & out, Cylinder & cldr)
{
    out << "Circumference: "<<fixed<<std::setprecision(3)<< cldr.Circumference() <<endl;
    out << "SurfaceArea: "<<fixed<<std::setprecision(3)<< cldr.SurfaceArea()<<endl;
    out << "Volume: "<<fixed<<std::setprecision(3)<< cldr.Volume();
    return out;
}

# endif
