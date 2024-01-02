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
    VL_CODE_FLATTENING_SIG_LV1_BEGIN;

    printf("SIG: Lv.1 ! \n");

    VL_CODE_FLATTENING_SIG_LV1_END;

    //

    VL_CODE_FLATTENING_SIG_LV2_BEGIN;

    printf("SIG: Lv.2 ! \n");

    VL_CODE_FLATTENING_SIG_LV2_END;

    //

    VL_CODE_FLATTENING_SIG_LV3_BEGIN;

    printf("SIG: Lv.3 ! \n");

    VL_CODE_FLATTENING_SIG_LV3_END;

    return;
}

//

void TestMutate() {
    VL_MUTATE_BEGIN;

    printf("Mutate ! \n");

    VL_MUTATE_END;

    return;
}


//

int main() {

    //signature();
    TestMutate();

    //

    VL_CODE_FLATTENING_LV_BEGIN(1);

    printf("Lv.1 ! \n");

    VL_CODE_FLATTENING_LV_END(1);

    //

    VL_CODE_FLATTENING_LV_BEGIN(2);

    printf("Lv.2 ! \n");

    VL_CODE_FLATTENING_LV_END(2);

    //

    VL_CODE_FLATTENING_LV_BEGIN(3);

    printf("Lv.3 ! \n");

    VL_CODE_FLATTENING_LV_END(3);

    return 1;
}

