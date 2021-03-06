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
#include "commonscenemodule.h"

#include <QtQml>
#include "modularity/ioc.h"

#include "playtoolbarmodel.h"

using namespace mu::scene::common;

std::string CommonSceneModule::moduleName() const
{
    return "common_scene";
}

void CommonSceneModule::registerExports()
{
}

void CommonSceneModule::resolveImports()
{
}

void CommonSceneModule::registerResources()
{
}

void CommonSceneModule::registerUiTypes()
{
    qmlRegisterType<PlayToolBarModel>("MuseScore.CommonScene", 1, 0, "PlayToolBarModel");
}
