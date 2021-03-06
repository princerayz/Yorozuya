#include <CMonsterHelperDetail.hpp>
#include <common/ATFCore.hpp>


START_ATF_NAMESPACE
    namespace Detail
    {
        Info::CMonsterHelperCheckPreAttackRangeTargetAbleCharacter2_ptr CMonsterHelperCheckPreAttackRangeTargetAbleCharacter2_next(nullptr);
        Info::CMonsterHelperCheckPreAttackRangeTargetAbleCharacter2_clbk CMonsterHelperCheckPreAttackRangeTargetAbleCharacter2_user(nullptr);
        
        Info::CMonsterHelperGetAngle4_ptr CMonsterHelperGetAngle4_next(nullptr);
        Info::CMonsterHelperGetAngle4_clbk CMonsterHelperGetAngle4_user(nullptr);
        
        Info::CMonsterHelperGetDirection6_ptr CMonsterHelperGetDirection6_next(nullptr);
        Info::CMonsterHelperGetDirection6_clbk CMonsterHelperGetDirection6_user(nullptr);
        
        Info::CMonsterHelperHierarcyHelpCast8_ptr CMonsterHelperHierarcyHelpCast8_next(nullptr);
        Info::CMonsterHelperHierarcyHelpCast8_clbk CMonsterHelperHierarcyHelpCast8_user(nullptr);
        
        Info::CMonsterHelperIsInSector10_ptr CMonsterHelperIsInSector10_next(nullptr);
        Info::CMonsterHelperIsInSector10_clbk CMonsterHelperIsInSector10_user(nullptr);
        
        Info::CMonsterHelperSearchNearMonster12_ptr CMonsterHelperSearchNearMonster12_next(nullptr);
        Info::CMonsterHelperSearchNearMonster12_clbk CMonsterHelperSearchNearMonster12_user(nullptr);
        
        Info::CMonsterHelperSearchNearMonsterByDistance14_ptr CMonsterHelperSearchNearMonsterByDistance14_next(nullptr);
        Info::CMonsterHelperSearchNearMonsterByDistance14_clbk CMonsterHelperSearchNearMonsterByDistance14_user(nullptr);
        
        Info::CMonsterHelperSearchNearPlayer16_ptr CMonsterHelperSearchNearPlayer16_next(nullptr);
        Info::CMonsterHelperSearchNearPlayer16_clbk CMonsterHelperSearchNearPlayer16_user(nullptr);
        
        Info::CMonsterHelperSearchPatrolMovePos18_ptr CMonsterHelperSearchPatrolMovePos18_next(nullptr);
        Info::CMonsterHelperSearchPatrolMovePos18_clbk CMonsterHelperSearchPatrolMovePos18_user(nullptr);
        
        Info::CMonsterHelperSearchTargetMovePos_MovingTarget20_ptr CMonsterHelperSearchTargetMovePos_MovingTarget20_next(nullptr);
        Info::CMonsterHelperSearchTargetMovePos_MovingTarget20_clbk CMonsterHelperSearchTargetMovePos_MovingTarget20_user(nullptr);
        
        Info::CMonsterHelperSearchTargetMovePos_StopTarget22_ptr CMonsterHelperSearchTargetMovePos_StopTarget22_next(nullptr);
        Info::CMonsterHelperSearchTargetMovePos_StopTarget22_clbk CMonsterHelperSearchTargetMovePos_StopTarget22_user(nullptr);
        
        Info::CMonsterHelperTransPort24_ptr CMonsterHelperTransPort24_next(nullptr);
        Info::CMonsterHelperTransPort24_clbk CMonsterHelperTransPort24_user(nullptr);
        
        int CMonsterHelperCheckPreAttackRangeTargetAbleCharacter2_wrapper(struct CMonster* pMon, struct CGameObject* pTarget)
        {
           return CMonsterHelperCheckPreAttackRangeTargetAbleCharacter2_user(pMon, pTarget, CMonsterHelperCheckPreAttackRangeTargetAbleCharacter2_next);
        };
        float CMonsterHelperGetAngle4_wrapper(float* mon, float* plr)
        {
           return CMonsterHelperGetAngle4_user(mon, plr, CMonsterHelperGetAngle4_next);
        };
        void CMonsterHelperGetDirection6_wrapper(float** cur, float** tar, float** out, float deg)
        {
           CMonsterHelperGetDirection6_user(cur, tar, out, deg, CMonsterHelperGetDirection6_next);
        };
        void CMonsterHelperHierarcyHelpCast8_wrapper(struct CMonster* pMon)
        {
           CMonsterHelperHierarcyHelpCast8_user(pMon, CMonsterHelperHierarcyHelpCast8_next);
        };
        int CMonsterHelperIsInSector10_wrapper(float* chkpos, float* src, float* dest, float angle, float radius, float* pfDist)
        {
           return CMonsterHelperIsInSector10_user(chkpos, src, dest, angle, radius, pfDist, CMonsterHelperIsInSector10_next);
        };
        unsigned int CMonsterHelperSearchNearMonster12_wrapper(struct CMonster* pMon, struct _NEAR_DATA* NearChar, unsigned int dwArSize, int bTargetIgnore)
        {
           return CMonsterHelperSearchNearMonster12_user(pMon, NearChar, dwArSize, bTargetIgnore, CMonsterHelperSearchNearMonster12_next);
        };
        struct CMonster* CMonsterHelperSearchNearMonsterByDistance14_wrapper(struct CMonster* pMon, unsigned int dwDist)
        {
           return CMonsterHelperSearchNearMonsterByDistance14_user(pMon, dwDist, CMonsterHelperSearchNearMonsterByDistance14_next);
        };
        struct CPlayer* CMonsterHelperSearchNearPlayer16_wrapper(struct CMonster* pMon, int nType)
        {
           return CMonsterHelperSearchNearPlayer16_user(pMon, nType, CMonsterHelperSearchNearPlayer16_next);
        };
        int CMonsterHelperSearchPatrolMovePos18_wrapper(struct CMonster* mon, float** NewTar)
        {
           return CMonsterHelperSearchPatrolMovePos18_user(mon, NewTar, CMonsterHelperSearchPatrolMovePos18_next);
        };
        int CMonsterHelperSearchTargetMovePos_MovingTarget20_wrapper(struct CMonster* pMon, struct CCharacter* pTargetCharacter, float** tarPos)
        {
           return CMonsterHelperSearchTargetMovePos_MovingTarget20_user(pMon, pTargetCharacter, tarPos, CMonsterHelperSearchTargetMovePos_MovingTarget20_next);
        };
        int CMonsterHelperSearchTargetMovePos_StopTarget22_wrapper(struct CMonster* pMon, struct CCharacter* pTargetCharacter, float** tarPos)
        {
           return CMonsterHelperSearchTargetMovePos_StopTarget22_user(pMon, pTargetCharacter, tarPos, CMonsterHelperSearchTargetMovePos_StopTarget22_next);
        };
        void CMonsterHelperTransPort24_wrapper(struct CMonster* mon, float* tarPos)
        {
           CMonsterHelperTransPort24_user(mon, tarPos, CMonsterHelperTransPort24_next);
        };
        
        ::std::array<hook_record, 12> CMonsterHelper_functions = 
        {
            _hook_record {
                (LPVOID)0x140158430L,
                (LPVOID *)&CMonsterHelperCheckPreAttackRangeTargetAbleCharacter2_user,
                (LPVOID *)&CMonsterHelperCheckPreAttackRangeTargetAbleCharacter2_next,
                (LPVOID)cast_pointer_function(CMonsterHelperCheckPreAttackRangeTargetAbleCharacter2_wrapper),
                (LPVOID)cast_pointer_function((int(*)(struct CMonster*, struct CGameObject*))&CMonsterHelper::CheckPreAttackRangeTargetAbleCharacter)
            },
            _hook_record {
                (LPVOID)0x1401597a0L,
                (LPVOID *)&CMonsterHelperGetAngle4_user,
                (LPVOID *)&CMonsterHelperGetAngle4_next,
                (LPVOID)cast_pointer_function(CMonsterHelperGetAngle4_wrapper),
                (LPVOID)cast_pointer_function((float(*)(float*, float*))&CMonsterHelper::GetAngle)
            },
            _hook_record {
                (LPVOID)0x1401598e0L,
                (LPVOID *)&CMonsterHelperGetDirection6_user,
                (LPVOID *)&CMonsterHelperGetDirection6_next,
                (LPVOID)cast_pointer_function(CMonsterHelperGetDirection6_wrapper),
                (LPVOID)cast_pointer_function((void(*)(float**, float**, float**, float))&CMonsterHelper::GetDirection)
            },
            _hook_record {
                (LPVOID)0x14015a480L,
                (LPVOID *)&CMonsterHelperHierarcyHelpCast8_user,
                (LPVOID *)&CMonsterHelperHierarcyHelpCast8_next,
                (LPVOID)cast_pointer_function(CMonsterHelperHierarcyHelpCast8_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct CMonster*))&CMonsterHelper::HierarcyHelpCast)
            },
            _hook_record {
                (LPVOID)0x140158160L,
                (LPVOID *)&CMonsterHelperIsInSector10_user,
                (LPVOID *)&CMonsterHelperIsInSector10_next,
                (LPVOID)cast_pointer_function(CMonsterHelperIsInSector10_wrapper),
                (LPVOID)cast_pointer_function((int(*)(float*, float*, float*, float, float, float*))&CMonsterHelper::IsInSector)
            },
            _hook_record {
                (LPVOID)0x140158de0L,
                (LPVOID *)&CMonsterHelperSearchNearMonster12_user,
                (LPVOID *)&CMonsterHelperSearchNearMonster12_next,
                (LPVOID)cast_pointer_function(CMonsterHelperSearchNearMonster12_wrapper),
                (LPVOID)cast_pointer_function((unsigned int(*)(struct CMonster*, struct _NEAR_DATA*, unsigned int, int))&CMonsterHelper::SearchNearMonster)
            },
            _hook_record {
                (LPVOID)0x140159540L,
                (LPVOID *)&CMonsterHelperSearchNearMonsterByDistance14_user,
                (LPVOID *)&CMonsterHelperSearchNearMonsterByDistance14_next,
                (LPVOID)cast_pointer_function(CMonsterHelperSearchNearMonsterByDistance14_wrapper),
                (LPVOID)cast_pointer_function((struct CMonster*(*)(struct CMonster*, unsigned int))&CMonsterHelper::SearchNearMonsterByDistance)
            },
            _hook_record {
                (LPVOID)0x140158540L,
                (LPVOID *)&CMonsterHelperSearchNearPlayer16_user,
                (LPVOID *)&CMonsterHelperSearchNearPlayer16_next,
                (LPVOID)cast_pointer_function(CMonsterHelperSearchNearPlayer16_wrapper),
                (LPVOID)cast_pointer_function((struct CPlayer*(*)(struct CMonster*, int))&CMonsterHelper::SearchNearPlayer)
            },
            _hook_record {
                (LPVOID)0x140159f20L,
                (LPVOID *)&CMonsterHelperSearchPatrolMovePos18_user,
                (LPVOID *)&CMonsterHelperSearchPatrolMovePos18_next,
                (LPVOID)cast_pointer_function(CMonsterHelperSearchPatrolMovePos18_wrapper),
                (LPVOID)cast_pointer_function((int(*)(struct CMonster*, float**))&CMonsterHelper::SearchPatrolMovePos)
            },
            _hook_record {
                (LPVOID)0x140159e50L,
                (LPVOID *)&CMonsterHelperSearchTargetMovePos_MovingTarget20_user,
                (LPVOID *)&CMonsterHelperSearchTargetMovePos_MovingTarget20_next,
                (LPVOID)cast_pointer_function(CMonsterHelperSearchTargetMovePos_MovingTarget20_wrapper),
                (LPVOID)cast_pointer_function((int(*)(struct CMonster*, struct CCharacter*, float**))&CMonsterHelper::SearchTargetMovePos_MovingTarget)
            },
            _hook_record {
                (LPVOID)0x1401599b0L,
                (LPVOID *)&CMonsterHelperSearchTargetMovePos_StopTarget22_user,
                (LPVOID *)&CMonsterHelperSearchTargetMovePos_StopTarget22_next,
                (LPVOID)cast_pointer_function(CMonsterHelperSearchTargetMovePos_StopTarget22_wrapper),
                (LPVOID)cast_pointer_function((int(*)(struct CMonster*, struct CCharacter*, float**))&CMonsterHelper::SearchTargetMovePos_StopTarget)
            },
            _hook_record {
                (LPVOID)0x14015a310L,
                (LPVOID *)&CMonsterHelperTransPort24_user,
                (LPVOID *)&CMonsterHelperTransPort24_next,
                (LPVOID)cast_pointer_function(CMonsterHelperTransPort24_wrapper),
                (LPVOID)cast_pointer_function((void(*)(struct CMonster*, float*))&CMonsterHelper::TransPort)
            },
        };
    }; // end namespace Detail
END_ATF_NAMESPACE
