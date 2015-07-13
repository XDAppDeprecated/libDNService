#pragma once

class DNConfigManager :
	virtual public DConfigManager
{
	DClass(DNConfigManager)
public:
	DNConfigManager();
	~DNConfigManager();
protected:
	virtual void Load() override;
	virtual void Save() override;
public:
	EVP_PKEY* LocalKey;
};

