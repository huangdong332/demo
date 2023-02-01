#include "model2.h"
#include "interface.h"
#include <stdbool.h>

int Model2_Paramter1;
// bool i;
void Model2_SendOutput()
{
    Inf_Write_Parameter1(Model2_Paramter1);
}
