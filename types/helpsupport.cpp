// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "helpsupport.h"

using namespace Tg;
using namespace Types;

Types::HelpSupport::HelpSupport(HelpSupportType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

Types::HelpSupport::HelpSupport(InboundPkt *in) :
    m_classType(typeHelpSupport)
{
    fetch(in);
}

void Types::HelpSupport::setPhoneNumber(const QString &phoneNumber) {
    m_phoneNumber = phoneNumber;
}

QString Types::HelpSupport::phoneNumber() const {
    return m_phoneNumber;
}

void Types::HelpSupport::setUser(const User &user) {
    m_user = user;
}

User Types::HelpSupport::user() const {
    return m_user;
}

bool Types::HelpSupport::operator ==(const HelpSupport &b) {
    return m_phoneNumber == b.m_phoneNumber &&
           m_user == b.m_user;
}

void Types::HelpSupport::setClassType(HelpSupport::HelpSupportType classType) {
    m_classType = classType;
}

Types::HelpSupport::HelpSupportType Types::HelpSupport::classType() const {
    return m_classType;
}

bool Types::HelpSupport::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeHelpSupport: {
        m_phoneNumber = in->fetchQString();
        m_user.fetch(in);
        m_classType = static_cast<HelpSupportType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool Types::HelpSupport::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeHelpSupport: {
        out->appendQString(m_phoneNumber);
        m_user.push(out);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

