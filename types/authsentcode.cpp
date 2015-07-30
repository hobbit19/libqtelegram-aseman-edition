// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "authsentcode.h"

using namespace Tg;
using namespace Types;

Types::AuthSentCode::AuthSentCode(AuthSentCodeType classType, InboundPkt *in) :
    m_isPassword(false),
    m_phoneRegistered(false),
    m_sendCallTimeout(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

Types::AuthSentCode::AuthSentCode(InboundPkt *in) :
    m_isPassword(false),
    m_phoneRegistered(false),
    m_sendCallTimeout(0),
    m_classType(typeAuthSentCode)
{
    fetch(in);
}

void Types::AuthSentCode::setIsPassword(bool isPassword) {
    m_isPassword = isPassword;
}

bool Types::AuthSentCode::isPassword() const {
    return m_isPassword;
}

void Types::AuthSentCode::setPhoneCodeHash(const QString &phoneCodeHash) {
    m_phoneCodeHash = phoneCodeHash;
}

QString Types::AuthSentCode::phoneCodeHash() const {
    return m_phoneCodeHash;
}

void Types::AuthSentCode::setPhoneRegistered(bool phoneRegistered) {
    m_phoneRegistered = phoneRegistered;
}

bool Types::AuthSentCode::phoneRegistered() const {
    return m_phoneRegistered;
}

void Types::AuthSentCode::setSendCallTimeout(qint32 sendCallTimeout) {
    m_sendCallTimeout = sendCallTimeout;
}

qint32 Types::AuthSentCode::sendCallTimeout() const {
    return m_sendCallTimeout;
}

bool Types::AuthSentCode::operator ==(const AuthSentCode &b) {
    return m_isPassword == b.m_isPassword &&
           m_phoneCodeHash == b.m_phoneCodeHash &&
           m_phoneRegistered == b.m_phoneRegistered &&
           m_sendCallTimeout == b.m_sendCallTimeout;
}

void Types::AuthSentCode::setClassType(AuthSentCode::AuthSentCodeType classType) {
    m_classType = classType;
}

Types::AuthSentCode::AuthSentCodeType Types::AuthSentCode::classType() const {
    return m_classType;
}

bool Types::AuthSentCode::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeAuthSentCode: {
        m_phoneRegistered = in->fetchBool();
        m_phoneCodeHash = in->fetchQString();
        m_sendCallTimeout = in->fetchInt();
        m_isPassword = in->fetchBool();
        m_classType = static_cast<AuthSentCodeType>(x);
        return true;
    }
        break;
    
    case typeAuthSentAppCode: {
        m_phoneRegistered = in->fetchBool();
        m_phoneCodeHash = in->fetchQString();
        m_sendCallTimeout = in->fetchInt();
        m_isPassword = in->fetchBool();
        m_classType = static_cast<AuthSentCodeType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool Types::AuthSentCode::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeAuthSentCode: {
        out->appendBool(m_phoneRegistered);
        out->appendQString(m_phoneCodeHash);
        out->appendInt(m_sendCallTimeout);
        out->appendBool(m_isPassword);
        return true;
    }
        break;
    
    case typeAuthSentAppCode: {
        out->appendBool(m_phoneRegistered);
        out->appendQString(m_phoneCodeHash);
        out->appendInt(m_sendCallTimeout);
        out->appendBool(m_isPassword);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

