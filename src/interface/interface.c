#include "interface.h"

int parameter1;

void Inf_Read_Parameter1(int * data)
{
    *data=parameter1;
}
void Inf_Write_Parameter1(int data)
{
    parameter1=data;
}