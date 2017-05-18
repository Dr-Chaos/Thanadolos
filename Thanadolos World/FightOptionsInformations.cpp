#include "Globals.h"
#include "FightOptionsInformations.hpp"

FightOptionsInformations::FightOptionsInformations(bool isSecret, bool isRestrictedToPartyOnly, bool isClosed, bool isAskingForHelp)
{
	this->isSecret = isSecret;
	this->isRestrictedToPartyOnly = isRestrictedToPartyOnly;
	this->isClosed = isClosed;
	this->isAskingForHelp = isAskingForHelp;

}

FightOptionsInformations::FightOptionsInformations()
{

}

ushort FightOptionsInformations::getId()
{
	return __id;
}

std::string FightOptionsInformations::getName()
{
	return "FightOptionsInformations";
}

void FightOptionsInformations::serialize(BinaryWriter& writer)
{
	int _loc2_ = 0;
	_loc2_ = BooleanByteWrapper::setFlag(_loc2_, 0, this->isSecret);
}

void FightOptionsInformations::deserialize(BinaryReader& reader)
{
	{
}