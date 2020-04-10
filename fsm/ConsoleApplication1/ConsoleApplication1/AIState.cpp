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
	cout << "�˻���..." << endl;
}
void SearchState::Update(AI* ai)
{
	cout << "������Ʈ �Ұ���" << endl;
}
void SearchState::Success(AI* ai)
{
	cout << "�˻� ����!" << endl;

	SetAIState(ai, SuccessState::GetInstance());
}
void SearchState::Fail(AI* ai)
{
	cout << "�˻� ����!" << endl;

	SetAIState(ai, FailState::GetInstance());
}
void SearchState::Rest(AI* ai)
{
	cout << "��� �޽�!" << endl;
	SetAIState(ai, RestState::GetInstance());
}
void SearchState::Overheating(AI* ai)
{
	cout << "AI �����۵�" << endl;
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
	cout << "�˻� �Ұ���" << endl;
}

void UpdateState::Update(AI* ai)
{
	cout << "���׷��̵���..." << endl;
}
void UpdateState::Success(AI* ai)
{
	cout << "�Ұ����� �۾�" << endl;
}
void UpdateState::Fail(AI* ai)
{
	cout << "�Ұ����� �۾�" << endl;
}
void UpdateState::Rest(AI* ai)
{
	cout << "������Ʈ �Ϸ�!" << endl;

	SetAIState(ai, RestState::GetInstance());
}
void UpdateState::Overheating(AI* ai)
{
	cout << "AI ���� �۵�" << endl;
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
	cout << "�˻� �Ұ���" << endl;
}
void SuccessState::Update(AI* ai)
{
	cout << "������Ʈ ����!" << endl;
	
	SetAIState(ai, UpdateState::GetInstance());
}
void SuccessState::Success(AI* ai)
{
	cout << "�Ұ����� �۾�" << endl;
}
void SuccessState::Fail(AI* ai)
{
	cout << "�Ұ����� �۾�" << endl;
}
void SuccessState::Rest(AI* ai)
{
	cout << "�Ұ���" << endl;
}
void SuccessState::Overheating(AI* ai)
{
	cout << "AI ���� �۵�" << endl;
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
	cout << "�� �˻� ����." << endl;

	SetAIState(ai, SearchState::GetInstance());
}
void FailState::Update(AI* ai)
{
	cout << "������Ʈ �Ұ���" << endl;
}
void FailState::Success(AI* ai)
{
	cout << "�Ұ����� �۾�" << endl;
}
void FailState::Fail(AI* ai)
{
	cout << "�Ұ����� �۾�" << endl;
}
void FailState::Rest(AI* ai)
{
	cout << "��� �޽��մϴ�." << endl;
	
	SetAIState(ai, RestState::GetInstance());
}
void FailState::Overheating(AI* ai)
{
	cout << "AI �ı���" << endl;
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
	cout << "�˻� ����!" << endl;
	SetAIState(ai, SearchState::GetInstance());
}
void RestState::Update(AI* ai)
{
	cout << "������Ʈ �Ұ���" << endl;
}
void RestState::Success(AI* ai)
{
	cout << "�Ұ����� �۾�" << endl;
}
void RestState::Fail(AI* ai)
{
	cout << "�Ұ����� �۾�" << endl;
}
void RestState::Rest(AI* ai)
{
	cout << "��� �޽��մϴ�." << endl;
}
void RestState::Overheating(AI* ai)
{
	cout << "AI ���� �۵�" << endl;
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
	cout << "AI �ı���" << endl;
}
void OverheatingState::Update(AI* ai)
{
	cout << "AI �ı���" << endl;
}
void OverheatingState::Success(AI* ai)
{
	cout << "AI �ı���" << endl;
}
void OverheatingState::Fail(AI* ai)
{
	cout << "AI �ı���" << endl;
}
void OverheatingState::Rest(AI* ai)
{
	cout << "AI �ı���" << endl;
}
void OverheatingState::Overheating(AI* ai)
{
	cout << "AI �ı���" << endl;
}
