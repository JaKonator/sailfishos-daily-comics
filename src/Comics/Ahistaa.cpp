/**
 * Copyright (c) 2015 Damien Tardy-Panis
 *
 * This file is subject to the terms and conditions defined in
 * file 'LICENSE', which is part of this source code package.
 **/

#include "Ahistaa.h"

#include <QDebug>

Ahistaa::Ahistaa(QObject *parent) :
    Comic(parent)
{
    m_info.id = QString("ahistaa");
}

QUrl Ahistaa::extractStripImageUrl(QByteArray data)
{
    return regexExtractStripImageUrl(data, "&lt;img[^&]*src=\"([^\"]*media.tumblr.com/[^\"]*)\"");
}
