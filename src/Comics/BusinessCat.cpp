/**
 * Copyright (c) 2015 Damien Tardy-Panis
 *
 * This file is subject to the terms and conditions defined in
 * file 'LICENSE', which is part of this source code package.
 **/

#include "BusinessCat.h"

#include <QDebug>

BusinessCat::BusinessCat(QObject *parent) :
    Comic(parent)
{
    m_info.id = QString("businesscat");
}

QUrl BusinessCat::extractStripImageUrl(QByteArray data)
{
    return regexExtractStripImageUrl(data, "<img[^>]*src=\"([^\"]*/wp-content/uploads/[^\"]*)\"");
}
