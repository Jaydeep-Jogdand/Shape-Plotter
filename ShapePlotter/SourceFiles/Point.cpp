#include "Point.h"
#include "Shape.h"
#include <iostream>
using namespace std;

Point::Point(double a,double b)
{
    this->x = a;
    this->y = b;
   
}
void Point::CreatePoint()
{
    cout<<"Point X and y "<<x<<" "<<y<<endl; 
}
void Point::draw()
{
   // cout<<"Point draw "<<endl;
}

Point::~Point()
{
   // cout<<"Point Destructor"<<endl;
}
