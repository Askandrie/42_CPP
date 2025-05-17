/**
 * @ Author: Aska
 * @ Create Time: 2025-05-12 23:24:52
 * @ Modified by: Aska
 * @ Modified time: 2025-05-13 17:40:31
 */

#include "Serializer.hpp"
#include <iostream>

int main()
{
	Data data;
	data.i   = 42;
	data.c   = 'A';
	data.str = "Hello, World!";
	data.f   = 3.14f;
	data.d   = 2.71828;

	std::cout << "Valeur de data : " << std::endl;
	std::cout << "i : " << data.i << std::endl;
	std::cout << "c : " << data.c << std::endl;
	std::cout << "str : " << data.str << std::endl;
	std::cout << "f : " << data.f << std::endl;
	std::cout << "d : " << data.d << std::endl;

	std::cout << "Adresse originale de data : " << &data << std::endl;

	uintptr_t raw = Serializer::serialize(&data);
	std::cout << "Adresse serialisée en uintptr_t : " << raw << std::endl;

	Data *deserialized = Serializer::deserialize(raw);
	std::cout << "Adresse désérialisée en Data* : " << deserialized << std::endl;

	if (&data == deserialized)
	{
		std::cout << "✅ La sérialisation/désérialisation fonctionne parfaitement !" << std::endl;
	}
	else
	{
		std::cout << "❌ Erreur dans la sérialisation/désérialisation." << std::endl;
	}

	std::cout << "Valeur vérifiée : " << deserialized->i << ", caractère : " << deserialized->c << "chaine :" << deserialized->str << ", float : " << deserialized->f << ", double : " << deserialized->d << std::endl;

	return 0;
}