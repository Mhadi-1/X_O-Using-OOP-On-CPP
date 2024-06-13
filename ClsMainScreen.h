#pragma once
#include <iostream>
#include <string>
#include <iomanip>
#include <stdlib.h>
#include "ArrayGame.h"

#include "ClsGame.h"
#include "ClsPlayer.h"
#include "ClsComputer.h"
#include "ClsScreen.h"

using namespace std; 

char ClsPlayer::_SymbolType = ' ';
short ClsPlayer::_Opetion = 0;
char ClsComputer::_ComputerSimple = ' ';
char ClsGame::_FinalSymbol = ' ';


class ClsMainScreen : private ClsScreen
{


private: 
   

	static void _PlayGameScreen(ClsComputer Computer , ClsPlayer Player , bool ContinuPlaying)
	{
		system("cls");

		ClsScreen::ShowGameHeader();

		cout << "\t" << ArrayOptions[0][0] << " |   " << ArrayOptions[0][1] << "  |  " << ArrayOptions[0][2] << "  " << endl;
		cout << "\t______________" << endl;;
		cout << "\t" << ArrayOptions[1][0] << " |   " << ArrayOptions[1][1] << "  |  " << ArrayOptions[1][2] << "  " << endl;
		cout << "\t______________" << endl;
		cout << "\t" << ArrayOptions[2][0] << " |   " << ArrayOptions[2][1] << "  |  " << ArrayOptions[2][2] << "  " << endl;

		if (ContinuPlaying == false)
		{
			return;

		}
		cout << setw(28) << "\n\n " << "Please Enter Your Chooice From [1 to 9 ] : " ;
		Player.ReadOpetion(1, 9);

		ClsGame::StartPlay(Player.Opetion(), Player.Symbol);
		ClsGame::StartPlay(Computer.Opetion(1,9), Computer.Simple);
	}


public: 


	static void ShowMainScreen()
	{

		ClsComputer Computer;
		ClsPlayer Player; 
	    bool GameStart = true; 
		short GameRounds = 0; 

	   system("cls");
	   ClsScreen::ShowGameHeader();

	   cout << setw(28) << "\n\n " << "Please Chooice Your Type [X/O] : ";
	   Player.SymbolType();
	   Computer.SymbolType();



	   while (GameStart) {


		   if (GameRounds >= 3 )
		   {
	   	      GameStart = !ClsGame::ChickWinner();
		   }
	   	     _PlayGameScreen(Computer, Player , GameStart);
			 GameRounds++; 
	   		
	   };

	   if (ClsGame::FinalSymbol() == Player.PlayerSymbol())
	   {
		   ClsScreen::ShowFinalGameScreen("Player");
	   }
	   else if (ClsGame::FinalSymbol() == Computer.ComputerSimple())
	   {
		   ClsScreen::ShowFinalGameScreen("Computer");
	   }


    }



};

