#include "func.h"
#include "add.h"

float pi=3.14;
int lastSquarePerimeter=0;

int SquarePerimeter(int length, int width)
{
    int result;
    result=add(length,width);
    result*=2;
    lastSquarePerimeter=result;
    return result;
}


int Circumference(int radius)
{
    float result;
    result=2*pi*radius;
    return result;
}