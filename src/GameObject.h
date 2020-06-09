#ifndef GAMEOBJECT_H_
#define GAMEOBJECT_H_
#include "LinkList.h"
class GameObject {
public:
	virtual ~GameObject() {}
	virtual void Open() {}
	virtual void Initialize() {}
	virtual void MainUpdate () {}
	virtual void LateUpdate () {}
	virtual void Reset () {}
	virtual void Close () {}
	LinkList<GameObject>* listEntry;
};

#endif /* GAMEOBJECT_H_ */
