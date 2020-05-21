#include "CentralManager.h"
int main (int argc, char* args[]) {
	CentralManager* manager = new CentralManager();
	manager->NewLevel();
	while (manager->Update()) {}
	return 0;
}
