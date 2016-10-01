/**
 * Copyright (c) 2015 Damien Tardy-Panis
 *
 * This file is subject to the terms and conditions defined in
 * file 'LICENSE', which is part of this source code package.
 **/

#include "RabbitualOffender.h"

#include <QDebug>

RabbitualOffender::RabbitualOffender(QObject *parent) :
    Comic(parent)
{
    m_info.id = QString("rabbitualoffender");
}

QUrl RabbitualOffender::extractStripImageUrl(QByteArray data)
{
    return regexExtractStripImageUrl(data, "<img[^>]*src=\"([^\"]*media.tumblr.com/[^\"]*)\"", 2);
}
