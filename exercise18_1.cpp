#include<iostream>
using namespace std;

struct Rect {
      double x,y,w,h;
};

Rect merge(Rect &a,Rect &b) {
    //Write definition of merge() here.
    Rect merge;
    merge.x = min(a.x,b.x);
    merge.y = max(a.y,b.y);
    merge.w = max(a.x+a.w,b.x+b.w) - merge.x;
    merge.h = merge.y - min(a.y-a.h,b.y-b.h);
    return merge;
};

int main() {
    Rect R1,R2,R3;
    cout << "Please input Rect 1 (x y w h): "; cin >> R1.x >> R1.y >> R1.w >> R1.h;
    cout << "Please input Rect 2 (x y w h): "; cin >> R2.x >> R2.y >> R2.w >> R2.h;
    R3 = merge(R1,R2);
    cout << "Merged Rect = ";
    cout << R3.x << " " << R3.y << " " << R3.w << " " << R3.h << " ";

    return 0;
}