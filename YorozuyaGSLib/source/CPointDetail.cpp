#include <CPointDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        
        Info::CPointctor_CPoint1_ptr CPointctor_CPoint1_next(nullptr);
        Info::CPointctor_CPoint1_clbk CPointctor_CPoint1_user(nullptr);
        
        
        Info::CPointctor_CPoint2_ptr CPointctor_CPoint2_next(nullptr);
        Info::CPointctor_CPoint2_clbk CPointctor_CPoint2_user(nullptr);
        
        
        Info::CPointctor_CPoint3_ptr CPointctor_CPoint3_next(nullptr);
        Info::CPointctor_CPoint3_clbk CPointctor_CPoint3_user(nullptr);
        
        
        Info::CPointctor_CPoint4_ptr CPointctor_CPoint4_next(nullptr);
        Info::CPointctor_CPoint4_clbk CPointctor_CPoint4_user(nullptr);
        
        
        Info::CPointctor_CPoint5_ptr CPointctor_CPoint5_next(nullptr);
        Info::CPointctor_CPoint5_clbk CPointctor_CPoint5_user(nullptr);
        
        Info::CPointOffset6_ptr CPointOffset6_next(nullptr);
        Info::CPointOffset6_clbk CPointOffset6_user(nullptr);
        
        Info::CPointOffset7_ptr CPointOffset7_next(nullptr);
        Info::CPointOffset7_clbk CPointOffset7_user(nullptr);
        
        Info::CPointOffset8_ptr CPointOffset8_next(nullptr);
        Info::CPointOffset8_clbk CPointOffset8_user(nullptr);
        
        Info::CPointSetPoint9_ptr CPointSetPoint9_next(nullptr);
        Info::CPointSetPoint9_clbk CPointSetPoint9_user(nullptr);
        
        
        void CPointctor_CPoint1_wrapper(struct CPoint* _this, int64_t dwPoint)
        {
           CPointctor_CPoint1_user(_this, dwPoint, CPointctor_CPoint1_next);
        };
        
        void CPointctor_CPoint2_wrapper(struct CPoint* _this, int initX, int initY)
        {
           CPointctor_CPoint2_user(_this, initX, initY, CPointctor_CPoint2_next);
        };
        
        void CPointctor_CPoint3_wrapper(struct CPoint* _this, struct tagPOINT initPt)
        {
           CPointctor_CPoint3_user(_this, initPt, CPointctor_CPoint3_next);
        };
        
        void CPointctor_CPoint4_wrapper(struct CPoint* _this, struct tagSIZE initSize)
        {
           CPointctor_CPoint4_user(_this, initSize, CPointctor_CPoint4_next);
        };
        
        void CPointctor_CPoint5_wrapper(struct CPoint* _this)
        {
           CPointctor_CPoint5_user(_this, CPointctor_CPoint5_next);
        };
        void CPointOffset6_wrapper(struct CPoint* _this, int xOffset, int yOffset)
        {
           CPointOffset6_user(_this, xOffset, yOffset, CPointOffset6_next);
        };
        void CPointOffset7_wrapper(struct CPoint* _this, struct tagPOINT point)
        {
           CPointOffset7_user(_this, point, CPointOffset7_next);
        };
        void CPointOffset8_wrapper(struct CPoint* _this, struct tagSIZE size)
        {
           CPointOffset8_user(_this, size, CPointOffset8_next);
        };
        void CPointSetPoint9_wrapper(struct CPoint* _this, int X, int Y)
        {
           CPointSetPoint9_user(_this, X, Y, CPointSetPoint9_next);
        };
        
        ::std::array<hook_record, 9> CPoint_functions = 
        {
            _hook_record {
                (LPVOID)0x140670b20L,
                (LPVOID *)&CPointctor_CPoint1_user,
                (LPVOID *)&CPointctor_CPoint1_next,
                (LPVOID)cast_pointer_function(CPointctor_CPoint1_wrapper),
                (LPVOID)cast_pointer_function((void(CPoint::*)(int64_t))&CPoint::ctor_CPoint)
            },
            _hook_record {
                (LPVOID)0x140670a80L,
                (LPVOID *)&CPointctor_CPoint2_user,
                (LPVOID *)&CPointctor_CPoint2_next,
                (LPVOID)cast_pointer_function(CPointctor_CPoint2_wrapper),
                (LPVOID)cast_pointer_function((void(CPoint::*)(int, int))&CPoint::ctor_CPoint)
            },
            _hook_record {
                (LPVOID)0x140670ac0L,
                (LPVOID *)&CPointctor_CPoint3_user,
                (LPVOID *)&CPointctor_CPoint3_next,
                (LPVOID)cast_pointer_function(CPointctor_CPoint3_wrapper),
                (LPVOID)cast_pointer_function((void(CPoint::*)(struct tagPOINT))&CPoint::ctor_CPoint)
            },
            _hook_record {
                (LPVOID)0x140670af0L,
                (LPVOID *)&CPointctor_CPoint4_user,
                (LPVOID *)&CPointctor_CPoint4_next,
                (LPVOID)cast_pointer_function(CPointctor_CPoint4_wrapper),
                (LPVOID)cast_pointer_function((void(CPoint::*)(struct tagSIZE))&CPoint::ctor_CPoint)
            },
            _hook_record {
                (LPVOID)0x140670a60L,
                (LPVOID *)&CPointctor_CPoint5_user,
                (LPVOID *)&CPointctor_CPoint5_next,
                (LPVOID)cast_pointer_function(CPointctor_CPoint5_wrapper),
                (LPVOID)cast_pointer_function((void(CPoint::*)())&CPoint::ctor_CPoint)
            },
            _hook_record {
                (LPVOID)0x140670b60L,
                (LPVOID *)&CPointOffset6_user,
                (LPVOID *)&CPointOffset6_next,
                (LPVOID)cast_pointer_function(CPointOffset6_wrapper),
                (LPVOID)cast_pointer_function((void(CPoint::*)(int, int))&CPoint::Offset)
            },
            _hook_record {
                (LPVOID)0x140670ba0L,
                (LPVOID *)&CPointOffset7_user,
                (LPVOID *)&CPointOffset7_next,
                (LPVOID)cast_pointer_function(CPointOffset7_wrapper),
                (LPVOID)cast_pointer_function((void(CPoint::*)(struct tagPOINT))&CPoint::Offset)
            },
            _hook_record {
                (LPVOID)0x140670be0L,
                (LPVOID *)&CPointOffset8_user,
                (LPVOID *)&CPointOffset8_next,
                (LPVOID)cast_pointer_function(CPointOffset8_wrapper),
                (LPVOID)cast_pointer_function((void(CPoint::*)(struct tagSIZE))&CPoint::Offset)
            },
            _hook_record {
                (LPVOID)0x140670c20L,
                (LPVOID *)&CPointSetPoint9_user,
                (LPVOID *)&CPointSetPoint9_next,
                (LPVOID)cast_pointer_function(CPointSetPoint9_wrapper),
                (LPVOID)cast_pointer_function((void(CPoint::*)(int, int))&CPoint::SetPoint)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
