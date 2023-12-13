#include <iostream>
#include <cmath>

enum class Region { First=1, Second, Third, Fourth, Fifth, Sixth, Seventh, Eight, Invalid };

struct Point {
    float x, y, z;

    Point(float x, float y, float z) : x(x), y(y), z(z) {}

    float zero_distance() const {
        return std::sqrt(x * x + y * y + z * z);
    }

    static float distance(const Point& p1, const Point& p2) {
        float dx = p2.x - p1.x;
        float dy = p2.y - p1.y;
        float dz = p2.z - p1.z;
        return std::sqrt(dx * dx + dy * dy + dz * dz);
    }

    static Point compare(const Point& p1, const Point& p2) {
        if(p1.zero_distance() == p2.zero_distance()){
            std::cout<<"Points have same zero distance!"<<std::endl;
            return p1;
        }
        return (p1.zero_distance() > p2.zero_distance()) ? p1 : p2;
    }

    Region region() const {
        if (x > 0 && y > 0 && z > 0) {
            return Region::First;
        } else if (x < 0 && y > 0 && z > 0) {
            return Region::Second;
        } else if (x < 0 && y < 0 && z > 0) {
            return Region::Third;
        } else if (x > 0 && y < 0 && z > 0) {
            return Region::Fourth;
        } else if (x > 0 && y > 0 && z < 0) {
            return Region::Fifth;
        }else if (x < 0 && y > 0 && z < 0) {
            return Region::Sixth;
        }else if (x < 0 && y < 0 && z < 0) {
            return Region::Seventh;
        } 
        else if (x > 0 && y < 0 && z < 0){
            return Region::Eight;
        }
        else{
            return Region::Invalid;
        }
    }

    static bool is_in_same_region(const Point& p1, const Point& p2) {
        return p1.region() == p2.region();
    }
};

int main() {
    Point p1(1.0, 2.0, 3.0);
    Point p2(-1.0, -2.0, 3.0);

    std::cout << "Distance to (0, 0, 0) for p1: " << p1.zero_distance() << std::endl;
    std::cout << "Distance to (0, 0, 0) for p2: " << p2.zero_distance() << std::endl;

    std::cout << "Distance between p1 and p2: " << Point::distance(p1, p2) << std::endl;

    Point further = Point::compare(p1, p2);
    std::cout << "The Point further from the origin is at (" << further.x << ", " << further.y << ", " << further.z << ")" << std::endl;

    std::cout << "Region of p1: " << static_cast<int>(p1.region()) << std::endl;
    std::cout << "Region of p2: " << static_cast<int>(p2.region()) << std::endl;

    if (Point::is_in_same_region(p1, p2)) {
        std::cout << "Both Points are in the same region." << std::endl;
    } else {
        std::cout << "Points are not in the same region." << std::endl;
    }

    return 0;
}
