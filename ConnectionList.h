#pragma once
#include "Connection.h"
#include <vector>
#include <fstream>

class ConnectionList
{

private:
	vector <Connection*> list;

public:
	ConnectionList();
	~ConnectionList();
	void loadConnections(ifstream& file);
	vector <Connection*> getList();


};
