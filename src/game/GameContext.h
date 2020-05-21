#ifndef GAMECONTEXT_H_
#define GAMECONTEXT_H_
#include <vector>
#include "LinkList.h"
#include "../Context.h"
class GameObject;
class GameContext : public Context {
public:
GameContext();
virtual void Open();
virtual void Update();
void AddObject(GameObject* object);
protected:
LinkList<GameObject>* objects;
};
#endif /* GAMECONTEXT_H_ */
