// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "contactlink.h"

using namespace Tg;
using namespace Types;

Types::ContactLink::ContactLink(ContactLinkType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

Types::ContactLink::ContactLink(InboundPkt *in) :
    m_classType(typeContactLinkUnknown)
{
    fetch(in);
}

bool Types::ContactLink::operator ==(const ContactLink &b) {
    Q_UNUSED(b);
    return true;
}

void Types::ContactLink::setClassType(ContactLink::ContactLinkType classType) {
    m_classType = classType;
}

Types::ContactLink::ContactLinkType Types::ContactLink::classType() const {
    return m_classType;
}

bool Types::ContactLink::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeContactLinkUnknown: {
        m_classType = static_cast<ContactLinkType>(x);
        return true;
    }
        break;
    
    case typeContactLinkNone: {
        m_classType = static_cast<ContactLinkType>(x);
        return true;
    }
        break;
    
    case typeContactLinkHasPhone: {
        m_classType = static_cast<ContactLinkType>(x);
        return true;
    }
        break;
    
    case typeContactLinkContact: {
        m_classType = static_cast<ContactLinkType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool Types::ContactLink::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeContactLinkUnknown: {
        return true;
    }
        break;
    
    case typeContactLinkNone: {
        return true;
    }
        break;
    
    case typeContactLinkHasPhone: {
        return true;
    }
        break;
    
    case typeContactLinkContact: {
        return true;
    }
        break;
    
    default:
        return false;
    }
}

