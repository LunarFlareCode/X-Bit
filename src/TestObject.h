#ifndef TESTOBJECT_H_
#define TESTOBJECT_H_

#include "GameObject.h"

class TestObject: public GameObject {
public:
	virtual void MainUpdate ();
	virtual void LateUpdate ();
};

#endif /* TESTOBJECT_H_ */
