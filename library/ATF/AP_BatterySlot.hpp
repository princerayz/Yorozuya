// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <_STORAGE_LIST.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 1)
    struct  AP_BatterySlot
    {
        bool m_bFill;
        _STORAGE_LIST::_db_con battery_;
    public:
        AP_BatterySlot();
        void ctor_AP_BatterySlot();
        void clear();
        bool extract(struct _STORAGE_LIST::_db_con* pout_item);
        struct _STORAGE_LIST::_db_con* get_battery();
        unsigned int get_dur();
        int insert(struct _STORAGE_LIST::_db_con* pItem);
        bool is_private_item(struct _STORAGE_LIST::_db_con* pItem);
        unsigned int sub_dur(unsigned int dwSub);
        ~AP_BatterySlot();
        void dtor_AP_BatterySlot();
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
