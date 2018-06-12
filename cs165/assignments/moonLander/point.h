/***********************************************************************
 * Header File:
 *    POINT : The representation of a position on the screen
 * Author:
 *    Scott Currell
 * Summary:
 *    ... add summary ...
 ************************************************************************/

#ifndef POINT_H
#define POINT_H

#include <iostream>

/*********************************************
 * POINT
 * A single position.  
 *********************************************/
class Point
{
private:
   float x;           // horizontal position
   float y;           // vertical position

public:
   // constructors
   Point()            : x(0.0), y(0.0)  {}
   Point(bool check)  : x(0.0), y(0.0)  {}
   Point(float x, float y);

   // getters
   float getX()       const { return x;              }
   float getY()       const { return y;              }

   // setters
   void setX(float x);
   void setY(float y);
   void addX(float dx)      { setX(getX() + dx);     }
   void addY(float dy)      { setY(getY() + dy);     }
};

// stream I/O useful for debugging
std::ostream & operator << (std::ostream & out, const Point & pt);
std::istream & operator >> (std::istream & in,        Point & pt);

#endif // POINT_H
