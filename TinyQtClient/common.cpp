#include "common.h"
#include <QHostAddress>
#include <QTcpSocket>


namespace ns
{
    // to_json �� from_json ��Ҫ��ͬһ�����ռ���
    void to_json(json& j, const userinfo& p)
    {
        j["uid"] = p.uid;
        j["name"] = p.name;
        j["password"] = p.password;
        j["emailaddress"] = p.emailaddress;
    }

    void from_json(const json& j, userinfo& p)
    {
        j.at("uid").get_to(p.uid);
        j.at("name").get_to(p.name);
        j.at("password").get_to(p.password);
        j.at("emailaddress").get_to(p.emailaddress);
    }
}
