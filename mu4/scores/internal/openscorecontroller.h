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
#ifndef MU_SCORES_OPENSCORECONTROLLER_H
#define MU_SCORES_OPENSCORECONTROLLER_H

#include <vector>

#include "../iopenscorecontroller.h"
#include "modularity/ioc.h"
#include "iinteractive.h"
#include "actions/iactionsdispatcher.h"
#include "actions/actionable.h"
#include "domain/notation/inotation.h"
#include "domain/notation/inotationcreator.h"
#include "context/iglobalcontext.h"
#include "ilauncher.h"

namespace mu {
namespace scores {
class OpenScoreController : public IOpenScoreController, public actions::Actionable
{
    INJECT(scores, actions::IActionsDispatcher, dispatcher)
    INJECT(scores, framework::IInteractive, interactive)
    INJECT(scores, framework::ILauncher, launcher)
    INJECT(scores, domain::notation::INotationCreator, notationCreator)
    INJECT(scores, context::IGlobalContext, globalContext)

public:
    OpenScoreController() = default;

    void init();

    void openScore() override;
    void importScore() override;

private:

    void doOpenScore(const QStringList& filter);
};
}
}

#endif // MU_SCORES_OPENSCORECONTROLLER_H
