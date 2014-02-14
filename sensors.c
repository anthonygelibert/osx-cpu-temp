#include <stdlib.h>
#include <stdio.h>

#include "smc.h"

int main(void)
{
    SMCOpen();
    printf("temp: +%0.1f°C\n", SMCGetTemperature(SMC_KEY_CPU_TEMP));
    SMCClose();

    return EXIT_SUCCESS;
}
