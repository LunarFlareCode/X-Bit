#include "TestObject.h"
#include <iostream>

void TestObject::MainUpdate() {
	GameObject::MainUpdate();
	std::cout<<"I've been updated!\n"<<std::flush;
}

void TestObject::LateUpdate() {
	GameObject::LateUpdate();
	std::cout<<"Lately I've been updated...\n"<<std::flush;

}
