/**
 * @ Author: Aska
 * @ Create Time: 2025-05-13 17:24:40
 * @ Modified by: Aska
 * @ Modified time: 2025-05-13 17:33:33
 */

#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::~Serializer() {}

Serializer::Serializer(const Serializer &) {}

Serializer &Serializer::operator=(const Serializer &)
{
	return *this;
}

uintptr_t Serializer::serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}