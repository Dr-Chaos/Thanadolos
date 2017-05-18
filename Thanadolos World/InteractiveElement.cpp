#include "Globals.h"
#include "InteractiveElement.hpp"

InteractiveElement::InteractiveElement(int elementId, int elementTypeId, std::vector<InteractiveElementSkill> enabledSkills, std::vector<InteractiveElementSkill> disabledSkills, bool onCurrentMap)
{
	this->elementId = elementId;
	this->elementTypeId = elementTypeId;
	this->enabledSkills = enabledSkills;
	this->disabledSkills = disabledSkills;
	this->onCurrentMap = onCurrentMap;

}

InteractiveElement::InteractiveElement()
{

}

ushort InteractiveElement::getId()
{
	return __id;
}

std::string InteractiveElement::getName()
{
	return "InteractiveElement";
}

void InteractiveElement::serialize(BinaryWriter& writer)
{
	writer.writeInt(this->elementId);
	while (_loc2_ < this->enabledSkills.size())
	while (_loc3_ < this->disabledSkills.size())
}

void InteractiveElement::deserialize(BinaryReader& reader)
{
	{
		InteractiveElementSkill _loc7_;
		int _loc8_ = 0;
		InteractiveElementSkill _loc9_;
		this->elementId = reader.readInt();
		while (_loc3_ < _loc2_)
		while (_loc5_ < _loc4_)
}