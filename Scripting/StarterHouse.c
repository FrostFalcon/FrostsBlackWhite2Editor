#include "ScriptCommands.h"
#include "MovementCommands.h"

//Vanilla Script
void Sequence0()
{
	LockAll();
	StoreFlag(2406);
	CompareTo(1);
	Condition(1);
	If(255, 26);
	PlaySound(1351);
	FacePlayer();
	Message2(0, 4, 0, 0, 0);
	WaitButton();
	CloseMessageKeyPress();
	Jump(20);
	PlaySound(1351);
	FacePlayer();
	Message2(0, 4, 1, 0, 0);
	WaitButton();
	CloseMessageKeyPress();
	WaitMoment();
	UnlockAll();
	End();
}

//Vanilla Script
void Sequence1()
{
	LockAll();
	StoreBadge(0x8010, 0);
	StoreVar(0x8010);
	CompareTo(1);
	Condition(1);
	If(255, 26);
	PlaySound(1351);
	FacePlayer();
	Message2(0, 4, 3, 0, 0);
	WaitButton();
	CloseMessageKeyPress();
	Jump(20);
	PlaySound(1351);
	FacePlayer();
	Message2(0, 4, 2, 0, 0);
	WaitButton();
	CloseMessageKeyPress();
	WaitMoment();
	UnlockAll();
	End();
}

//Vanilla Script
void Sequence2()
{
	LockAll();
	PlaySound(1351);
	FacePlayer();
	Cry(506, 0);
	Message2(0, 4, 4, 0, 0);
	WaitCry();
	WaitButton();
	CloseMessageKeyPress();
	SetVar2A(0x8000, 632);
	SetVar2A(0x8001, 1);
	CallStd(2805);
	ClearVar(0x8000);
	ClearVar(0x8001);
	UnlockKey(1);
	WaitMoment();
	UnlockAll();
	End();
}

//Ditto Dialogue Script
void Sequence3()
{
	LockAll();
	PlaySound(1351);
	FacePlayer();
	StoreFlag(2401);
	CompareTo(0);
	Condition(1);
	if (255)
	{
		Message2(0, 4, 5, 0, 0);
		WaitButton();
		CloseMessageKeyPress2();
		WaitMoment();
		UnlockAll();
		End();
	}

	Message2(0, 4, 6, 2, 0);

	//Give dialogue options to the player
	Multi2(31, 8, 0, 0, 1, 0x8020);
	SetTextScriptMessage(7, 0xFFFF, 0);
	SetTextScriptMessage(8, 0xFFFF, 1);
	SetTextScriptMessage(9, 0xFFFF, 2);
	SetTextScriptMessage(10, 0xFFFF, 3);
	CloseMulti();

	//First dialogue choice
	if (0x8020 == 0)
	{
		//Get a random pokemon out of basic starters
		CloseMessageKeyPress2();
		StoreRandomNumber(0x8025, 15);
		TranslatePokemon();
	}

	//Second dialogue choice
	if (0x8020 == 1)
	{
		//Get a random pokemon from extended starter pool
		CloseMessageKeyPress2();
		StoreRandomNumber(0x8025, 30);
		TranslatePokemon();
	}

	//Third dialogue choice
	if (0x8020 == 2)
	{
		//Select Pokemon from large list
		Multi2(31, 4, 0, 0, 1, 0x8025);
		SetTextScriptMessage(11, 0xFFFF, 0);
		SetTextScriptMessage(12, 0xFFFF, 1);
		SetTextScriptMessage(13, 0xFFFF, 2);
		SetTextScriptMessage(14, 0xFFFF, 3);
		SetTextScriptMessage(15, 0xFFFF, 4);
		SetTextScriptMessage(16, 0xFFFF, 5);
		SetTextScriptMessage(17, 0xFFFF, 6);
		SetTextScriptMessage(18, 0xFFFF, 7);
		SetTextScriptMessage(19, 0xFFFF, 8);
		SetTextScriptMessage(20, 0xFFFF, 9);
		SetTextScriptMessage(21, 0xFFFF, 10);
		SetTextScriptMessage(22, 0xFFFF, 11);
		SetTextScriptMessage(23, 0xFFFF, 12);
		SetTextScriptMessage(24, 0xFFFF, 13);
		SetTextScriptMessage(25, 0xFFFF, 14);
		SetTextScriptMessage(26, 0xFFFF, 15);
		SetTextScriptMessage(27, 0xFFFF, 16);
		SetTextScriptMessage(28, 0xFFFF, 17);
		SetTextScriptMessage(29, 0xFFFF, 18);
		SetTextScriptMessage(30, 0xFFFF, 19);
		SetTextScriptMessage(31, 0xFFFF, 20);
		SetTextScriptMessage(32, 0xFFFF, 21);
		SetTextScriptMessage(33, 0xFFFF, 22);
		SetTextScriptMessage(34, 0xFFFF, 23);
		SetTextScriptMessage(35, 0xFFFF, 24);
		SetTextScriptMessage(36, 0xFFFF, 25);
		SetTextScriptMessage(37, 0xFFFF, 26);
		SetTextScriptMessage(38, 0xFFFF, 27);
		SetTextScriptMessage(39, 0xFFFF, 28);
		SetTextScriptMessage(40, 0xFFFF, 29);
		SetTextScriptMessage(41, 0xFFFF, 30);
		CloseMulti();
		CloseMessageKeyPress2();
		if (0x8025 < 30)
		{
			TranslatePokemon();
		}
	}

	//Quit
	if (0x8020 == 3)
	{
		CloseMessageKeyPress2();
	}

	WaitMoment();
	UnlockAll();
	End();
}

//Give pokemon ID stored in 0x8025 and set necessary flags for the story
void GivePokemonSequence()
{
	PlayFanfare(1304);
	EventGreyMessage(2, 1);
	WaitFanfare();
	CloseAngryMessage();
	CloseEventGreyMessage();
	GivePokemon(0x8010, 0x8025, 0, 5);
	SetFlag(2401);
	SetFlag(2402);
	SetVarEqVal(0x8025, 0);
	CloseMessageKeyPress2();
	WaitMoment();
	UnlockAll();
	End();
}

//Take the random/dialogue input and translate it to pokemon IDs
void TranslatePokemon()
{
	//Starters
	if (0x8025 == 0)
	{
		SetVarEqVal(0x8025, 1);
		GivePokemonSequence();
	}
	if (0x8025 == 1)
	{
		SetVarEqVal(0x8025, 4);
		GivePokemonSequence();
	}
	if (0x8025 == 2)
	{
		SetVarEqVal(0x8025, 7);
		GivePokemonSequence();
	}
	if (0x8025 == 3)
	{
		SetVarEqVal(0x8025, 152);
		GivePokemonSequence();
	}
	if (0x8025 == 4)
	{
		SetVarEqVal(0x8025, 155);
		GivePokemonSequence();
	}
	if (0x8025 == 5)
	{
		SetVarEqVal(0x8025, 158);
		GivePokemonSequence();
	}
	if (0x8025 == 6)
	{
		SetVarEqVal(0x8025, 252);
		GivePokemonSequence();
	}
	if (0x8025 == 7)
	{
		SetVarEqVal(0x8025, 255);
		GivePokemonSequence();
	}
	if (0x8025 == 8)
	{
		SetVarEqVal(0x8025, 258);
		GivePokemonSequence();
	}
	if (0x8025 == 9)
	{
		SetVarEqVal(0x8025, 387);
		GivePokemonSequence();
	}
	if (0x8025 == 10)
	{
		SetVarEqVal(0x8025, 390);
		GivePokemonSequence();
	}
	if (0x8025 == 11)
	{
		SetVarEqVal(0x8025, 393);
		GivePokemonSequence();
	}
	if (0x8025 == 12)
	{
		SetVarEqVal(0x8025, 495);
		GivePokemonSequence();
	}
	if (0x8025 == 13)
	{
		SetVarEqVal(0x8025, 498);
		GivePokemonSequence();
	}
	if (0x8025 == 14)
	{
		SetVarEqVal(0x8025, 501);
		GivePokemonSequence();
	}

	//Types
	if (0x8025 == 15)
	{
		SetVarEqVal(0x8025, 506);
		GivePokemonSequence();
	}
	if (0x8025 == 16)
	{
		SetVarEqVal(0x8025, 179);
		GivePokemonSequence();
	}
	if (0x8025 == 17)
	{
		SetVarEqVal(0x8025, 582);
		GivePokemonSequence();
	}
	if (0x8025 == 18)
	{
		SetVarEqVal(0x8025, 66);
		GivePokemonSequence();
	}
	if (0x8025 == 19)
	{
		//Nidorans
		StoreRandomNumber(0x8025, 2);
		if (0x8025 == 0)
		{
			SetVarEqVal(0x8025, 29);
			GivePokemonSequence();
		}
		if (0x8025 == 1)
		{
			SetVarEqVal(0x8025, 32);
			GivePokemonSequence();
		}
	}
	if (0x8025 == 20)
	{
		SetVarEqVal(0x8025, 543);
		GivePokemonSequence();
	}
	if (0x8025 == 21)
	{
		SetVarEqVal(0x8025, 524);
		GivePokemonSequence();
	}
	if (0x8025 == 22)
	{
		SetVarEqVal(0x8025, 220);
		GivePokemonSequence();
	}
	if (0x8025 == 23)
	{
		SetVarEqVal(0x8025, 16);
		GivePokemonSequence();
	}
	if (0x8025 == 24)
	{
		SetVarEqVal(0x8025, 577);
		GivePokemonSequence();
	}
	if (0x8025 == 25)
	{
		SetVarEqVal(0x8025, 551);
		GivePokemonSequence();
	}
	if (0x8025 == 26)
	{
		SetVarEqVal(0x8025, 607);
		GivePokemonSequence();
	}
	if (0x8025 == 27)
	{
		SetVarEqVal(0x8025, 147);
		GivePokemonSequence();
	}
	if (0x8025 == 28)
	{
		SetVarEqVal(0x8025, 599);
		GivePokemonSequence();
	}

	//Extra
	if (0x8025 == 29)
	{
		SetVarEqVal(0x8025, 133);
		GivePokemonSequence();
	}
}
