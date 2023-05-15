#include "star.h"

Star::Star(double location[3], double size, double wavelength, double speed
): m_size(size), m_wavelength(wavelength), m_speed(speed) {
    m_location[0] = location[0];
    m_location[1] = location[1];
    m_location[2] = location[2];
}
Star::Star(double location[3]){
    m_location[0] = location[0];
    m_location[1] = location[1];
    m_location[2] = location[2];
}

void Star::setSpeed(double speed, bool in_meters_per_second) {
    if (in_meters_per_second) {
        m_speed = speed * 3.336e-9;
    } else {
        m_speed = speed;
    }
}
