#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *d1, Rect *d2){
	double overlap_wide, overlap_high;
	overlap_wide = min(d1->x+d1->w, d2->x+d2->w) - max(d1->x, d2->x);
	overlap_high = min(d1->y, d2->y) - max(d1->y-d1->h, d2->y-d2->h);
	if(overlap_wide < 0 || overlap_high < 0) return 0;
	return overlap_wide * overlap_high;
}
