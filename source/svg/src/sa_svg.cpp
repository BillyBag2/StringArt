#include <iostream>
#include <fstream>
#include <vector>

typedef double coord_t;  // coordinate type

struct Point {
    coord_t x, y;
};

// Function to create the SVG file
void createSVG(const std::string& filename, const std::vector<Point>& points, int width, int height) {
    std::ofstream svgFile;
    svgFile.open(filename);

    // SVG file header
    svgFile << "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"" << width << "\" height=\"" << height << "\">\n";

    // Draw each point as a circle
    for (const auto& point : points) {
        svgFile << "  <circle cx=\"" << point.x << "\" cy=\"" << point.y << "\" r=\"1\" fill=\"blue\" />\n";
    }

    // SVG file footer
    svgFile << "</svg>\n";

    svgFile.close();
}

void readPoints(std::vector<Point>& points) {
    // read points from stdin.
    while(true) {
        Point p;
        std::cin >> p.x >> p.y;
        if (std::cin.fail()) {
            break;
        }
        points.push_back(p);
    }
}
int main(int argc, char* argv[]) {
    // List of coordinates (example)
    std::vector<Point> points;
    readPoints(points);

    coord_t maxX = points[0].x;
    coord_t maxY = points[0].y;

    // Find the maximum x and y coordinates
    for (const auto& point : points) {
        if (point.x > maxX) {
            maxX = point.x;
        }
        if (point.y > maxY) {
            maxY = point.y;
        }
    }
    
    coord_t width = maxX;
    coord_t height = maxY;
    // Create the SVG file
    createSVG("output.svg", points, width, height);

    std::cout << "SVG file 'output.svg' created.\n";
    return 0;
}
