#include "ConnectionManager.h"
#include <QHostAddress>
#include <QTcpSocket>

bool ConnectionManager::connectToServer()
{
    if (m_socket->state() != QTcpSocket::ConnectedState) {
        QString addr = "127.0.0.1";
        qint16 port = 9008;
        m_socket->connectToHost(addr, port);

        return m_socket->waitForConnected();
    }

    return true;
}

void ConnectionManager::disconnectFromServer()
{
    if (m_socket->state() == QTcpSocket::ConnectedState) {
        m_socket->disconnectFromHost();
        m_socket->waitForDisconnected();
    }
}

ConnectionManager::ConnectionManager()// : m_socket(nullptr)
{
    m_socket = new QTcpSocket;
}

ConnectionManager::~ConnectionManager()
{
	delete m_socket;
}
