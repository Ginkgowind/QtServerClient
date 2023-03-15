#pragma once

// ∑¿÷π÷–Œƒ¬“¬Î
#ifdef WIN32  
#pragma execution_character_set("utf-8")  
#endif

class QTcpSocket;

class ConnectionManager
{
public:
	static ConnectionManager& getInstance() {
		static ConnectionManager instance;
		return instance;
	}

	QTcpSocket* getSocket() const { return m_socket; }

	bool connectToServer();
	void disconnectFromServer();

private:
	ConnectionManager();
	~ConnectionManager();

	QTcpSocket* m_socket;
};

#define GETSOCKET() ConnectionManager::getInstance().getSocket()
#define SERVERCONNECT() ConnectionManager::getInstance().connectToServer()
#define SERVERDISCONNECT() ConnectionManager::getInstance().disconnectFromServer()