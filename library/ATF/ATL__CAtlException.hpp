// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <HRESULT.hpp>


START_ATF_NAMESPACE
    namespace ATL
    {
        struct CAtlException
        {
            HRESULT m_hr;
        public:
            CAtlException(HRESULT hr);
            void ctor_CAtlException(HRESULT hr);
        };    
        static_assert(ATF::checkSize<ATL::CAtlException, 4>(), "ATL::CAtlException");
    }; // end namespace ATL
END_ATF_NAMESPACE
