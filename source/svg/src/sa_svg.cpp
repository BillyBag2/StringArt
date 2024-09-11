#include <iostream>
#include <fstream>
#include <vector>

struct Point {
    double x, y;
};

// Function to create the SVG file
void createSVG(const std::string& filename, const std::vector<Point>& points, int width, int height) {
    std::ofstream svgFile;
    svgFile.open(filename);

    // SVG file header
    svgFile << "<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"" << width << "\" height=\"" << height << "\">\n";

    // Draw each point as a circle
    for (const auto& point : points) {
        svgFile << "  <circle cx=\"" << point.x << "\" cy=\"" << point.y << "\" r=\"5\" fill=\"blue\" />\n";
    }

    // SVG file footer
    svgFile << "</svg>\n";

    svgFile.close();
}

int main() {
    // List of coordinates (example)
    std::vector<Point> points = {{50, 50}, {150, 100}, {200, 200}, {300, 150}, {400, 300}};
    
    // Create the SVG file
    createSVG("output.svg", points, 500, 500);

    std::cout << "SVG file 'output.svg' created.\n";
    return 0;
}
