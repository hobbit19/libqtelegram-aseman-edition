// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "chatinvite.h"

using namespace Tg;
using namespace Types;

Types::ChatInvite::ChatInvite(ChatInviteType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

Types::ChatInvite::ChatInvite(InboundPkt *in) :
    m_classType(typeChatInviteAlready)
{
    fetch(in);
}

void Types::ChatInvite::setChat(const Chat &chat) {
    m_chat = chat;
}

Chat Types::ChatInvite::chat() const {
    return m_chat;
}

void Types::ChatInvite::setTitle(const QString &title) {
    m_title = title;
}

QString Types::ChatInvite::title() const {
    return m_title;
}

bool Types::ChatInvite::operator ==(const ChatInvite &b) {
    return m_chat == b.m_chat &&
           m_title == b.m_title;
}

void Types::ChatInvite::setClassType(ChatInvite::ChatInviteType classType) {
    m_classType = classType;
}

Types::ChatInvite::ChatInviteType Types::ChatInvite::classType() const {
    return m_classType;
}

bool Types::ChatInvite::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeChatInviteAlready: {
        m_chat.fetch(in);
        m_classType = static_cast<ChatInviteType>(x);
        return true;
    }
        break;
    
    case typeChatInvite: {
        m_title = in->fetchQString();
        m_classType = static_cast<ChatInviteType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool Types::ChatInvite::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeChatInviteAlready: {
        m_chat.push(out);
        return true;
    }
        break;
    
    case typeChatInvite: {
        out->appendQString(m_title);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

