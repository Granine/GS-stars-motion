#include <iostream>
#include <vector>

class Star {
private:
    
public:
    double m_location[3];
    double m_size;
    double m_wavelength;
    double m_speed;
    Star(double location[3], double size, double wavelength, double speed
    ): m_size(size), m_wavelength(wavelength), m_speed(speed) {
        m_location[0] = location[0];
        m_location[1] = location[1];
        m_location[2] = location[2];
    }
    Star(double location[3]){
        m_location[0] = location[0];
        m_location[1] = location[1];
        m_location[2] = location[2];
    }

    void set_speed(double speed, bool in_meters_per_second = false) {
        if (in_meters_per_second) {
            m_speed = speed * 3.336e-9;
        } else {
            m_speed = speed;
        }
    }

};

class StarSystem {
public:
    void add_star(Star* star) {
        m_stars.push_back(star);
    }

    void motion_x(double motion_x) {
        for (auto& star:m_stars) {
            star->m_location[0] = star->m_location[0] + motion_x;
        }
    }

private:
    std::vector<Star*> m_stars;
};

int main() {
    StarSystem system;
    double location[3] = {1.0, 1.0, 1.0};
    Star star1(location, 1, 1, 1);

    system.add_star(&star1);

    system.motion_x(2);

    std::cout << "Star 1 x after motion: " << star1.m_location[0] << std::endl;

    return 0;
}