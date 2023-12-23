//This file was generated by the LASAL2 CodeGenerator  -- 
//Please, do not edit this file (it might be overwritten by the next generator run)
typedef struct SvrCh_DINT 
  {
    CHMETH *pMeth;
    DINT dData;
    SVRDSC *pDsc;
  } SvrCh_DINT;

typedef struct CltCh_DINT 
  {
    struct SvrCh_DINT *pCh;
    DINT dData;
    SVRCHCMD *pCmd;
  } CltCh_DINT;

typedef struct SvrCh_FeSetup 
  {
    CHMETH *pMeth;
    FeSetup dData;
    SVRDSC *pDsc;
  } SvrCh_FeSetup;

typedef struct CltCh_FeSetup 
  {
    struct SvrCh_FeSetup *pCh;
    FeSetup dData;
    SVRCHCMD *pCmd;
  } CltCh_FeSetup;

typedef struct SvrCh_IO_State 
  {
    CHMETH *pMeth;
    IO_State dData;
    SVRDSC *pDsc;
  } SvrCh_IO_State;

typedef struct CltCh_IO_State 
  {
    struct SvrCh_IO_State *pCh;
    IO_State dData;
    SVRCHCMD *pCmd;
  } CltCh_IO_State;

typedef struct SvrCh_UDINT 
  {
    CHMETH *pMeth;
    UDINT dData;
    SVRDSC *pDsc;
  } SvrCh_UDINT;

typedef struct CltCh_UDINT 
  {
    struct SvrCh_UDINT *pCh;
    UDINT dData;
    SVRCHCMD *pCmd;
  } CltCh_UDINT;

typedef struct SvrChCmd_DINT 
  {
    CMDMETH *pMeth;
    DINT dData;
    SVRDSC *pDsc;
  } SvrChCmd_DINT;

typedef struct CltChCmd__Can 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    _Can *pCmd;
  } CltChCmd__Can;

typedef struct CltChCmd__CanLib 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    _CanLib *pCmd;
  } CltChCmd__CanLib;

typedef struct CltChCmd__FileSys 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    _FileSys *pCmd;
  } CltChCmd__FileSys;

typedef struct CltChCmd__MultiTask 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    _MultiTask *pCmd;
  } CltChCmd__MultiTask;

typedef struct CltChCmd__OSKernel 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    _OSKernel *pCmd;
  } CltChCmd__OSKernel;

typedef struct CltChCmd__SerLib 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    _SerLib *pCmd;
  } CltChCmd__SerLib;

typedef struct CltChCmd__StdLib 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    _StdLib *pCmd;
  } CltChCmd__StdLib;

typedef struct CltChCmd__TaskObjectControl 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    _TaskObjectControl *pCmd;
  } CltChCmd__TaskObjectControl;

typedef struct CltChCmd_ASCII_BIN 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    ASCII_BIN *pCmd;
  } CltChCmd_ASCII_BIN;

typedef struct SvrChCmd_UDINT 
  {
    CMDMETH *pMeth;
    UDINT dData;
    SVRDSC *pDsc;
  } SvrChCmd_UDINT;

typedef struct CltChCmd_CriticalSection 
  {
    struct SvrChCmd_UDINT *pCh;
    UDINT dData;
    CriticalSection *pCmd;
  } CltChCmd_CriticalSection;

typedef struct CltChCmd_DiasMaster 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    DiasMaster *pCmd;
  } CltChCmd_DiasMaster;

typedef struct CltChCmd_DiasMasterC 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    DiasMasterC *pCmd;
  } CltChCmd_DiasMasterC;

typedef struct CltChCmd_DiasMasterPostScan 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    DiasMasterPostScan *pCmd;
  } CltChCmd_DiasMasterPostScan;

typedef struct CltChCmd_DINT 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    SVRCHCMD *pCmd;
  } CltChCmd_DINT;

typedef struct CltChCmd_EEPROM 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    EEPROM *pCmd;
  } CltChCmd_EEPROM;

typedef struct CltChCmd_Hub_Base 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    Hub_Base *pCmd;
  } CltChCmd_Hub_Base;

typedef struct CltChCmd_Hub_Base_Root 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    Hub_Base_Root *pCmd;
  } CltChCmd_Hub_Base_Root;

typedef struct CltChCmd_HwcLogging 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    HwcLogging *pCmd;
  } CltChCmd_HwcLogging;

typedef struct CltChCmd_HwControl 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    HwControl *pCmd;
  } CltChCmd_HwControl;

typedef struct CltChCmd_HwControlBase 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    HwControlBase *pCmd;
  } CltChCmd_HwControlBase;

typedef struct CltChCmd_HWRtPostScan 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    HWRtPostScan *pCmd;
  } CltChCmd_HWRtPostScan;

typedef struct CltChCmd_I2CCDIAS 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    I2CCDIAS *pCmd;
  } CltChCmd_I2CCDIAS;

typedef struct CltChCmd_MerkerEx 
  {
    struct SvrChCmd_UDINT *pCh;
    UDINT dData;
    MerkerEx *pCmd;
  } CltChCmd_MerkerEx;

typedef struct CltChCmd_RamFile 
  {
    struct SvrChCmd_UDINT *pCh;
    UDINT dData;
    RamFile *pCmd;
  } CltChCmd_RamFile;

typedef struct CltChCmd_SafetyManager 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    SafetyManager *pCmd;
  } CltChCmd_SafetyManager;

typedef struct CltChCmd_SdiasHubBase 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    SdiasHubBase *pCmd;
  } CltChCmd_SdiasHubBase;

typedef struct SvrChCmd_t_e_VaranErrors 
  {
    CMDMETH *pMeth;
    t_e_VaranErrors dData;
    SVRDSC *pDsc;
  } SvrChCmd_t_e_VaranErrors;

typedef struct CltChCmd_SdiasManager 
  {
    struct SvrChCmd_t_e_VaranErrors *pCh;
    t_e_VaranErrors dData;
    SdiasManager *pCmd;
  } CltChCmd_SdiasManager;

typedef struct CltChCmd_SdiasSafetyManagerFSoE 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    SdiasSafetyManagerFSoE *pCmd;
  } CltChCmd_SdiasSafetyManagerFSoE;

typedef struct CltChCmd_SigCLib 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    SigCLib *pCmd;
  } CltChCmd_SigCLib;

typedef struct CltChCmd_String 
  {
    struct SvrChCmd_UDINT *pCh;
    UDINT dData;
    String *pCmd;
  } CltChCmd_String;

typedef struct SvrChCmd_IO_State 
  {
    CMDMETH *pMeth;
    IO_State dData;
    SVRDSC *pDsc;
  } SvrChCmd_IO_State;

typedef struct CltChCmd_SyncCall 
  {
    struct SvrChCmd_IO_State *pCh;
    IO_State dData;
    SyncCall *pCmd;
  } CltChCmd_SyncCall;

typedef struct CltChCmd_t_e_VaranErrors 
  {
    struct SvrChCmd_t_e_VaranErrors *pCh;
    t_e_VaranErrors dData;
    SVRCHCMD *pCmd;
  } CltChCmd_t_e_VaranErrors;

typedef struct CltChCmd_Varan_Base 
  {
    struct SvrChCmd_t_e_VaranErrors *pCh;
    t_e_VaranErrors dData;
    Varan_Base *pCmd;
  } CltChCmd_Varan_Base;

typedef struct CltChCmd_VaranManager_Base 
  {
    struct SvrChCmd_DINT *pCh;
    DINT dData;
    VaranManager_Base *pCmd;
  } CltChCmd_VaranManager_Base;

typedef struct CltChCmd_WatchdogDias 
  {
    struct SvrChCmd_IO_State *pCh;
    IO_State dData;
    WatchdogDias *pCmd;
  } CltChCmd_WatchdogDias;

typedef struct SvrCh__FSM_UDP_ERROR_PTofCls_SafetyUDP 
  {
    CHMETH *pMeth;
    _FSM_UDP_ERROR dData;
    SVRDSC *pDsc;
  } SvrCh__FSM_UDP_ERROR_PTofCls_SafetyUDP;

typedef struct SvrCh__FSM_UDP_USER_PTofCls_SafetyUDP 
  {
    CHMETH *pMeth;
    _FSM_UDP_USER dData;
    SVRDSC *pDsc;
  } SvrCh__FSM_UDP_USER_PTofCls_SafetyUDP;

typedef struct SvrCh__INITSTEPS_PTofCls_SafetyUDP 
  {
    CHMETH *pMeth;
    _INITSTEPS dData;
    SVRDSC *pDsc;
  } SvrCh__INITSTEPS_PTofCls_SafetyUDP;

typedef struct SvrCh_BDINT 
  {
    CHMETH *pMeth;
    BDINT dData;
    SVRDSC *pDsc;
  } SvrCh_BDINT;

typedef struct SvrCh_HDINT 
  {
    CHMETH *pMeth;
    HDINT dData;
    SVRDSC *pDsc;
  } SvrCh_HDINT;

typedef struct SvrCh_SafetyConfigStateType 
  {
    CHMETH *pMeth;
    SafetyConfigStateType dData;
    SVRDSC *pDsc;
  } SvrCh_SafetyConfigStateType;

typedef struct SvrCh_t_e_VaranErrors 
  {
    CHMETH *pMeth;
    t_e_VaranErrors dData;
    SVRDSC *pDsc;
  } SvrCh_t_e_VaranErrors;

typedef struct SvrChCmd_iprStates 
  {
    CMDMETH *pMeth;
    iprStates dData;
    SVRDSC *pDsc;
  } SvrChCmd_iprStates;
