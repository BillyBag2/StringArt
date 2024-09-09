// Create a random list of coordinates.
// The first two parameters are the width and height.
// the third parameter is the number of coordinates to generate.

#include <iostream>
#include <vector>
#include <random>

int main(int argc, char **argv) {
  if (argc != 4) {
    std::cerr << "Usage: " << argv[0] << " width height num_points\n";
    return 1;
  }

  int width = atoi(argv[1]);
  int height = atoi(argv[2]);
  int num_points = atoi(argv[3]);

  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis_x(0, width - 1);
  std::uniform_int_distribution<> dis_y(0, height - 1);

  std::vector<std::pair<int, int>> points;
  for (int i = 0; i < num_points; i++) {
    points.push_back(std::make_pair(dis_x(gen), dis_y(gen)));
  }

  for (auto p : points) {
    std::cout << p.first << " " << p.second << std::endl;
  }
}