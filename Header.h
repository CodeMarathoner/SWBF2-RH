#include <Windows.h>
// Created with ReClass.NET by KN4CK3R

class SoldierCustomizatoinKitAsset
{
public:
	char pad_0000[24]; //0x0000
	char* PlayerName; //0x0018
	char pad_0020[72]; //0x0020
	DWORD64 SwapPtr; //0x0068
	char pad_0070[24]; //0x0070
}; //Size: 0x0088

class SoldierClasses
{
public:
	class SoldierCustomizatoinKitAsset* Assault; //0x0000
	class SoldierCustomizatoinKitAsset* Heavy; //0x0008
	class SoldierCustomizatoinKitAsset* Officer; //0x0010
	class SoldierCustomizatoinKitAsset* Specialist; //0x0018
	char pad_0020[40]; //0x0020
}; //Size: 0x0048

class Soldiers
{
public:
	char pad_0000[32]; //0x0000
	class SoldierClasses* SoldierClasses; //0x0020
	char pad_0028[32]; //0x0028
}; //Size: 0x0048

class Heroes
{
public:
	char pad_0000[64]; //0x0000
	class SoldierCustomizatoinKitAsset* HeroArray[8]; //0x0040
	char pad_0080[384]; //0x0080
}; //Size: 0x0200

class Reinforcements
{
public:
	char pad_0000[64]; //0x0000
	class SoldierCustomizatoinKitAsset* Aerial; //0x0040
	class SoldierCustomizatoinKitAsset* Enforcer; //0x0048
	char pad_0050[248]; //0x0050
}; //Size: 0x0148

class TeamData
{
public:
	char pad_0000[72]; //0x0000
	class Soldiers* Soldiers; //0x0048
	class Heroes* Heroes; //0x0050
	class Reinforcements* Reinforcements; //0x0058
	char pad_0060[232]; //0x0060
}; //Size: 0x0148

class TeamEntity
{
public:
	char pad_0000[40]; //0x0000
	class TeamData* TeamData; //0x0028
	char pad_0030[24]; //0x0030
}; //Size: 0x0048

class Teams
{
public:
	char pad_0000[16]; //0x0000
	class TeamEntity* TeamLight; //0x0010
	class TeamEntity* TeamDark; //0x0018
	char pad_0020[104]; //0x0020
}; //Size: 0x0088

class Level
{
public:
	char pad_0000[40]; //0x0000
	class Teams* Teams; //0x0028
	char pad_0030[1048]; //0x0030
}; //Size: 0x0448

class ClientGameContext
{
public:
	char pad_0000[56]; //0x0000
	class Level* Level; //0x0038
	char pad_0040[8]; //0x0040
}; //Size: 0x0048

class staticgamecontext
{
public:
	class ClientGameContext* ClientGameContext; //0x0000
	char pad_0008[56]; //0x0008
}; //Size: 0x0040