// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <RECV_DATA.hpp>
#include <std___Container_base.hpp>
#include <std___Ranit.hpp>
#include <std__deque.hpp>


START_ATF_NAMESPACE
    namespace std
    {
        template<>
        struct  _Deque_const_iterator<RECV_DATA,allocator<RECV_DATA>,0> : _Ranit<RECV_DATA,__int64,RECV_DATA const *,RECV_DATA const &>
        {
            deque<RECV_DATA,allocator<RECV_DATA> > *_Mycont;
            unsigned __int64 _Myoff;
        public:
            _Deque_const_iterator(struct _Deque_const_iterator<RECV_DATA,allocator<RECV_DATA>,0>* _Right)
            {
                using org_ptr = void (WINAPIV*)(struct _Deque_const_iterator<RECV_DATA,allocator<RECV_DATA>,0>*, struct _Deque_const_iterator<RECV_DATA,allocator<RECV_DATA>,0>*);
                (org_ptr(0x14031da90L))(this, _Right);
            };
            void ctor__Deque_const_iterator(struct _Deque_const_iterator<RECV_DATA,allocator<RECV_DATA>,0>* _Right)
            {
                using org_ptr = void (WINAPIV*)(struct _Deque_const_iterator<RECV_DATA,allocator<RECV_DATA>,0>*, struct _Deque_const_iterator<RECV_DATA,allocator<RECV_DATA>,0>*);
                (org_ptr(0x14031da90L))(this, _Right);
            };
            _Deque_const_iterator(uint64_t _Off, struct _Container_base* _Pdeque)
            {
                using org_ptr = void (WINAPIV*)(struct _Deque_const_iterator<RECV_DATA,allocator<RECV_DATA>,0>*, uint64_t, struct _Container_base*);
                (org_ptr(0x14031ea30L))(this, _Off, _Pdeque);
            };
            void ctor__Deque_const_iterator(uint64_t _Off, struct _Container_base* _Pdeque)
            {
                using org_ptr = void (WINAPIV*)(struct _Deque_const_iterator<RECV_DATA,allocator<RECV_DATA>,0>*, uint64_t, struct _Container_base*);
                (org_ptr(0x14031ea30L))(this, _Off, _Pdeque);
            };
            ~_Deque_const_iterator()
            {
                using org_ptr = void (WINAPIV*)(struct _Deque_const_iterator<RECV_DATA,allocator<RECV_DATA>,0>*);
                (org_ptr(0x14031d4c0L))(this);
            };
            void dtor__Deque_const_iterator()
            {
                using org_ptr = void (WINAPIV*)(struct _Deque_const_iterator<RECV_DATA,allocator<RECV_DATA>,0>*);
                (org_ptr(0x14031d4c0L))(this);
            };
        };    
        static_assert(ATF::checkSize<std::_Deque_const_iterator<RECV_DATA,std::allocator<RECV_DATA>,0>, 32>(), "std::_Deque_const_iterator<RECV_DATA,std::allocator<RECV_DATA>,0>");
    }; // end namespace std
END_ATF_NAMESPACE
