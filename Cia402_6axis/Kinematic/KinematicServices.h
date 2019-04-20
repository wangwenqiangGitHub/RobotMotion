///////////////////////////////////////////////////////////////////////////////
// KinematicServices.h

#pragma once

#include "TcServices.h"

const ULONG DrvID_Kinematic = 0x3F000000;
#define SRVNAME_KINEMATIC "Kinematic"

///<AutoGeneratedContent id="ClassIDs">
const CTCID CID_KinematicCKineModule = {0xc639523d,0x3d34,0x4d57,{0xb4,0x93,0xe0,0x71,0x72,0x64,0x0b,0x62}};
///</AutoGeneratedContent>

///<AutoGeneratedContent id="ParameterIDs">
const PTCID PID_KineModuleParameter = 0x00000001;
///</AutoGeneratedContent>

///<AutoGeneratedContent id="DataTypes">
typedef struct _KineModuleParameter
{
	ULONG data1;
	ULONG data2;
	double data3;
} KineModuleParameter, *PKineModuleParameter;

#pragma pack(push,1)
typedef struct _KineModuleInputs
{
	double InPos[6];
	bool PosRun;
} KineModuleInputs, *PKineModuleInputs;
#pragma pack(pop)

typedef struct _KineModuleOutputs
{
	double OutPos[3];
	double OutAngle[6];
} KineModuleOutputs, *PKineModuleOutputs;

///</AutoGeneratedContent>



///<AutoGeneratedContent id="DataAreaIDs">
#define ADI_KineModuleInputs 0
#define ADI_KineModuleOutputs 1
///</AutoGeneratedContent>

///<AutoGeneratedContent id="InterfaceIDs">
///</AutoGeneratedContent>
