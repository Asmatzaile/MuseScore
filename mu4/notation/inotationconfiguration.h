//=============================================================================
//  MuseScore
//  Music Composition & Notation
//
//  Copyright (C) 2020 MuseScore BVBA and others
//
//  This program is free software; you can redistribute it and/or modify
//  it under the terms of the GNU General Public License version 2.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
//=============================================================================
#ifndef MU_NOTATION_INOTATIONCONFIGURATION_H
#define MU_NOTATION_INOTATIONCONFIGURATION_H

#include <QColor>

#include "modularity/imoduleexport.h"
#include "async/channel.h"
#include "retval.h"

namespace mu {
namespace notation {
class INotationConfiguration : MODULE_EXPORT_INTERFACE
{
    INTERFACE_ID(INotationConfiguration)

public:
    virtual ~INotationConfiguration() = default;

    virtual QColor anchorLineColor() const = 0;

    virtual QColor backgroundColor() const = 0;
    virtual async::Channel<QColor> backgroundColorChanged() const = 0;

    virtual QColor defaultForegroundColor() const = 0;
    virtual QColor foregroundColor() const = 0;
    virtual async::Channel<QColor> foregroundColorChanged() const = 0;

    virtual QColor playbackCursorColor() const = 0;

    virtual int selectionProximity() const = 0;

    virtual ValCh<int> currentZoom() const = 0;
    virtual void setCurrentZoom(int zoomPercentage) = 0;

    virtual int fontSize() const = 0;

    virtual QString stylesDirPath() const = 0;
};
}
}

#endif // MU_NOTATION_INOTATIONCONFIGURATION_H
