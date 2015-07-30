// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "photosphoto.h"

using namespace Tg;
using namespace Types;

Types::PhotosPhoto::PhotosPhoto(PhotosPhotoType classType, InboundPkt *in) :
    m_classType(classType)
{
    if(in) fetch(in);
}

Types::PhotosPhoto::PhotosPhoto(InboundPkt *in) :
    m_classType(typePhotosPhoto)
{
    fetch(in);
}

void Types::PhotosPhoto::setPhoto(const Photo &photo) {
    m_photo = photo;
}

Photo Types::PhotosPhoto::photo() const {
    return m_photo;
}

void Types::PhotosPhoto::setUsers(const QList<User> &users) {
    m_users = users;
}

QList<User> Types::PhotosPhoto::users() const {
    return m_users;
}

bool Types::PhotosPhoto::operator ==(const PhotosPhoto &b) {
    return m_photo == b.m_photo &&
           m_users == b.m_users;
}

void Types::PhotosPhoto::setClassType(PhotosPhoto::PhotosPhotoType classType) {
    m_classType = classType;
}

Types::PhotosPhoto::PhotosPhotoType Types::PhotosPhoto::classType() const {
    return m_classType;
}

bool Types::PhotosPhoto::fetch(InboundPkt *in) {
    LQTG_FETCH_LOG;
    int x = in->fetchInt();
    switch(x) {
    case typePhotosPhoto: {
        m_photo.fetch(in);
        if(in->fetchInt() != (qint32)TL_Vector) return false;
        qint32 m_users_length = in->fetchInt();
        m_users.clear();
        for (qint32 i = 0; i < m_users_length; i++) {
            User type;
            type.fetch(in);
            m_users.append(type);
        }
        m_classType = static_cast<PhotosPhotoType>(x);
        return true;
    }
        break;
    
    default:
        LQTG_FETCH_ASSERT;
        return false;
    }
}

bool Types::PhotosPhoto::push(OutboundPkt *out) const {
    out->appendInt(m_classType);
    switch(m_classType) {
    case typePhotosPhoto: {
        m_photo.push(out);
        out->appendInt(TL_Vector);
        out->appendInt(m_users.count());
        for (qint32 i = 0; i < m_users.count(); i++) {
            m_users[i].push(out);
        }
        return true;
    }
        break;
    
    default:
        return false;
    }
}

