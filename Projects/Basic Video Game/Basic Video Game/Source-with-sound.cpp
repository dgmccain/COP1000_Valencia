// Written By: David McCain & Ryan Scout Westerskov
// Date Written: 13 April 2018
// Purpose: Make a basic video game.

#define _CRT_SECURE_NO_WARNINGS
#define PAUSE system ("pause")
#define CLS system ("cls")

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//INCLUDE SOUND FILES//
#include <windows.h>
#include <windowsx.h>
#include <mmsystem.h>
#pragma comment (lib , "winmm.lib")

//CONSTANTS FOR ATTACK AND HEAL CALCULATIONS//
#define LB_HERO_ATTACK_DAMAGE 15
#define UB_HERO_ATTACK_DAMAGE 25
#define LB_HERO_HEAL_DAMAGE 10
#define UB_HERO_HEAL_DAMAGE 25
#define LB_BOSS_ATTACK_DAMAGE 15
#define UB_BOSS_ATTACK_DAMAGE 25

//BOSS ATTACK CALCULATION//
int bossAttackCalculation() {
	int bossAttackResult;

	bossAttackResult = LB_BOSS_ATTACK_DAMAGE + rand() % (UB_BOSS_ATTACK_DAMAGE - LB_HERO_ATTACK_DAMAGE + 1);

	return bossAttackResult;
}

//ARRAY OUTSIDE FUNCTION//

//MAIN FUNCTION//
int main() {
	//values for sound files//
	int argc;
	char *argv;

	int bossHealth = 100;
	int heroHealth = 100;
	int heal = 0;
	int heroAttack = 0;
	int bossAttack = 0;
	int choice = 0;
	int count = 0;
	srand((unsigned)time(NULL));

	//DISPLAY BOSS//
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
		printf("\n\n     DEFEAT ME IF YOU DARE HERO!!!\n\n");
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
		printf("\n\n      DEFEAT ME IF YOU DARE HERO!!!\n\n");
		Sleep(150);

		count = count + 1;
	} while (count < 10);

	PAUSE;
	CLS;

	//ARRAY HERE//

	//MENU//
	do {
		do {
			printf("ENEMY BOSS HEALTH IS %i\n", bossHealth);
			printf("HERO HEALTH IS %i\n\n", heroHealth);
			printf("********King's Castle**************\n");
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
					bossHealth = 100;
					heroHealth = 100;
				}
				CLS;
				break;
			case 2:
				heroAttack = LB_HERO_ATTACK_DAMAGE + rand() % (UB_HERO_ATTACK_DAMAGE - LB_HERO_ATTACK_DAMAGE + 1);
				bossHealth = bossHealth - heroAttack;
				//ARRAY (searching array)//
				CLS;
				break;
			case 3:
				heal = LB_HERO_HEAL_DAMAGE + rand() % (UB_HERO_HEAL_DAMAGE - LB_HERO_HEAL_DAMAGE + 1);
				heroHealth = heroHealth + heal;
				CLS;
				break;
			case 4:
				printf("\nTHE HERO GAVE UP... you should feel ashamed.\n\n");
				choice = 4;
				PAUSE;
				break;
			default:
				printf("\nINVALID CHOICE\n\n");
				choice = 4;
				PAUSE;
				break;
			}

			//INPUT BOSS ATTACK//
			if (choice != 1) {
				bossAttack = bossAttackCalculation();
				heroHealth = heroHealth - bossAttack;
			}

		} while (heroHealth > 0 && bossHealth > 0 && choice != 4);

		if (bossHealth >0 && heroHealth <= 0) {
			choice = 4;
			do {
				CLS;
				printf("      *****\n     *******\n     *******\n     ** * **\n     *  *  *\n     *  *  *\n     *******\n");
				printf("      *****\n      * * *\n      * * *\n\n");
				printf("ENEMY BOSS HEALTH IS %i\n", bossHealth);
				printf("HERO HEALTH IS %i\n\n", heroHealth);
				printf("YOU RAN OUT OF HEALTH AND DIED!\n");
				printf("YOU LOSE!\n\n");
				Sleep(150);
				CLS;
				printf("        *****\n       *******\n       *******\n       ** * **\n       *  *  *\n       *  *  *\n       *******\n");
				printf("        *****\n        * * *\n        * * *\n\n");
				printf("ENEMY BOSS HEALTH IS %i\n", bossHealth);
				printf("HERO HEALTH IS %i\n\n", heroHealth);
				printf("YOU RAN OUT OF HEALTH AND DIED!\n");
				printf("YOU LOSE!\n\n");
				Sleep(150);

				count = count + 1;
			} while (count < 20);
			PAUSE;
		}
		if (bossHealth <= 0 && heroHealth > 0) {
			choice = 4;
			printf("YOU BEAT THE BOSS!\n");
			printf("YOU WIN!\n\n");
			printf("ENEMY BOSS HEALTH IS %i\n", bossHealth);
			printf("HERO HEALTH IS %i\n\n", heroHealth);
			PlaySound("C:\\Users\\david\\Downloads\\Victory_Theme.wav", NULL, SND_SYNC | SND_LOOP | SND_FILENAME); //sound file
			PAUSE;
		}
		if (bossHealth <= 0 && heroHealth <= 0) {
			choice = 4;
			printf("YOU DEFEATED THE BOSS!\n");
			PlaySound("C:\\Users\\david\\Downloads\\Victory_Theme.wav", NULL, SND_SYNC | SND_LOOP | SND_FILENAME); //sound file
			Sleep(500);
			printf("...but you also died in battle.\n\n");
			printf("ENEMY BOSS HEALTH IS %i\n", bossHealth);
			printf("HERO HEALTH IS %i\n\n", heroHealth);
			PAUSE;
		}
		CLS;
	} while (choice != 4);
}