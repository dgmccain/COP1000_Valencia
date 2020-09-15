// Written By: David McCain & Ryan Scout Westerskov
// Date Written: 13 April 2018
// Purpose: Make a basic video game.

#define _CRT_SECURE_NO_WARNINGS
#define PAUSE system ("pause")
#define CLS system ("cls")

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

//CONSTANTS FOR ATTACK AND HEAL CALCULATIONS//
#define LB_HERO_ATTACK_DAMAGE 100
#define UB_HERO_ATTACK_DAMAGE 200
#define LB_HERO_HEAL_DAMAGE 100
#define UB_HERO_HEAL_DAMAGE 200
#define LB_BOSS_ATTACK_DAMAGE 120
#define UB_BOSS_ATTACK_DAMAGE 220

//DISPLAY BOSS LAUGHING//
int displayLaughingBossImage() {
	int count = 0;
	do {
		CLS;
		printf("     ****                     ****\n    ******                   ******\n   ******                     ******\n");
		printf("  ******                       ******\n  ******                       ******\n  *******                     *******\n");
		printf("   *******    **********    *******\n * ******** **          ** ******** *\n*** ********              ******** ***\n");
		printf("**** *******              ******* ****\n");
		printf(" **********                **********\n");
		printf("  *********   **      **   *********\n");
		printf("   ***   *   *\\ *    * /*   *   ***\n");
		printf("      * *    * \\ *  * / *    * *\n");
		printf("     * *     *  *    *  *     * *\n");
		printf("     * *       **    **       * * \n");
		printf("    ** *        *    *        * **\n");
		printf("   ****  *        **        *  ****\n");
		printf("   ****  **                **  ****\n");
		printf("    *****  **   **  **   ** *****\n");
		printf("     *****    ****  ****    *****\n");
		printf("      ***     **  **  **     ***\n");
		printf("         **                **\n");
		printf("           *              *\n");
		printf("            **************\n");
		Sleep(150);
		CLS;

		printf("     ****                     ****\n    ******                   ******\n   ******                     ******\n");
		printf("  ******                       ******\n  ******                       ******\n  *******                     *******\n");
		printf("   *******    **********    *******\n * ******** **          ** ******** *\n*** ********              ******** ***\n");
		printf("**** *******              ******* ****\n");
		printf(" **********   **      **   **********\n");
		printf("  *********  *\\ *    * /*  *********\n");
		printf("   ***   *   * \\ *  * / *   *   ***\n");
		printf("      * *       **   **      * *\n");
		printf("     * *         *   *        * *\n");
		printf("     * *                      * * \n");
		printf("    ** *          **          * **\n");
		printf("   ****  *                  *  ****\n");
		printf("   ****  ** *   **  **   * **  ****\n");
		printf("    *****  *     *  *     * *****\n");
		printf("     *****  **          **  *****\n");
		printf("      ***    ***      ***    ***\n");
		printf("         **   **  **  **   **\n");
		printf("           *              *\n");
		printf("            **************\n");
		Sleep(150);

		count = count + 1;
	} while (count < 5);
	printf("\n");
	PAUSE;
	CLS;
}

//DISPLAY BOSS WIN SCENARIO//
int displayBossWinsImage() {
	int count = 0;
	do {
		CLS;
		printf("      *****\n     *******\n     *******\n     ** * **\n     *  *  *\n     *  *  *\n     *******\n");
		printf("      *****\n      * * *\n      * * *\n\n");
		Sleep(150);
		CLS;
		printf("        *****\n       *******\n       *******\n       ** * **\n       *  *  *\n       *  *  *\n       *******\n");
		printf("        *****\n        * * *\n        * * *\n\n");
		Sleep(150);

		count = count + 1;
	} while (count < 5);
}

//DISPLAY VCTORY SCENARIO//
int displayVictoryImage() {
	int count = 0;
	do {
		printf("                   ____ _     ____ _     _     __\n");
		printf("                 |  _ ___|  |__   __|  |   \\     |\n");
		printf("                 |  |__ _      |       |  | \\  | |\n");
		printf("                 |    ___|     | |     |  |\\ \\ |  \n");
		printf("                 |  |        __  |__        \\\    |\n");
		printf("                  __|       |_ _____   |__|   ___|\n\n");

		printf("                                |\\__\n");
		printf("                                | \\  \\___\n");
		printf("                                | __/_/\n");
		printf("                                |/\n");
		printf("                                |\n");
		printf("                               _|_\n");
		printf("                              / | \\\n");
		printf("                             /  /  \\\n");
		printf("                            /  / \\  \\\n");
		printf("      __  __  __           /__/___\\__\\          __  __  __\n");
		printf("      |  |  |  |            \\       /           |  |  |  |\n");
		printf("      |        |            |  /\\  |            |        |\n");
		printf("       \\  /\\  /             | |__| |             \\  /\\  /\n");
		printf("       | |__| |             |  ||  |             | |__| |\n");
		printf("       |  ||  |             |  ||  |             |  ||  |\n");
		printf("    __/       \\_____/\\_____/       \\_____/\\_____/       \\__\n");
		printf("   /_______________/  \\___/_________\\___/  \\_______________\\\n");
		printf("  /_______________/    \\__|          |_/    \\_______________\\\n");
		printf(" |_______________|______|_|    /\\    |_|_____|_______________|\n");
		printf(" |________________________|   /||\\   |_______________________|\n");
		printf(" | ||   ||   ||   ||      |  / || \\  |     ||   ||   ||   || |\n");
		printf(" |   ||   ||    ||    ||  | |  ||  | |  ||    ||    ||   ||  |\n");
		printf(" |                        | |  ||  | |                       |\n");
		printf(" |________________________|_|__||__|_|_______________________|\n");
		printf("\n\n  \\0/     0      0      0     \\0/     0      0      0      0 \n");
		printf("   |     /|\\    /|\\    /|\\     |     /|\\    /|\\    /|\\    /|\\\n");
		printf("  /\\     /\\     /\\     /\\     /\\     /\\     /\\     /\\     /\\\n");
		Sleep(150);
		CLS;

		printf("                  __ ____    __ ____    __     __\n");
		printf("                 |  _____   |__   __       \\   |  \n");
		printf("                 |   ____        |     |       | |\n");
		printf("                     ___ |     | |     |  |\\ \\ | |\n");
		printf("                 |  |        __|  __   |  | \\\    |\n");
		printf("                 |__         _____ _|  | _|  \\_ _|\n\n");

		printf("                                |\\_\n");
		printf("                                | \\ \\__\n");
		printf("                                |_/_/\n");
		printf("                                |/\n");
		printf("                                |\n");
		printf("                               _|_\n");
		printf("                              / | \\\n");
		printf("                             /  /  \\\n");
		printf("                            /  / \\  \\\n");
		printf("      __  __  __           /__/___\\__\\          __  __  __\n");
		printf("      |  |  |  |            \\       /           |  |  |  |\n");
		printf("      |        |            |  /\\  |            |        |\n");
		printf("       \\  /\\  /             | |__| |             \\  /\\  /\n");
		printf("       | |__| |             |  ||  |             | |__| |\n");
		printf("       |  ||  |             |  ||  |             |  ||  |\n");
		printf("    __/       \\_____/\\_____/       \\_____/\\_____/       \\__\n");
		printf("   /_______________/  \\___/_________\\___/  \\_______________\\\n");
		printf("  /_______________/    \\__|          |_/    \\_______________\\\n");
		printf(" |_______________|______|_|    /\\    |_|_____|_______________|\n");
		printf(" |________________________|   /||\\   |_______________________|\n");
		printf(" | ||   ||   ||   ||      |  / || \\  |     ||   ||   ||   || |\n");
		printf(" |   ||   ||    ||    ||  | |  ||  | |  ||    ||    ||   ||  |\n");
		printf(" |                        | |  ||  | |                       |\n");
		printf(" |________________________|_|__||__|_|_______________________|\n");
		printf("\n\n   0     \\0/     0      0      0     \\0/     0      0      0 \n");
		printf("  /|\\     |     /|\\    /|\\    /|\\     |     /|\\    /|\\    /|\\\n");
		printf("  /\\     /\\     /\\     /\\     /\\     /\\     /\\     /\\     /\\\n");
		Sleep(150);
		CLS;
		count = count + 1;

		printf("                   ____ _    _____ _    __     __\n");
		printf("                 |  _ ___|  |__   __|  |   \\     |\n");
		printf("                 |  |___                  | \\  | |\n");
		printf("                 |    ___|     | |     |  |  \\ | |\n");
		printf("                    |        __| |__   |  | \\\    |\n");
		printf("                 |__|        _____ _|  |_ |  \\___ \n\n");

		printf("                                |\\__\n");
		printf("                                | \\\\\n");
		printf("                                |_/_/\n");
		printf("                                |\n");
		printf("                                |\n");
		printf("                               _|_\n");
		printf("                              / | \\\n");
		printf("                             /  /  \\\n");
		printf("                            /  / \\  \\\n");
		printf("      __  __  __           /__/___\\__\\          __  __  __\n");
		printf("      |  |  |  |            \\       /           |  |  |  |\n");
		printf("      |        |            |  /\\  |            |        |\n");
		printf("       \\  /\\  /             | |__| |             \\  /\\  /\n");
		printf("       | |__| |             |  ||  |             | |__| |\n");
		printf("       |  ||  |             |  ||  |             |  ||  |\n");
		printf("    __/       \\_____/\\_____/       \\_____/\\_____/       \\__\n");
		printf("   /_______________/  \\___/_________\\___/  \\_______________\\\n");
		printf("  /_______________/    \\__|          |_/    \\_______________\\\n");
		printf(" |_______________|______|_|    /\\    |_|_____|_______________|\n");
		printf(" |________________________|   /||\\   |_______________________|\n");
		printf(" | ||   ||   ||   ||      |  / || \\  |     ||   ||   ||   || |\n");
		printf(" |   ||   ||    ||    ||  | |  ||  | |  ||    ||    ||   ||  |\n");
		printf(" |                        | |  ||  | |                       |\n");
		printf(" |________________________|_|__||__|_|_______________________|\n");
		printf("\n\n   0      0     \\0/     0      0      0     \\0/     0      0 \n");
		printf("  /|\\    /|\\     |     /|\\    /|\\    /|\\     |     /|\\    /|\\\n");
		printf("  /\\     /\\     /\\     /\\     /\\     /\\     /\\     /\\     /\\\n");
		Sleep(150);
		CLS;
		count = count + 1;

		printf("                  _______    _______    __     __\n");
		printf("                 |  _____|  |__   __|  |   \\   | |\n");
		printf("                 |  |____      | |     |  | \\  | |\n");
		printf("                 |   ____|     | |     |  |\\ \\ | |\n");
		printf("                 |  |        __| |__   |  | \\\    |\n");
		printf("                 |__|       |_______|  |__|  \\___|\n\n");

		printf("                                |\\__\n");
		printf("                                | \\  \\___\n");
		printf("                                | __/_/\n");
		printf("                                |/\n");
		printf("                                |\n");
		printf("                               _|_\n");
		printf("                              / | \\\n");
		printf("                             /  /  \\\n");
		printf("                            /  / \\  \\\n");
		printf("      __  __  __           /__/___\\__\\          __  __  __\n");
		printf("      |  |  |  |            \\       /           |  |  |  |\n");
		printf("      |        |            |  /\\  |            |        |\n");
		printf("       \\  /\\  /             | |__| |             \\  /\\  /\n");
		printf("       | |__| |             |  ||  |             | |__| |\n");
		printf("       |  ||  |             |  ||  |             |  ||  |\n");
		printf("    __/       \\_____/\\_____/       \\_____/\\_____/       \\__\n");
		printf("   /_______________/  \\___/_________\\___/  \\_______________\\\n");
		printf("  /_______________/    \\__|          |_/    \\_______________\\\n");
		printf(" |_______________|______|_|    /\\    |_|_____|_______________|\n");
		printf(" |________________________|   /||\\   |_______________________|\n");
		printf(" | ||   ||   ||   ||      |  / || \\  |     ||   ||   ||   || |\n");
		printf(" |   ||   ||    ||    ||  | |  ||  | |  ||    ||    ||   ||  |\n");
		printf(" |                        | |  ||  | |                       |\n");
		printf(" |________________________|_|__||__|_|_______________________|\n");
		printf("\n\n   0      0      0     \\0/     0      0      0     \\0/     0 \n");
		printf("  /|\\    /|\\    /|\\     |     /|\\    /|\\    /|\\     |     /|\\\n");
		printf("  /\\     /\\     /\\     /\\     /\\     /\\     /\\     /\\     /\\\n");
		Sleep(150);
		CLS;
		count = count + 1;

		printf("                  _______    _______    __     __\n");
		printf("                 |  _____|  |__   __|  |   \\   | |\n");
		printf("                 |  |____      | |     |  | \\  | |\n");
		printf("                 |   ____|     | |     |  |\\ \\ | |\n");
		printf("                 |  |        __| |__   |  | \\\    |\n");
		printf("                 |__|       |_______|  |__|  \\___|\n\n");

		printf("                                |\\__\n");
		printf("                                | \\  \\___\n");
		printf("                                | __/_/\n");
		printf("                                |/\n");
		printf("                                |\n");
		printf("                               _|_\n");
		printf("                              / | \\\n");
		printf("                             /  /  \\\n");
		printf("                            /  / \\  \\\n");
		printf("      __  __  __           /__/___\\__\\          __  __  __\n");
		printf("      |  |  |  |            \\       /           |  |  |  |\n");
		printf("      |        |            |  /\\  |            |        |\n");
		printf("       \\  /\\  /             | |__| |             \\  /\\  /\n");
		printf("       | |__| |             |  ||  |             | |__| |\n");
		printf("       |  ||  |             |  ||  |             |  ||  |\n");
		printf("    __/       \\_____/\\_____/       \\_____/\\_____/       \\__\n");
		printf("   /_______________/  \\___/_________\\___/  \\_______________\\\n");
		printf("  /_______________/    \\__|          |_/    \\_______________\\\n");
		printf(" |_______________|______|_|    /\\    |_|_____|_______________|\n");
		printf(" |________________________|   /||\\   |_______________________|\n");
		printf(" | ||   ||   ||   ||      |  / || \\  |     ||   ||   ||   || |\n");
		printf(" |   ||   ||    ||    ||  | |  ||  | |  ||    ||    ||   ||  |\n");
		printf(" |                        | |  ||  | |                       |\n");
		printf(" |________________________|_|__||__|_|_______________________|\n");
		printf("\n\n   0      0      0      0     \\0/     0      0      0     \\0/\n");
		printf("  /|\\    /|\\    /|\\    /|\\     |     /|\\     |     /|\\     | \n");
		printf("  /\\     /\\     /\\     /\\     /\\     /\\     /\\     /\\     /\\\n");
		Sleep(150);
		CLS;
		count = count + 1;

	} while (count < 30);
}


//BOSS ATTACK CALCULATION//
int bossAttackCalculation() {
	int bossAttackResult = 0;

	bossAttackResult = LB_BOSS_ATTACK_DAMAGE + rand() % (UB_BOSS_ATTACK_DAMAGE - LB_BOSS_ATTACK_DAMAGE + 1);

	return bossAttackResult;
}

//HERO ATTACK CALCULATION//
int heroAttackCalculation() {
	int heroAttackResult = 0;

	heroAttackResult = LB_HERO_ATTACK_DAMAGE + rand() % (UB_HERO_ATTACK_DAMAGE - LB_HERO_ATTACK_DAMAGE + 1);

	return heroAttackResult;
}

//HEAL DAMAGE CALCULATION//
int healDamageCalculation() {
	int healDamageResult = 0;

	healDamageResult = LB_HERO_HEAL_DAMAGE + rand() % (UB_HERO_HEAL_DAMAGE - LB_HERO_HEAL_DAMAGE + 1);

	return healDamageResult;
}

//MAIN FUNCTION//
int main() {

	int bossLaughingImage = 0;
	int bossWinsImage = 0;
	int victoryImage = 0;
	int bossHealth = 1000;
	int heroHealth = 1000;
	int heal = 0;
	int heroAttack = 0;
	int bossAttack = 0;
	int choice = 0;
	int count = 0;
	int i = 0;
	int j = 0;
	int tempAttack = 0;
	int tempHeal = 0;
	int temporaryValueForSorting = 0;
	int criticalAttackArray[5] = { 126, 143, 134, 125, 117, };
	int criticalHealArray[3][3] = {
		{ 115, 123, 137 },
		{ 151, 143, 160 },
		{ 170, 189, 199 }
	};
	srand((unsigned)time(NULL));

	//MENU//
	do {
		//DISPLAY BOSS//
		bossLaughingImage = displayLaughingBossImage();
		do {

			//MENU CHOICES//
			printf("ENEMY BOSS HEALTH IS %i\n", bossHealth);
			printf("HERO HEALTH IS %i\n\n", heroHealth);
			printf("***********King's Castle*****************\n");
			printf("1. GAME START / RESTART\n");
			printf("2. ATTACK BOSS\n");
			printf("3. HEAL\n");
			printf("4. Quit\n");
			printf("*****************************************\n\n");
			printf("Enter your choice: ");
			scanf("%i", &choice);

			switch (choice) {
			case 1:
				if (choice == 1) {
					bossHealth = 1000;
					heroHealth = 1000;
				}
				CLS;
				break;
			case 2:
				heroAttack = heroAttackCalculation();

				//BUBBLE SORT ARRAY FROM LOW TO HIGH//
				for (int i = 0; i < 5; i++) {
					for (int j = 0; j < 5; j++) {
						if (criticalAttackArray[j] > criticalAttackArray[i]) {
							temporaryValueForSorting = criticalAttackArray[i];			//Uses temporary variable for storing last value
							criticalAttackArray[i] = criticalAttackArray[j];				//replaces value
							criticalAttackArray[j] = temporaryValueForSorting;          //stores last value
						}
					}
				}

				//CRITICAL ATTACK ARRAY//
				for (i = 0; i < 5; i++) {
					if (criticalAttackArray[i] == heroAttack) {
						tempAttack = heroAttack;
						heroAttack = heroAttack * 2;
						printf("\nYOU DEALT A DOUBLE-DAMAGE CRITICAL HIT FOR A TOTAL OF %i INSTEAD OF %i!\n", heroAttack, tempAttack);
					}
				}

				bossHealth = bossHealth - heroAttack;

				//INPUT BOSS ATTACK//
				//AND DISPLAY HERO ATTACK//
				if (choice == 2) {
					bossAttack = bossAttackCalculation();
					heroHealth = heroHealth - bossAttack;
					printf("You dealt %i damage to the boss and took %i damage \n\n", heroAttack, bossAttack);
				}
				PAUSE;
				CLS;
				break;
			case 3:
				heal = healDamageCalculation();

				//CRITICAL HEAL ARRAY//
				for (i = 0; i < 3; i++) {
					for (j = 0; j < 3; j++) {
						if (criticalHealArray[i][j] == heal) {
							tempHeal = heal;
							heal = heal * 2;
							printf("\nYOU HEALED TWICE AS FAST, HEALING %i INSTEAD OF %i! \n", heal, tempHeal);
						}
					}
				}

				heroHealth = heroHealth + heal;


				//INPUT BOSS ATTACK//
				//AND DISPLAY AMOUNT HEALED//
				if (choice == 3) {
					bossAttack = bossAttackCalculation();
					heroHealth = heroHealth - bossAttack;
					printf("You healed %i damage and the boss dealt %i damage \n\n", heal, bossAttack);
				}
				PAUSE;
				CLS;
				break;
			case 4:
				CLS;
				Sleep(750);
				printf("\nTHE HERO GAVE UP AND WENT HOME \n");
				Sleep(1500);
				printf("...you should feel ashamed.\n\n");
				choice = 4;
				Sleep(1000);
				PAUSE;
				break;
			default:
				printf("\nINVALID CHOICE\n\n");
				choice = 4;
				PAUSE;
				break;
			}
		} while (heroHealth > 0 && bossHealth > 0 && choice != 4);

		//BOSS DEFEATS HERO ENDING//
		if (bossHealth > 0 && heroHealth <= 0) {
			choice = 4;
			bossWinsImage = displayBossWinsImage();
			printf("\n");
			printf("YOU FELL IN BATTLE...\n");
			Sleep(1500);
			printf("THE ENEMY BOSS GAVE A MOVING EULOGY AT YOUR FUNERAL. \n\n");
			Sleep(1000);
			PAUSE;
		}

		//HERO DEFEATS BOSS ENDING//
		if (bossHealth <= 0 && heroHealth > 0) {
			choice = 4;
			printf("ENEMY BOSS HEALTH IS %i\n", bossHealth);
			printf("HERO HEALTH IS %i\n\n", heroHealth);
			Sleep(500);
			printf("YOU BEAT THE BOSS!\n");
			printf("YOU WIN!\n\n");
			Sleep(1000);
			printf("PROCEED TO THE CASTLE!\n\n", heroHealth);
			PAUSE;
			CLS;
			victoryImage = displayVictoryImage();
			Sleep(500);
			PAUSE;
		}

		//BOSS AND HERO DEFEAT EACH OTHER-ENDS IN A TIE//
		if (bossHealth <= 0 && heroHealth <= 0) {
			choice = 4;
			printf("YOU DEFEATED THE BOSS!\n");
			Sleep(1000);
			printf("...but you also died in battle.\n\n");
			Sleep(500);
			printf("ENEMY BOSS HEALTH IS %i\n", bossHealth);
			printf("HERO HEALTH IS %i\n\n", heroHealth);
			PAUSE;
		}
		CLS;
	} while (choice != 4);
}