// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef LQTG_TYPE_STICKERSET
#define LQTG_TYPE_STICKERSET

#include "telegramtypeobject.h"

#include <QMetaType>
#include <QtGlobal>
#include <QString>

class LIBQTELEGRAMSHARED_EXPORT StickerSet : public TelegramTypeObject
{
public:
    enum StickerSetType {
        typeStickerSet = 0xcd303b41
    };

    StickerSet(StickerSetType classType = typeStickerSet, InboundPkt *in = 0);
    StickerSet(InboundPkt *in);
    StickerSet(const Null&);
    virtual ~StickerSet();

    void setAccessHash(qint64 accessHash);
    qint64 accessHash() const;

    void setCount(qint32 count);
    qint32 count() const;

    void setDisabled(bool disabled);
    bool disabled() const;

    void setFlags(qint32 flags);
    qint32 flags() const;

    void setHash(qint32 hash);
    qint32 hash() const;

    void setId(qint64 id);
    qint64 id() const;

    void setInstalled(bool installed);
    bool installed() const;

    void setOfficial(bool official);
    bool official() const;

    void setShortName(const QString &shortName);
    QString shortName() const;

    void setTitle(const QString &title);
    QString title() const;

    void setClassType(StickerSetType classType);
    StickerSetType classType() const;

    bool fetch(InboundPkt *in);
    bool push(OutboundPkt *out) const;

    bool operator ==(const StickerSet &b) const;

    bool operator==(bool stt) const { return isNull() != stt; }
    bool operator!=(bool stt) const { return !operator ==(stt); }

private:
    qint64 m_accessHash;
    qint32 m_count;
    qint32 m_flags;
    qint32 m_hash;
    qint64 m_id;
    QString m_shortName;
    QString m_title;
    StickerSetType m_classType;
};

Q_DECLARE_METATYPE(StickerSet)

#endif // LQTG_TYPE_STICKERSET