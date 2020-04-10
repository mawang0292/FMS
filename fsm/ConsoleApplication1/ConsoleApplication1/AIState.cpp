#include "AIState.h"

SearchState* SearchState::instance;
UpdateState* UpdateState::instance;
SuccessState* SuccessState::instance;
FailState* FailState::instance;
RestState* RestState::instance;
OverheatingState* OverheatingState::instance;


SearchState* SearchState::GetInstance()
{
	if (instance == nullptr)
	{
		instance = new SearchState();
	}
	return instance;
}

void SearchState::Search(AI* ai)
{
	cout << "검색중..." << endl;
}
void SearchState::Update(AI* ai)
{
	cout << "업데이트 불가능" << endl;
}
void SearchState::Success(AI* ai)
{
	cout << "검색 성공!" << endl;

	SetAIState(ai, SuccessState::GetInstance());
}
void SearchState::Fail(AI* ai)
{
	cout << "검색 실패!" << endl;

	SetAIState(ai, FailState::GetInstance());
}
void SearchState::Rest(AI* ai)
{
	cout << "잠시 휴식!" << endl;
	SetAIState(ai, RestState::GetInstance());
}
void SearchState::Overheating(AI* ai)
{
	cout << "AI 정상작동" << endl;
}

UpdateState* UpdateState::GetInstance()
{
	if (instance == nullptr)
	{
		instance = new UpdateState();
	}
	
	return instance;
}
void UpdateState::Search(AI* ai)
{
	cout << "검색 불가능" << endl;
}

void UpdateState::Update(AI* ai)
{
	cout << "업그래이드중..." << endl;
}
void UpdateState::Success(AI* ai)
{
	cout << "불가능한 작업" << endl;
}
void UpdateState::Fail(AI* ai)
{
	cout << "불가능한 작업" << endl;
}
void UpdateState::Rest(AI* ai)
{
	cout << "업데이트 완료!" << endl;

	SetAIState(ai, RestState::GetInstance());
}
void UpdateState::Overheating(AI* ai)
{
	cout << "AI 정상 작동" << endl;
}
SuccessState* SuccessState::GetInstance()
{
	if (instance == nullptr)
	{
		instance = new SuccessState();
	}
	
	return instance;
}

void SuccessState::Search(AI* ai)
{
	cout << "검색 불가능" << endl;
}
void SuccessState::Update(AI* ai)
{
	cout << "업데이트 시작!" << endl;
	
	SetAIState(ai, UpdateState::GetInstance());
}
void SuccessState::Success(AI* ai)
{
	cout << "불가능한 작업" << endl;
}
void SuccessState::Fail(AI* ai)
{
	cout << "불가능한 작업" << endl;
}
void SuccessState::Rest(AI* ai)
{
	cout << "불가능" << endl;
}
void SuccessState::Overheating(AI* ai)
{
	cout << "AI 정상 작동" << endl;
}

FailState* FailState::GetInstance()
{
	if (instance == nullptr)
	{
		instance = new FailState();
	}

	return instance;
}

void FailState::Search(AI* ai)
{
	cout << "재 검색 시작." << endl;

	SetAIState(ai, SearchState::GetInstance());
}
void FailState::Update(AI* ai)
{
	cout << "업데이트 불가능" << endl;
}
void FailState::Success(AI* ai)
{
	cout << "불가능한 작업" << endl;
}
void FailState::Fail(AI* ai)
{
	cout << "불가능한 작업" << endl;
}
void FailState::Rest(AI* ai)
{
	cout << "잠시 휴식합니다." << endl;
	
	SetAIState(ai, RestState::GetInstance());
}
void FailState::Overheating(AI* ai)
{
	cout << "AI 파괴됨" << endl;
	SetAIState(ai, OverheatingState::GetInstance());
}

RestState* RestState::GetInstance()
{
	if (instance == nullptr)
	{
		instance = new RestState();
	}

	return instance;
}

void RestState::Search(AI* ai)
{
	cout << "검색 시작!" << endl;
	SetAIState(ai, SearchState::GetInstance());
}
void RestState::Update(AI* ai)
{
	cout << "업데이트 불가능" << endl;
}
void RestState::Success(AI* ai)
{
	cout << "불가능한 작업" << endl;
}
void RestState::Fail(AI* ai)
{
	cout << "불가능한 작업" << endl;
}
void RestState::Rest(AI* ai)
{
	cout << "계속 휴식합니다." << endl;
}
void RestState::Overheating(AI* ai)
{
	cout << "AI 정상 작동" << endl;
}


OverheatingState* OverheatingState::GetInstance()
{
	if (instance == nullptr)
	{
		instance = new OverheatingState();
	}

	return instance;
}

void OverheatingState::Search(AI* ai)
{
	cout << "AI 파괴됨" << endl;
}
void OverheatingState::Update(AI* ai)
{
	cout << "AI 파괴됨" << endl;
}
void OverheatingState::Success(AI* ai)
{
	cout << "AI 파괴됨" << endl;
}
void OverheatingState::Fail(AI* ai)
{
	cout << "AI 파괴됨" << endl;
}
void OverheatingState::Rest(AI* ai)
{
	cout << "AI 파괴됨" << endl;
}
void OverheatingState::Overheating(AI* ai)
{
	cout << "AI 파괴됨" << endl;
}
