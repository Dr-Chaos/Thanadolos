#include "Globals.h"
#include "EntityDispositionInformations.hpp"

EntityDispositionInformations::EntityDispositionInformations(int cellId, int direction)
{
	this->cellId = cellId;
	this->direction = direction;

}

EntityDispositionInformations::EntityDispositionInformations()
{

}

ushort EntityDispositionInformations::getId()
{
	return __id;
}

std::string EntityDispositionInformations::getName()
{
	return "EntityDispositionInformations";
}

void EntityDispositionInformations::serialize(BinaryWriter& writer)
{
	writer.writeShort(this->cellId);
}

void EntityDispositionInformations::deserialize(BinaryReader& reader)
{
	{
}