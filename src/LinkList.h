#ifndef LINKLIST_H_
#define LINKLIST_H_
template <class T> class LinkList {
public:
LinkList();
LinkList<T>* Insert(T* object);
void Remove();
LinkList<T>* previous = 0;
T* current = 0;
LinkList<T>* next = 0;
};

template<class T> LinkList<T>::LinkList() {
	previous = 0;
	current = 0;
	next = 0;
}

template<class T> LinkList<T>* LinkList<T>::Insert(T *object) {
	LinkList<T>* nw = new LinkList<T>();
	nw->next = next;
	if (next!=0) next->previous=nw;
	nw->previous = this;
	next = nw;
	nw->current = object;
	return nw;
}

template<class T> void LinkList<T>::Remove() {
	if (previous!=0) previous->next=next;
	if (next!=0) next->previous=previous;
}

#endif /* LINKLIST_H_ */
