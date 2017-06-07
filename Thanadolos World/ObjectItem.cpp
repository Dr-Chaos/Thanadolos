#include "Globals.h"
#include "ObjectItem.hpp"

ObjectItem::ObjectItem(int position, int objectGID, std::vector<ObjectEffect*> effects, int objectUID, int quantity) : Item()
{
	this->position = position;
	this->objectGID = objectGID;
	this->effects = effects;
	this->objectUID = objectUID;
	this->quantity = quantity;

}

ObjectItem::ObjectItem()
{

}


ObjectItem::~ObjectItem()
{
	for (int i = 0; i < this->effects.size(); i++)
		delete this->effects[i];
}

ushort ObjectItem::getId()
{
	return __id;
}

std::string ObjectItem::getName()
{
	return "ObjectItem";
}

void ObjectItem::serialize(BinaryWriter& writer)
{
	Item::serialize(writer);
	writer.writeByte(this->position);
	while (_loc2_ < this->effects.size())
}

void ObjectItem::deserialize(BinaryReader& reader)
{
	{
		ObjectEffect *_loc5_ = new ObjectEffect();
		Item::deserialize(reader);
		while (_loc3_ < _loc2_)
}