// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "messagesaffectedmessages.h"

using namespace Tg;
using namespace Types;

Types::MessagesAffectedMessages::MessagesAffectedMessages(MessagesAffectedMessagesType classType, InboundPkt *in) :
    m_pts(0),
    m_ptsCount(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

Types::MessagesAffectedMessages::MessagesAffectedMessages(InboundPkt *in) :
    m_pts(0),
    m_ptsCount(0),
    m_classType(typeMessagesAffectedMessages)
{
    fetch(in);
}

void Types::MessagesAffectedMessages::setPts(qint32 pts) {
    m_pts = pts;
}

qint32 Types::MessagesAffectedMessages::pts() const {
    return m_pts;
}

void Types::MessagesAffectedMessages::setPtsCount(qint32 ptsCount) {
    m_ptsCount = ptsCount;
}

qint32 Types::MessagesAffectedMessages::ptsCount() const {
    return m_ptsCount;
}

bool Types::MessagesAffectedMessages::operator ==(const MessagesAffectedMessages &b) {
    return m_pts == b.m_pts &&
           m_ptsCount == b.m_ptsCount;
}

void Types::MessagesAffectedMessages::setClassType(MessagesAffectedMessages::MessagesAffectedMessagesType classType) {
    m_classType = classType;
}

Types::MessagesAffectedMessages::MessagesAffectedMessagesType Types::MessagesAffectedMessages::classType() const {
    return m_classType;
}

bool Types::MessagesAffectedMessages::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeMessagesAffectedMessages: {
        m_pts = in->fetchInt();
        m_ptsCount = in->fetchInt();
        m_classType = static_cast<MessagesAffectedMessagesType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool Types::MessagesAffectedMessages::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeMessagesAffectedMessages: {
        out->appendInt(m_pts);
        out->appendInt(m_ptsCount);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

