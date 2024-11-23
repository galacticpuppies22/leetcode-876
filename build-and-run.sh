cmake -S . -B build
cmake --build build
echo "------------------------Running Tests------------------------"
./build/myexample
