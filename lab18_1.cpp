#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2){
    double sqx1 = R1.w + R1.x;
	double sqx2 = R2.w + R2.x;

	double sqy1 = R1.y - R1.h;
	double sqy2 = R2.y - R2.h;

	double side1, side2;
	side1 = min(sqx1, sqx2) - max(R1.x, R2.x);
	side2 = min(R1.y, R2.y) - max(sqy1, sqy2);
	if (side1 * side2 < 0) return 0;
	else return side1 * side2;


}