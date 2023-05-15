// MyClass.h
#ifndef Star_H
#define Star_H

class Star {
public:
    double m_location[3];
    double m_size;
    double m_wavelength;
    double m_speed;
    Star(double location[3], double size, double wavelength, double speed);
    Star(double location[3]);
    void setSpeed(double speed, bool in_meters_per_second = false);
};

#endif