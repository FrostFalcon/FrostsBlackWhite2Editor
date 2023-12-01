#include "ScriptCommands.h"
#include "MovementCommands.h"

//Vanilla Script
void Sequence0()
{
	LockAll();
	PlaySound(1351);
	BubbleMessage(11, 2);
	WaitButton();
	CloseMessageKeyPress2();
	WaitMoment();
	UnlockAll();
	End();
}

//Vanilla Script
void Sequence1()
{
	LockAll();
	PlaySound(1351);
	BubbleMessage(12, 2);
	WaitButton();
	CloseMessageKeyPress2();
	WaitMoment();
	UnlockAll();
	End();
}

//Intro to Lenora/Cheren battle sequence
void LenoraSequence()
{
	LockAll();
	PlaySound(1351);
	FacePlayer();
	//Dialogue if the story segment has already been completed
	if (0x4201 == 1)
	{
		Message2(0, 4, 0, 0, 0);
		WaitButton();
		CloseMessageKeyPress2();
		WaitMoment();
		UnlockAll();
		End();
	}

	SetVarHero(0);
	//Lenora talks
	Message(0, 4, 13, 0, 0, 0);
	CloseMessageKeyPress2();

	//Spawn Cheren
	CreateNPC(5, 11, 0, 200, 223, 0);
	Message(0, 4, 16, 200, 0, 0);
	CloseMessageKeyPress2();
	//Move Cheren up
	Movement m[] = { //200
		0xC, 4
	};
	//Player and Lenora face down
	Movement m[] = { //255
		0x1
	};
	Movement m[] = { //0
		0x1
	};
	//Move Camera
	StartCameraEvent();
	LockCamera();
	MoveCamera(9688, 0, 0xD000, 15, 0x8002, 5, 0, 0, 0x8002, 5, 32);
	EndCameraEvent();
	WaitMovement();

	StoreHeroGender(0x8000);
	
	//Lenora talks
	Message(0, 4, 17, 0, 0, 0);
	CloseMessageKeyPress2();
	//Cheren talks (adjust for hero gender)
	if (0x8000 == 0)
	{
		Message(0, 4, 18, 200, 0, 0);
		CloseMessageKeyPress2();
	}
	else
	{
		Message(0, 4, 24, 200, 0, 0);
		CloseMessageKeyPress2();
	}
	Message(0, 4, 19, 200, 0, 0);
	CloseMessageKeyPress2();
	//Lenora talks
	Message(0, 4, 20, 0, 0, 0);
	CloseMessageKeyPress2();
	//Cheren talks
	if (0x8000 == 0)
	{
		Message(0, 4, 21, 200, 0, 0);
		CloseMessageKeyPress2();
	}
	else
	{
		Message(0, 4, 22, 200, 0, 0);
		CloseMessageKeyPress2();
	}
	//Lenora talks
	Message(0, 4, 23, 0, 0, 0);
	CloseMessageKeyPress2();
	//Cheren talks
	Message(0, 4, 25, 200, 0, 0);
	CloseMessageKeyPress2();

	//Move characters down
	StoreHeroPosition(0x8003, 0x8004);
	
	//If player to the left
	if (0x8003 == 4)
	{
		Movement m[] = { //0
			0xF, 2,
			0xD, 8
		};
		ReturnAfterDelay(2);
		Movement m[] = { //255
			0xE, 1,
			0xD, 8
		};
		ReturnAfterDelay(6);
		Movement m[] = { //200
			0xD, 6
		};
	}
	//If player on top
	if (0x8003 == 5)
	{
		Movement m[] = { //0
			0xF, 2,
			0xD, 8
		};
		ReturnAfterDelay(2);
		Movement m[] = { //255
			0xE, 1,
			0xD, 1,
			0xE, 1,
			0xD, 8
		};
		ReturnAfterDelay(6);
		Movement m[] = { //200
			0xD, 6
		};
	}
	//If player to the right
	if (0x8003 == 6)
	{
		Movement m[] = { //0
			0xE, 2,
			0xD, 8
		};
		ReturnAfterDelay(2);
		Movement m[] = { //255
			0xF, 1,
			0xD, 8
		};
		ReturnAfterDelay(6);
		Movement m[] = { //200
			0xD, 6
		};
	}
	FadeIntoBlack();
	SetFlag(1500);
	SetFlag(1501);
	SetVarEqVal(0x4201, 1);
	WaitMovement();
	//Go to Nacerene City proper
	TeleportWarp2(16, 642, 0, 585, 3);
	//Load the script in the next map
	c0x21(21);

	WaitMoment();
	UnlockAll();
	End();
}

//Old
//void Sequence2()
//{
//	LockAll();
//	SetVarEqVal(0x8020, 0);
//	SetVarEqVal(0x8021, 0);
//	PlaySound(1351);
//	FacePlayer();
//	StoreFlag(445);
//	CompareTo(1);
//	Condition(1);
//	If(255, 20);
//	Message2(0, 4, 0, 0, 0);
//	WaitButton();
//	CloseMessageKeyPress2();
//	Jump(409);
//	Message(0, 4, 1, 0, 2, 0);
//	StoreVar(0x8021);
//	CompareTo(1);
//	Condition(5);
//	If(255, 378);
//	Multi2(31, 1, 0, 0, 1, 0x8020);
//	SetTextScriptMessage(2, 0xFFFF, 0);
//	SetTextScriptMessage(3, 0xFFFF, 1);
//	SetTextScriptMessage(4, 0xFFFF, 2);
//	CloseMulti();
//	Compare(0x8020, 0);
//	If(1, 6);
//	Jump(115);
//	Message(0, 4, 5, 0, 2, 0);
//	YesNoBox(0x8010);
//	StoreVar(0x8010);
//	CompareTo(0);
//	Condition(1);
//	If(255, 62);
//	Message(0, 4, 9, 0, 2, 0);
//	CloseMessageKeyPress2();
//	StoreVar(0x8000);
//	StoreVar(0x8001);
//	SetVar2A(0x8000, 572);
//	SetVar2A(0x8001, 1);
//	CallStd(2805);
//	ClearVar(0x8001);
//	ClearVar(0x8000);
//	SetFlag(445);
//	SetVarEqVal(0x8021, 1);
//	Jump(12);
//	Message(0, 4, 7, 0, 2, 0);
//	Jump(203);
//	Compare(0x8020, 1);
//	If(1, 6);
//	Jump(115);
//	Message(0, 4, 6, 0, 2, 0);
//	YesNoBox(0x8010);
//	StoreVar(0x8010);
//	CompareTo(0);
//	Condition(1);
//	If(255, 62);
//	Message(0, 4, 10, 0, 2, 0);
//	CloseMessageKeyPress2();
//	StoreVar(0x8000);
//	StoreVar(0x8001);
//	SetVar2A(0x8000, 573);
//	SetVar2A(0x8001, 1);
//	CallStd(2805);
//	ClearVar(0x8001);
//	ClearVar(0x8000);
//	SetFlag(445);
//	SetVarEqVal(0x8021, 1);
//	Jump(12);
//	Message(0, 4, 7, 0, 2, 0);
//	Jump(69);
//	Compare(0x8020, 2);
//	If(1, 6);
//	Jump(28);
//	Message(0, 4, 8, 0, 2, 0);
//	WaitButton();
//	CloseMessageKeyPress2();
//	SetVarEqVal(0x8021, 1);
//	Jump(22);
//	Message(0, 4, 8, 0, 2, 0);
//	WaitButton();
//	CloseMessageKeyPress2();
//	SetVarEqVal(0x8021, 1);
//	Jump(-397);
//	StoreFlag(447);
//	CompareTo(0);
//	Condition(1);
//	If(255, 4);
//	SetFlag(447);
//	WaitMoment();
//	UnlockAll();
//	End();
//}
