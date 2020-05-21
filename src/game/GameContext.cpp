#include "GameContext.h"
#include "GameObject.h"
#include "TestObject.h"
#include <iostream>
GameContext::GameContext() : Context() {
	objects = new LinkList<GameObject>();
}

void GameContext::Update() {
	for (LinkList<GameObject>* index = objects->next; index!=0; index=index->next) {index->current->MainUpdate();}
	for (LinkList<GameObject>* index = objects->next; index!=0; index=index->next) {index->current->LateUpdate();}
}

void GameContext::AddObject(GameObject *object) {
	LinkList<GameObject>* nw = objects->Insert(object);
	object->listEntry=nw;
}

void GameContext::Open() {
	//TODO: Probably get rid of this
	AddObject(new TestObject());
}
