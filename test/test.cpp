#include <stdio.h>

void __stdcall VxVirtualizationBegin();
void __stdcall VxVirtualizationEnd();

void __stdcall VxObfuscationBegin();
void __stdcall VxObfuscationEnd();

void __stdcall VxCodeFlatteningBegin();
void __stdcall VxCodeFlatteningEnd();

void __stdcall VxCodeFlatteningType2Begin();
void __stdcall VxCodeFlatteningType2End();

//

#define VL_OBFUSCATION_BEGIN         VxObfuscationBegin()
#define VL_OBFUSCATION_END           VxObfuscationEnd()

#define VL_CODE_FLATTENING_BEGIN     VxCodeFlatteningBegin()
#define VL_CODE_FLATTENING_END       VxCodeFlatteningEnd()

#define VL_CODE_FLATTENING_TYPE2_BEGIN     VxCodeFlatteningType2Begin()
#define VL_CODE_FLATTENING_TYPE2_END       VxCodeFlatteningType2End()

#define VL_VIRTUALIZATION_BEGIN      VxVirtualizationBegin()
#define VL_VIRTUALIZATION_END        VxVirtualizationEnd()

//

#ifdef _WIN64
#pragma comment(lib, "vxlib64.lib")
#else
#pragma comment(lib, "vxlib32.lib")
#endif

//

int main() {
    VL_CODE_FLATTENING_BEGIN;

    printf("Hello, Wolrd ! \n");

    VL_CODE_FLATTENING_END;

    return 1;
}

