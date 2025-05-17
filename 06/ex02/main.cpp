/**
 * @ Author: Aska
 * @ Create Time: 2025-05-13 19:36:31
 * @ Modified by: Aska
 * @ Modified time: 2025-05-13 19:36:41
 */

#include "Base.hpp"
#include <iostream>

Base *generate(void);
void  identify(Base *p);
void  identify(Base &p);

int main()
{
	Base *instance = generate();

	identify(instance);  // identification par pointeur
	identify(*instance); // identification par référence

	delete instance; // ne pas oublier la libération mémoire !
	return 0;
}