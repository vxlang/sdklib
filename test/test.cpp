#include <stdio.h>

#define USE_VL_MACRO
#include "vxlib.h"
#include "vxlib_signature.h"

//

#ifdef _WIN64
#pragma comment(lib, "vxlib64.lib")
#else
#pragma comment(lib, "vxlib32.lib")
#endif

//

void signature() { 
    // use signature mode

    VL_CODE_FLATTENING_SIG_BEGIN;

    printf("signature \n");

    VL_CODE_FLATTENING_SIG_END;

    return;
}

//

void test() {
    VL_CODE_FLATTENING_BEGIN;

    printf("cff ! \n");

    VL_CODE_FLATTENING_END;

    return;
}

int main() {

    VL_VIRTUALIZATION_BEGIN;

    test();
    printf("virtualization \n");

    VL_VIRTUALIZATION_END;

    return 1;
}

