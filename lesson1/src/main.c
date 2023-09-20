#include <stdio.h>
#include <stdlib.h>
#include "data.h"

int main(void)
{
    int ret = 0 ;
    
    printf("main start.\r\n");

    ret = outputA();
    if (ret != 0) {
        printf("outputA failed! (ret=%d)\r\n", ret);
    }
    //system("pause");
    return 0;
}