// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include <common/common.h>
#include <CCharacter.hpp>
#include <CPlayer.hpp>
#include <CUnmannedTraderSchedule.hpp>


START_ATF_NAMESPACE
    #pragma pack(push, 8)
    struct CRecallRequest
    {
        typedef CUnmannedTraderSchedule::STATE STATE;
        unsigned __int16 m_usID;
        STATE m_eState;
        CPlayer *m_pkOwner;
        unsigned int m_dwOwnerSerial;
        CPlayer *m_pkDest;
        unsigned int m_dwDestSerial;
        unsigned int m_dwCloseTime;
        bool m_bRecallParty;
        bool m_bStone;
        bool m_bBattleModeUse;
    public:
        CRecallRequest(uint16_t usID);
        void ctor_CRecallRequest(uint16_t usID);
        void Clear();
        void Close(bool bDone);
        uint16_t GetID();
        struct CPlayer* GetOwner();
        bool IsBattleModeUse();
        bool IsClose();
        bool IsRecallAfterStoneState();
        bool IsRecallParty();
        bool IsTimeOut();
        bool IsWait();
        char Recall(struct CPlayer* pkDest, bool bStone);
        char Regist(struct CPlayer* pkObj, struct CCharacter* pkDest, bool bRecallParty, bool bStone, bool bBattleModeUse);
        ~CRecallRequest();
        void dtor_CRecallRequest();
    };
    #pragma pack(pop)
END_ATF_NAMESPACE
