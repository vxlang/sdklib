#include <intrin.h>

//

extern "C"
void VxVirtualizationBegin() {
    return;
}

extern "C"
void VxVirtualizationEnd() {
    return;
}

//

extern "C"
void VxObfuscationBegin() {
    return;
}

extern "C"
void VxObfuscationEnd() {
    return;
}

//

extern "C"
void VxCodeFlatteningBegin() {
    return;
}

extern "C"
void VxCodeFlatteningEnd() {
    return;
}

// VxLang does not support it yet.

#if 0
void __stdcall VxMutateBegin() {
    return;
}

void __stdcall VxMutateEnd() {
    return;
}
#endif
