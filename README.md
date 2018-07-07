# Webassembly is really cool!

Exposes the STL implementation of the [Mersenne Twister](https://en.wikipedia.org/wiki/Mersenne_Twister) to JS via WebAssembly and displays the result in the browser.

`emcc --bind -o twist_test.js twister.cpp`