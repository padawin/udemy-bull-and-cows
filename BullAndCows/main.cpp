#include "FBullCowGame.hpp"
#include "utils.hpp"
#include <stdlib.h>

using FString = std::string;

bool askIfContinue();

int main() {
	time_t t;
	srand((unsigned) time(&t));
	FBullCowGame game;
	bool continuePlaying = true;
	do {
		game.play();
		continuePlaying = askIfContinue();
	} while (continuePlaying);
	return 0;
}

bool askIfContinue() {
	FString continueAnswer;
	do {
		utils::readString(continueAnswer, "Continue playing (y/yes/n/no)? ");
	} while (continueAnswer[0] != 'y' && continueAnswer[0] != 'n');

	return continueAnswer[0] == 'y';
}
