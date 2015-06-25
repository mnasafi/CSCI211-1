#ifndef LOCATION_H
#define LOCATION_H

#include <iostream>
using namespace std;

// Stores the latitude and Longitude of a location on the Earth
// Since this class is so small, it does not have a .cpp file
class Location
{
  public:
    Location(double latitude, double longitude)
    {m_latitude = latitude; m_longitude = longitude;}

    // if you want to print to cout, pass cout to print()
    void print(ostream &os) {os.precision(10); os << m_latitude << ',' << m_longitude;}

  private:
    double m_latitude;
    double m_longitude;
};

#endif
