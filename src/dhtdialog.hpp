/*
    Copyright (C) 2013 by Maxim Biro <nurupo.contributions@gmail.com>
    
    This file is part of Tox Qt GUI.
    
    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.
    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
    
    See the COPYING file for more details.
*/

#ifndef DHTDIALOG_HPP
#define DHTDIALOG_HPP

#include "Settings/settings.hpp"

#include <QDialog>
#include <QComboBox>
#include <QCheckBox>
#include <QStandardItemModel>

class DhtDialog : public QDialog
{
    Q_OBJECT
public:
    explicit DhtDialog(QWidget* parent = 0);

private:
    QComboBox* serverComboBox;
    QCheckBox* dontShowCheckBox;
    QStandardItemModel* serverModel;

    QList<Settings::DhtServer> modifiedServerList;
    
signals:
    
public slots:
    void accept();
    void reject();

private slots:
    void addButtonClicked();
    void editButtonClicked();
    void removeButtonClicked();
    
};

#endif // DHTDIALOG_HPP
