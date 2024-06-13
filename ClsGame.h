#pragma once

#include <iostream>
#include <string>
#include <iomanip>
#include "ArrayGame.h"

#include "ClsPlayer.h"
#include "ClsComputer.h"

using namespace std;

class ClsGame
{
	static char _FinalSymbol;

	enum _enArrayOptions {
		One = 1, Tow = 2, Three = 3,
		Four = 4, Five = 5, Six = 6, Seven = 7, Eghit = 8, Nine = 9
	};

	enum enWinner {Player = 1 , Computer = 2 , NoOne = 3 };

public:

   

	 static void StartPlay(short Opetion ,char Simple)
	 {
		

		Opetion = (_enArrayOptions) Opetion; 

		switch (Opetion)
		{
		case ClsGame::One:
			if (ArrayOptions[0][0] != ClsPlayer::PlayerSymbol() && ArrayOptions[0][0] != ClsComputer::ComputerSimple() )
			{
				ArrayOptions[0][0] = Simple;
				break;
			}
			else
			{
				Opetion = ClsComputer::Opetion(Opetion, 9);
			}
		case ClsGame::Tow:
			if (ArrayOptions[0][1] != ClsPlayer::PlayerSymbol() && ArrayOptions[0][1] != ClsComputer::ComputerSimple())
			{
				ArrayOptions[0][1] = toupper(Simple);
			   break;
			}
			else
			{
				Opetion = ClsComputer::Opetion(Opetion, 9);
			}
		case ClsGame::Three:
			if (ArrayOptions[0][2] != ClsPlayer::PlayerSymbol() && ArrayOptions[0][2] != ClsComputer::ComputerSimple())
			{
				ArrayOptions[0][2] = toupper(Simple);
			    break;
			}
			else
			{
				Opetion = ClsComputer::Opetion(Opetion, 9);
			}
		case ClsGame::Four:
			if (ArrayOptions[1][0] != ClsPlayer::PlayerSymbol() && ArrayOptions[1][0] != ClsComputer::ComputerSimple())
			{
				ArrayOptions[1][0] = toupper(Simple);
			    break;
			}
			else
			{
				Opetion = ClsComputer::Opetion(Opetion, 9);
			}
		case ClsGame::Five:
			if (ArrayOptions[1][1] != ClsPlayer::PlayerSymbol() && ArrayOptions[1][1] != ClsComputer::ComputerSimple())
			{
				ArrayOptions[1][1] = toupper(Simple);
		     	break;
			}
			else
			{
				Opetion = ClsComputer::Opetion(Opetion, 9);
			}
		case ClsGame::Six:
			if (ArrayOptions[1][2] != ClsPlayer::PlayerSymbol() && ArrayOptions[1][2] != ClsComputer::ComputerSimple())
			{
				ArrayOptions[1][2] = toupper(Simple);
			    break;
			}
			else
			{
				Opetion = ClsComputer::Opetion(Opetion, 9);
			}
		case ClsGame::Seven:
			if (ArrayOptions[2][0] != ClsPlayer::PlayerSymbol() && ArrayOptions[2][0] != ClsComputer::ComputerSimple())
			{
				ArrayOptions[2][0] = toupper(Simple);
			    break;
			}
			else
			{
				Opetion = ClsComputer::Opetion(Opetion, 9);
			}
		case ClsGame::Eghit:
			if (ArrayOptions[2][1] != ClsPlayer::PlayerSymbol() && ArrayOptions[2][1] != ClsComputer::ComputerSimple())
			{
				ArrayOptions[2][1] = toupper(Simple);
			    break;
			}
			else
			{
				Opetion = ClsComputer::Opetion(Opetion, 9);
			}
		case ClsGame::Nine:
			if (ArrayOptions[2][2] != ClsPlayer::PlayerSymbol() && ArrayOptions[2][2] != ClsComputer::ComputerSimple())
			{
				ArrayOptions[2][2] = toupper(Simple);
			    break;
			}
			else
			{
				Opetion = ClsComputer::Opetion(Opetion, 9);
			}
		default:
			break;
		}
	 }
     static bool ChickWinner()
	 {
		

			if (ArrayOptions[0][0] == ArrayOptions[0][1] && ArrayOptions[0][0] == ArrayOptions[0][2])
			{
				_FinalSymbol = ArrayOptions[0][0]; 
				return true;
			}
			if (ArrayOptions[1][0] == ArrayOptions[1][1] && ArrayOptions[1][0] == ArrayOptions[1][2])
			{
				_FinalSymbol = ArrayOptions[1][0]; 
				return true;
			}
			if (ArrayOptions[2][0] == ArrayOptions[2][1] && ArrayOptions[2][0] == ArrayOptions[2][2])
			{
				_FinalSymbol = ArrayOptions[2][0];
				return true;
			}
			if (ArrayOptions[0][0] == ArrayOptions[1][0] && ArrayOptions[1][0] == ArrayOptions[2][0])
			{
				_FinalSymbol = ArrayOptions[1][0];
				return true;
			}
			if (ArrayOptions[0][1] == ArrayOptions[1][1] && ArrayOptions[1][1] == ArrayOptions[2][1])
			{
				_FinalSymbol = ArrayOptions[1][1];
				return true;
			}
			if (ArrayOptions[0][2] == ArrayOptions[1][2] && ArrayOptions[1][2] == ArrayOptions[2][2])
			{
				_FinalSymbol = ArrayOptions[1][2];
				return true;
			}
			if (ArrayOptions[0][0] == ArrayOptions[1][1] && ArrayOptions[1][1] == ArrayOptions[2][2])
			{
				_FinalSymbol = ArrayOptions[2][2];
				return true;
			}
			if (ArrayOptions[2][0] == ArrayOptions[1][1] && ArrayOptions[1][1] == ArrayOptions[0][2])
			{
				_FinalSymbol = ArrayOptions[0][2];
				return true;
			}
			return false; 
	 }

	 static char FinalSymbol()
	 {
		 return _FinalSymbol; 
	 }
};

