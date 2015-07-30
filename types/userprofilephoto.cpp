// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "userprofilephoto.h"

using namespace Tg;
using namespace Types;

Types::UserProfilePhoto::UserProfilePhoto(UserProfilePhotoType classType, InboundPkt *in) :
    m_photoId(0),
    m_classType(classType)
{
    if(in) fetch(in);
}

Types::UserProfilePhoto::UserProfilePhoto(InboundPkt *in) :
    m_photoId(0),
    m_classType(typeUserProfilePhotoEmpty)
{
    fetch(in);
}

void Types::UserProfilePhoto::setPhotoBig(const FileLocation &photoBig) {
    m_photoBig = photoBig;
}

FileLocation Types::UserProfilePhoto::photoBig() const {
    return m_photoBig;
}

void Types::UserProfilePhoto::setPhotoId(qint64 photoId) {
    m_photoId = photoId;
}

qint64 Types::UserProfilePhoto::photoId() const {
    return m_photoId;
}

void Types::UserProfilePhoto::setPhotoSmall(const FileLocation &photoSmall) {
    m_photoSmall = photoSmall;
}

FileLocation Types::UserProfilePhoto::photoSmall() const {
    return m_photoSmall;
}

bool Types::UserProfilePhoto::operator ==(const UserProfilePhoto &b) {
    return m_photoBig == b.m_photoBig &&
           m_photoId == b.m_photoId &&
           m_photoSmall == b.m_photoSmall;
}

void Types::UserProfilePhoto::setClassType(UserProfilePhoto::UserProfilePhotoType classType) {
    m_classType = classType;
}

Types::UserProfilePhoto::UserProfilePhotoType Types::UserProfilePhoto::classType() const {
    return m_classType;
}

bool Types::UserProfilePhoto::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typeUserProfilePhotoEmpty: {
        m_classType = static_cast<UserProfilePhotoType>(x);
        return true;
    }
        break;
    
    case typeUserProfilePhoto: {
        m_photoId = in->fetchLong();
        m_photoSmall.fetch(in);
        m_photoBig.fetch(in);
        m_classType = static_cast<UserProfilePhotoType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool Types::UserProfilePhoto::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typeUserProfilePhotoEmpty: {
        return true;
    }
        break;
    
    case typeUserProfilePhoto: {
        out->appendLong(m_photoId);
        m_photoSmall.push(out);
        m_photoBig.push(out);
        return true;
    }
        break;
    
    default:
        return false;
    }
}

