/**
 * @ Author: Aska
 * @ Create Time: 2025-05-13 19:19:16
 * @ Modified by: Aska
 * @ Modified time: 2025-05-13 19:40:51
 */

#include "Base.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <typeinfo>

Base *generate(void)
{
	std::srand(std::time(NULL));
	int random = std::rand() % 3;

	switch (random)
	{
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return new C();
	}
	return NULL;
}

void identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "Type identifié via pointeur : A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "Type identifié via pointeur : B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "Type identifié via pointeur : C" << std::endl;
	else
		std::cout << "Type inconnu via pointeur" << std::endl;
}

void identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A &>(p);
		std::cout << "Type identifié via référence : A" << std::endl;
	}
	catch (std::bad_cast &)
	{
		try
		{
			(void)dynamic_cast<B &>(p);
			std::cout << "Type identifié via référence : B" << std::endl;
		}
		catch (std::bad_cast &)
		{
			try
			{
				(void)dynamic_cast<C &>(p);
				std::cout << "Type identifié via référence : C" << std::endl;
			}
			catch (std::bad_cast &)
			{
				std::cout << "Type inconnu via référence" << std::endl;
			}
		}
	}
}