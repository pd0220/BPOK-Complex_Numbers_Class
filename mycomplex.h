#include <iostream>
#include <cmath>
#include <numeric>
#include <string>

const double pi = 3.14159265358979323846;

auto err =[](std::string error){std::cout<<"Error in"<<error<<std::endl;};

struct degre {};

class complex {
    double len, ang, a, b;
    public: complex(double l,double an,degre): len(l), ang(an), a(0), b(0) {}
            complex(double A, double B): a(A), b(B), len(0), ang(0) {}
    

        auto length()const
                {
                if(len == 0 ){return sqrt(a*a + b*b);} 
                else         {return len;}
                }
        auto real()const
        {
                if(a==0){return len * cos(ang);}
                else    {return a;}
        }
        auto imaginary()const
        {
                if(b==0){return len * sin(ang);}
                else    {return b;}
        }
        auto angle()const
        {
                if(len==0)
                {
                        if(a > 0){return atan(b/a);}
                        if(a<0){return (pi + atan(b/a));}
                }
                else
                {
                        return ang;
                }    
        }
};