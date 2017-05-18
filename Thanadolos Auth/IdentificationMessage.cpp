#include "IdentificationMessage.hpp"

IdentificationMessage::IdentificationMessage(VersionExtended version, std::string lang, ByteArray credentials, int serverId, bool autoconnect, bool useCertificate, bool useLoginToken, int sessionOptionalSalt, std::vector<uint> failedAttempts)
{
	this->version = version;
	this->lang = lang;
	this->credentials = credentials;
	this->serverId = serverId;
	this->autoconnect = autoconnect;
	this->useCertificate = useCertificate;
	this->useLoginToken = useLoginToken;
	this->sessionOptionalSalt = sessionOptionalSalt;
	this->failedAttempts = failedAttempts;

}

IdentificationMessage::IdentificationMessage()
{

}

ushort IdentificationMessage::getId()
{
	return id;
}

std::string IdentificationMessage::getName()
{
	return "IdentificationMessage";
}

void IdentificationMessage::serialize(BinaryWriter& writer)
{
	int _loc2_ = 0;
	_loc2_ = BooleanByteWrapper::setFlag(_loc2_, 0, this->autoconnect);
	writer.writeUTF(this->lang);
	while (_loc4_ < this->failedAttempts.size())
}

void IdentificationMessage::deserialize(BinaryReader& reader)
{
	{
		int _loc8_ = 0;
		int _loc2_ = reader.readByte();
		while (_loc4_ < _loc3_)
		while (_loc6_ < _loc5_)
}