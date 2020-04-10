#pragma once
#include "AI.h"

class AIState
{
public:
	virtual void Search(AI* ai) = 0;
	virtual void Update(AI* ai) = 0;
	virtual void Success(AI* ai) = 0;
	virtual void Fail(AI* ai) = 0;
	virtual void Rest(AI* ai) = 0;
	virtual void Overheating(AI* ai) = 0;
protected:
	void SetAIState(AI* ai, AIState* state)
	{
		ai->SetState(state);
	}
};

class SearchState : public AIState
{
	static SearchState* instance;
public:
	static SearchState* GetInstance();

	virtual void Search(AI* ai);
	virtual void Update(AI* ai);
	virtual void Success(AI* ai);
	virtual void Fail(AI* ai);
	virtual void Rest(AI* ai);
	virtual void Overheating(AI* ai);
};

class UpdateState : public AIState
{
	static UpdateState* instance;
public:
	static UpdateState* GetInstance();

	virtual void Search(AI* ai);
	virtual void Update(AI* ai);
	virtual void Success(AI* ai);
	virtual void Fail(AI* ai);
	virtual void Rest(AI* ai);
	virtual void Overheating(AI* ai);
};

class SuccessState : public AIState
{
	static SuccessState* instance;
public:
	static SuccessState* GetInstance();

	virtual void Search(AI* ai);
	virtual void Update(AI* ai);
	virtual void Success(AI* ai);
	virtual void Fail(AI* ai);
	virtual void Rest(AI* ai);
	virtual void Overheating(AI* ai);
};

class FailState : public AIState
{
	static FailState* instance;
public:
	static FailState* GetInstance();

	virtual void Search(AI* ai);
	virtual void Update(AI* ai);
	virtual void Success(AI* ai);
	virtual void Fail(AI* ai);
	virtual void Rest(AI* ai);
	virtual void Overheating(AI* ai);
};

class RestState : public AIState
{
	static RestState* instance;
public:
	static RestState* GetInstance();

	virtual void Search(AI* ai);
	virtual void Update(AI* ai);
	virtual void Success(AI* ai);
	virtual void Fail(AI* ai);
	virtual void Rest(AI* ai);
	virtual void Overheating(AI* ai);
};

class OverheatingState : public AIState
{
	static OverheatingState* instance;
public:
	static OverheatingState* GetInstance();

	virtual void Search(AI* ai);
	virtual void Update(AI* ai);
	virtual void Success(AI* ai);
	virtual void Fail(AI* ai);
	virtual void Rest(AI* ai);
	virtual void Overheating(AI* ai);
};