#include <iostream>
using namespace std;

struct Box {
    int length, width, height;

    Box(int l, int w, int h) {
        length = l;
        width = w;
        height = h;
    }

    
    int volume() {
        return length * width * height;
    }
};

int main() {
   
    Box box1(3, 4, 5);

    cout << "Volume of the box: " << box1.volume() << endl;

    return 0;
}