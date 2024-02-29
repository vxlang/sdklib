#pragma once

#ifdef USE_VL_MACRO
extern "C"
void VxVirtualizationBegin();
extern "C"
void VxVirtualizationEnd();

extern "C"
void VxObfuscationBegin();
extern "C"
void VxObfuscationEnd();

extern "C"
void VxCodeFlatteningBegin();
extern "C"
void VxCodeFlatteningEnd();

//

extern "C"
void VxCodeFlatteningLv1Begin();
extern "C"
void VxCodeFlatteningLv1End();

extern "C"
void VxCodeFlatteningLv2Begin();
extern "C"
void VxCodeFlatteningLv2End();

extern "C"
void VxCodeFlatteningLv3Begin();
extern "C"
void VxCodeFlatteningLv3End();

//

#define VL_OBFUSCATION_BEGIN               VxObfuscationBegin()
#define VL_OBFUSCATION_END                 VxObfuscationEnd()

#define VL_CODE_FLATTENING_BEGIN           VxCodeFlatteningBegin()
#define VL_CODE_FLATTENING_END             VxCodeFlatteningEnd()

#define VL_VIRTUALIZATION_BEGIN            VxVirtualizationBegin()
#define VL_VIRTUALIZATION_END              VxVirtualizationEnd()

//

#define VL_CODE_FLATTENING_LV_BEGIN(lv)     VxCodeFlatteningLv##lv##Begin()
#define VL_CODE_FLATTENING_LV_END(lv)       VxCodeFlatteningLv##lv##End()

//

#else
#define VL_OBFUSCATION_BEGIN            
#define VL_OBFUSCATION_END              

#define VL_CODE_FLATTENING_BEGIN        
#define VL_CODE_FLATTENING_END          

#define VL_VIRTUALIZATION_BEGIN         
#define VL_VIRTUALIZATION_END           

//

#define VL_CODE_FLATTENING_LV_BEGIN(lv) 
#define VL_CODE_FLATTENING_LV_END(lv)   
#endif
