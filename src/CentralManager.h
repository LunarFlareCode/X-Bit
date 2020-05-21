#ifndef CENTRALMANAGER_H_
#define CENTRALMANAGER_H_
class Context;
class CentralManager {
public:
CentralManager();
bool Update();
void NewLevel();
protected:
Context* context;
int i = 3;
};

#endif /* CENTRALMANAGER_H_ */
