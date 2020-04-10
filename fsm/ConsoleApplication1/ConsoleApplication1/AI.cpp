#include "AI.h"
#include "AIState.h"

AI::AI()
{
	state = SearchState::GetInstance();
}

void AI::SetState(AIState* state)
{
	this->state = state;
}

void AI::Search()
{
	state->Search(this);
}

void AI::Update()
{
	state->Update(this);
}

void AI::Success()
{
	state->Success(this);
}
void AI::Fail()
{
	state->Fail(this);
}
void AI::Rest()
{
	state->Rest(this);
}
void AI::Overheating()
{
	state->Overheating(this);
}