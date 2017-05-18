#include "Globals.h"
#include "GameMapMovementMessage.hpp"

GameMapMovementMessage::GameMapMovementMessage(std::vector<uint> keyMovements, int forcedDirection, int actorId)
{
	this->keyMovements = keyMovements;
	this->actorId = actorId;

}

GameMapMovementMessage::GameMapMovementMessage()
{

}

ushort GameMapMovementMessage::getId()
{
	return id;
}

std::string GameMapMovementMessage::getName()
{
	return "GameMapMovementMessage";
}

void GameMapMovementMessage::serialize(BinaryWriter& writer)
{
	writer.writeShort(this->keyMovements.size());
	while (_loc2_ < this->keyMovements.size())
}

void GameMapMovementMessage::deserialize(BinaryReader& reader)
{
	{
		int _loc2_ = reader.readUnsignedShort();
		while (_loc3_ < _loc2_)
}