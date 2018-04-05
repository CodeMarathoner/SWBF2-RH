#include "Header.h"

DWORD WINAPI Looper(LPVOID lpParam) {
	for (;;) {
		Sleep(100);
		if (GetAsyncKeyState(VK_F7)) {
			staticgamecontext* pGC = (staticgamecontext*)(DWORD64*)(0x14428A188);
			DWORD64 Palpy = 
pGC->ClientGameContext->Level->Teams->TeamDark->TeamData->Heroes->HeroArray[3]->SwapPtr;

			pGC->ClientGameContext->Level->Teams->TeamLight->TeamData->Soldiers->SoldierClasses->Assault->SwapPtr = Palpy;
			pGC->ClientGameContext->Level->Teams->TeamLight->TeamData->Soldiers->SoldierClasses->Heavy->SwapPtr = Palpy;
			pGC->ClientGameContext->Level->Teams->TeamLight->TeamData->Soldiers->SoldierClasses->Officer->SwapPtr = Palpy;
			pGC->ClientGameContext->Level->Teams->TeamLight->TeamData->Soldiers->SoldierClasses->Specialist->SwapPtr = Palpy;

			pGC->ClientGameContext->Level->Teams->TeamDark->TeamData->Soldiers->SoldierClasses->Assault->SwapPtr = Palpy;
			pGC->ClientGameContext->Level->Teams->TeamDark->TeamData->Soldiers->SoldierClasses->Heavy->SwapPtr = Palpy;
			pGC->ClientGameContext->Level->Teams->TeamDark->TeamData->Soldiers->SoldierClasses->Officer->SwapPtr = Palpy;
			pGC->ClientGameContext->Level->Teams->TeamDark->TeamData->Soldiers->SoldierClasses->Specialist->SwapPtr = Palpy;
		}
	}

	return 1;
}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved) {
	if (fdwReason == DLL_PROCESS_ATTACH) {
		CreateThread(NULL, 0, &Looper, NULL, 0, NULL);
	}
	return (TRUE);
}
