// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>


START_ATF_NAMESPACE
    struct _object_id
    {
        char m_byKind;
        char m_byID;
        unsigned __int16 m_wIndex;
    public:
        _object_id(char byKind, char byID, uint16_t wIndex);
        void ctor__object_id(char byKind, char byID, uint16_t wIndex);
        _object_id();
        void ctor__object_id();
    };    
    static_assert(ATF::checkSize<_object_id, 4>(), "_object_id");
END_ATF_NAMESPACE
