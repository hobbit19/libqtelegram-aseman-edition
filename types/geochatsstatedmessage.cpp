// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "geochatsstatedmessage.h"

using namespace Tg;
using namespace Types;

Types::GeochatsStatedMessage::GeochatsStatedMessage(GeochatsStatedMessageType classType, InboundPkt *in) :
    m_seq(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

Types::GeochatsStatedMessage::GeochatsStatedMessage(InboundPkt *in) :
    m_seq(0),
    m_classType(typeGeochatsStatedMessage)
{
    fetch(in);
}

void Types::GeochatsStatedMessage::setChats(const QList<Chat> &chats) {
    m_chats = chats;
}

QList<Chat> Types::GeochatsStatedMessage::chats() const {
    return m_chats;
}

void Types::GeochatsStatedMessage::setMessage(const GeoChatMessage &message) {
    m_message = message;
}

GeoChatMessage Types::GeochatsStatedMessage::message() const {
    return m_message;
}

void Types::GeochatsStatedMessage::setSeq(qint32 seq) {
    m_seq = seq;
}

qint32 Types::GeochatsStatedMessage::seq() const {
    return m_seq;
}

void Types::GeochatsStatedMessage::setUsers(const QList<User> &users) {
    m_users = users;
}

QList<User> Types::GeochatsStatedMessage::users() const {
    return m_users;
}

bool Types::GeochatsStatedMessage::operator ==(const GeochatsStatedMessage &b) {
    return m_chats == b.m_chats &&
           m_message == b.m_message &&
           m_seq == b.m_seq &&
           m_users == b.m_users;
}

void Types::GeochatsStatedMessage::setClassType(GeochatsStatedMessage::GeochatsStatedMessageType classType) {
    m_classType = classType;
}

Types::GeochatsStatedMessage::GeochatsStatedMessageType Types::GeochatsStatedMessage::classType() const {
    return m_classType;
}

bool Types::GeochatsStatedMessage::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeGeochatsStatedMessage: {
        m_message.fetch(in);
        if(in->fetchInt() != (qint32)TL_Vector) return false;
        qint32 m_chats_length = in->fetchInt();
        m_chats.clear();
        for (qint32 i = 0; i < m_chats_length; i++) {
            Chat type;
            type.fetch(in);
            m_chats.append(type);
        }
        if(in->fetchInt() != (qint32)TL_Vector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            User type;
            type.fetch(in);
            m_users.append(type);
        }
        m_seq = in->fetchInt();
        m_classType = static_cast<GeochatsStatedMessageType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool Types::GeochatsStatedMessage::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeGeochatsStatedMessage: {
        m_message.push(out);
        out->appendInt(TL_Vector);
        out->appendInt(m_chats.count());
        for (qint32 i = 0; i < m_chats.count(); i++) {
            m_chats[i].push(out);
        }
        out->appendInt(TL_Vector);
        out->appendInt(m_users.count());
        for (qint32 i = 0; i < m_users.count(); i++) {
            m_users[i].push(out);
        }
        out->appendInt(m_seq);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

