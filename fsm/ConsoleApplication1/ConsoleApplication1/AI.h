#pragma once
#include "Base.h"

class AIState;

class AI
{
	AIState* state;
public:
	AI();

	void SetState(AIState* state);

	void Search();//검색
	void Update();//업데이트
	void Success();//성공
	void Fail();//실패
	void Rest();//휴식
	void Overheating();//과열
};