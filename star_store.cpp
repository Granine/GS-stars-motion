#include <iostream>
#include <vector>
#include "star.h"

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
    std::cout << "123" << std::endl;
    std::cin.get();
    StarSystem system;
    double location[3] = {1.0, 1.0, 1.0};
    Star star1(location, 1, 1, 1);

    system.add_star(&star1);

    system.motion_x(2);

    std::cout << "Star 1 x after motion: " << star1.m_location[0] << std::endl;

    return 0;
}