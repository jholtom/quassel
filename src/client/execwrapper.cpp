/***************************************************************************
 *   Copyright (C) 2005-2019 by the Quassel Project                        *
 *   devel@quassel-irc.org                                                 *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) version 3.                                           *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.         *
 ***************************************************************************/

#include "execwrapper.h"

#include <QFile>
#include <QTextCodec>

#include "client.h"
#include "messagemodel.h"
#include "quassel.h"
#include "util.h"

ExecWrapper::ExecWrapper(QObject* parent)
    : QObject(parent)
{
}

void ExecWrapper::start(const BufferInfo& info, const QString& command)
{
    // You can't really execute scripts on iOS
    deleteLater();  // self-destruct
}

void ExecWrapper::postStdout(const QString& msg)
{
}

void ExecWrapper::postStderr(const QString& msg)
{
}

void ExecWrapper::processFinished(int exitCode)
{
	// You can't really execute scripts on iOS    

    deleteLater();
}

void ExecWrapper::processError()
{
// No errors because you can never run a script
}

void ExecWrapper::processReadStdout()
{
}

void ExecWrapper::processReadStderr()
{
}
