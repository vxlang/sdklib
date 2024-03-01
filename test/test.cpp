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

void obfuscate_test() { 
    // use signature mode

    VL_OBFUSCATION_BEGIN;

    printf("signature \n");

    VL_OBFUSCATION_END;

    return;
}

//

void code_flattening_test() {
    VL_CODE_FLATTENING_BEGIN;

    printf("cff ! \n");

    VL_CODE_FLATTENING_END;

    return;
}

int main() {
    VL_VIRTUALIZATION_BEGIN;

    obfuscate_test();
    code_flattening_test();

    VL_VIRTUALIZATION_END;

    return 1;
}

