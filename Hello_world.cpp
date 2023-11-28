#include <iostream>

#define HELLO_WORLD "hello world!" 
#define HelloWorld greet 
#define Hello_World +1 
#define world malloc 
#define HELLO sizeof 
#define WORLD strlen 
#define WORLD_HELLO strcpy 
#define world_hello return 
typedef char* hello_world;


hello_world HelloWorld() {
    hello_world hello_world;
    hello_world = reinterpret_cast<char*>(world(HELLO(*hello_world) * WORLD(HELLO_WORLD) Hello_World));
    WORLD_HELLO(hello_world, HELLO_WORLD);
    world_hello hello_world;
}

int main() {
    std::cout << HelloWorld();
}