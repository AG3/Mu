/*
 * Copyright (C) Kreogist Dev Team
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */
#ifndef KNPREFERENCETITLE_H
#define KNPREFERENCETITLE_H

#include <QWidget>

class QLabel;
class KNPreferenceHeaderButton;
class KNPreferenceTitle : public QWidget
{
    Q_OBJECT
public:
    explicit KNPreferenceTitle(QWidget *parent = 0);

signals:
    void requireHidePreference();

public slots:
    void setTitleText(const QString &caption);
    void setTitleIcon(const QPixmap &icon);

protected:
    void resizeEvent(QResizeEvent *event);

private:
    QLabel *m_title;
    KNPreferenceHeaderButton *m_headerButton;
    int m_titleX=93;
};

#endif // KNPREFERENCETITLE_H
