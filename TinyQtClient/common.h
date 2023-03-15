#ifndef COMMON_H
#define COMMON_H

#include <string>
#include "nlohmann/json.hpp""
using json = nlohmann::json;
using string = std::string;

enum REQUEST_METHOD {
    SIGNUP = 0,
    LOGIN,
    SENDEMAIL,
};

enum REPONSE_RET {
    NO_USER = 0,
    LOGIN_OK,
    PASSWD_WRONG,
    EMAIL_CHANGED,
    EMAIL_SENT,
    VERIFYCODE_WRONG,
    SIGNUP_OK,
    EMAIL_ILLEGAL,
    MESSAGE_ERROR,
};

enum PAGE_INDEX {
    LOGIN_PAGE = 0,
    SIGNUP_PAGE,
    USER_PAGE
};

// Ϊʲôȥ��inline�ͺ��ˣ�����
class QTcpSocket;

namespace ns
{
    struct userinfo
    {
        string uid;
        string name;
        string password;
        string emailaddress;
    };

    // to_json �� from_json ��Ҫ��ͬһ�����ռ���
    void to_json(json& j, const userinfo& p);

    void from_json(const json& j, userinfo& p);
}

#endif // COMMON_H
