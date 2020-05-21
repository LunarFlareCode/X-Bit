#ifndef CONTEXT_H_
#define CONTEXT_H_

class Context {
public:
virtual ~Context() {}
virtual void Open() {}
virtual void Update() {}
virtual void Close() {}
};

#endif /* CONTEXT_H_ */
