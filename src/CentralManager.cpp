#include "CentralManager.h"
#include "GameContext.h"
#include "Context.h"

CentralManager::CentralManager() {
	context = new Context();
}

bool CentralManager::Update() {
	context->Update();
	//TODO: Actually stop in a reasonable way
	i--;
	return i>0;
}

void CentralManager::NewLevel() {
	context->Close();
	delete context;
	context = new GameContext();
	context->Open();
}
