#pragma once
#include "Base.h"

class AIState;

class AI
{
	AIState* state;
public:
	AI();

	void SetState(AIState* state);

	void Search();//�˻�
	void Update();//������Ʈ
	void Success();//����
	void Fail();//����
	void Rest();//�޽�
	void Overheating();//����
};