#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include "ClsPlayer.h"

using namespace std;

class ClsComputer
{
	static char _ComputerSimple;


public:


	static short Opetion(short From, short To)
	{
	
		return rand() % (To - From + 1) + From;

	}

	static void SetComputerSimple(char Type)
	{
		_ComputerSimple = Type;
	}
    
	static char ComputerSimple()
	{
		return _ComputerSimple;
	}

	 _declspec(property(get = ComputerSimple, put = SetComputerSimple)) char Simple;

	void SymbolType()
	{
		(toupper(ClsPlayer::PlayerSymbol() ) == 'X') ? _ComputerSimple = 'O' : _ComputerSimple = 'X';
	}
};

