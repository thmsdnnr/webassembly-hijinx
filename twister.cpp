#include <random>
#include <emscripten/bind.h>
using namespace emscripten;

std::random_device rd;
std::mt19937 gen(rd());

int nextRandom() {
    return gen();
}

int main(int argc, char** argv) {
    return 0;
}

EMSCRIPTEN_BINDINGS(my_module) {
    function("nextRandom", &nextRandom);
}
