mkdir -p build
cd build
cmake -DCMAKE_BUILD_TYPE=Release ../source
make VERBOSE=1

