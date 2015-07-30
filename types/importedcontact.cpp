// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "importedcontact.h"

using namespace Tg;
using namespace Types;

Types::ImportedContact::ImportedContact(ImportedContactType classType, InboundPkt *in) :
    m_clientId(0),
    m_userId(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

Types::ImportedContact::ImportedContact(InboundPkt *in) :
    m_clientId(0),
    m_userId(0),
    m_classType(typeImportedContact)
{
    fetch(in);
}

void Types::ImportedContact::setClientId(qint64 clientId) {
    m_clientId = clientId;
}

qint64 Types::ImportedContact::clientId() const {
    return m_clientId;
}

void Types::ImportedContact::setUserId(qint32 userId) {
    m_userId = userId;
}

qint32 Types::ImportedContact::userId() const {
    return m_userId;
}

bool Types::ImportedContact::operator ==(const ImportedContact &b) {
    return m_clientId == b.m_clientId &&
           m_userId == b.m_userId;
}

void Types::ImportedContact::setClassType(ImportedContact::ImportedContactType classType) {
    m_classType = classType;
}

Types::ImportedContact::ImportedContactType Types::ImportedContact::classType() const {
    return m_classType;
}

bool Types::ImportedContact::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeImportedContact: {
        m_userId = in->fetchInt();
        m_clientId = in->fetchLong();
        m_classType = static_cast<ImportedContactType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool Types::ImportedContact::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeImportedContact: {
        out->appendInt(m_userId);
        out->appendLong(m_clientId);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

