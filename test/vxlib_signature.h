#pragma once

#if defined(_MSC_VER) && !defined(__clang__)
#include <intrin.h>
//
#define VL_VIRTUALIZATION_SIG_BEGIN            __nop(); __nop(); _enable(); __nop(); __halt();
#define VL_VIRTUALIZATION_SIG_END              __nop(); __nop(); _disable(); __nop(); __halt();

#define VL_CODE_FLATTENING_SIG_BEGIN            _enable(); _enable(); _enable(); __nop(); __halt();
#define VL_CODE_FLATTENING_SIG_END              _disable(); _disable(); _disable(); __nop(); __halt();

#define VL_CODE_FLATTENING_SIG_LV1_BEGIN            _enable(); __debugbreak(); __nop(); __nop(); _enable();__halt();
#define VL_CODE_FLATTENING_SIG_LV1_END              _disable(); __debugbreak(); __nop(); __nop(); _disable(); __halt();

#define VL_CODE_FLATTENING_SIG_LV2_BEGIN            _enable(); __nop(); __debugbreak(); __nop(); _enable();__halt();
#define VL_CODE_FLATTENING_SIG_LV2_END              _disable(); __nop(); __debugbreak(); __nop(); _disable(); __halt();

#define VL_CODE_FLATTENING_SIG_LV3_BEGIN            _enable(); __nop(); __nop(); __debugbreak(); _enable();__halt();
#define VL_CODE_FLATTENING_SIG_LV3_END              _disable(); __nop(); __nop(); __debugbreak(); _disable(); __halt();

//
#elif defined(__clang__)

#define VL_VIRTUALIZATION_SIG_BEGIN    \
__asm__(                               \
   "nop \n"                            \
   "nop \n"                            \
   "sti \n"                            \
   "nop \n"                            \
   "hlt \n"                            \
)                                      

#define VL_VIRTUALIZATION_SIG_END      \
__asm__(                               \
   "nop \n"                            \
   "nop \n"                            \
   "cli \n"                            \
   "nop \n"                            \
   "hlt \n"                            \
)

//

#define VL_CODE_FLATTENING_SIG_BEGIN   \
__asm__(                               \
   "sti \n"                            \
   "sti \n"                            \
   "sti \n"                            \
   "nop \n"                            \
   "hlt \n"                            \
)

#define VL_CODE_FLATTENING_SIG_END     \
__asm__(                               \
   "cli \n"                            \
   "cli \n"                            \
   "cli \n"                            \
   "nop \n"                            \
   "hlt \n"                            \
);

//

#define VL_CODE_FLATTENING_SIG_LV1_BEGIN   \
__asm__(                                   \
   "sti \n"                                \
   "int3 \n"                               \
   "nop \n"                                \
   "nop \n"                                \
   "sti \n"                                \
   "hlt \n"                                \
)

#define VL_CODE_FLATTENING_SIG_LV1_END     \
__asm__(                                   \
   "cli \n"                                \
   "int3 \n"                               \
   "nop \n"                                \
   "nop \n"                                \
   "cli \n"                                \
   "hlt \n"                                \
);

//

#define VL_CODE_FLATTENING_SIG_LV2_BEGIN   \
__asm__(                                   \
   "sti \n"                                \
   "nop \n"                                \
   "int3 \n"                               \
   "nop \n"                                \
   "sti \n"                                \
   "hlt \n"                                \
)

#define VL_CODE_FLATTENING_SIG_LV2_END     \
__asm__(                                   \
   "cli \n"                                \
   "nop \n"                                \
   "int3 \n"                               \
   "nop \n"                                \
   "cli \n"                                \
   "hlt \n"                                \
);

//

#define VL_CODE_FLATTENING_SIG_LV3_BEGIN   \
__asm__(                                   \
   "sti \n"                                \
   "nop \n"                                \
   "nop \n"                                \
   "int3 \n"                               \
   "sti \n"                                \
   "hlt \n"                                \
)

#define VL_CODE_FLATTENING_SIG_LV3_END     \
__asm__(                                   \
   "cli \n"                                \
   "nop \n"                                \
   "nop \n"                                \
   "int3 \n"                               \
   "cli \n"                                \
   "hlt \n"                                \
);
#endif
