#include "AI.h"

void main()
{
	AI* ai = new AI();

	ai->Search();
	ai->Search();
	ai->Update();
	ai->Search();
	ai->Rest();
	ai->Search();
	ai->Success();
	ai->Search();
	ai->Update();
	ai->Search();
	ai->Rest();
	ai->Search();
	ai->Search();
	ai->Fail();
	ai->Overheating();

	delete ai;
}