// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct _MULTI_BLOCK
    {
        int m_nBlockNum;
        struct CRecordData *m_ptbMonBlock;
        struct _mon_active **m_ppMonAct;
    public:
        _MULTI_BLOCK();
        void ctor__MULTI_BLOCK();
        ~_MULTI_BLOCK();
        void dtor__MULTI_BLOCK();
    };
END_ATF_NAMESPACE
