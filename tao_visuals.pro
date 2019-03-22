# ******************************************************************************
# tao_visuals.pro                                                  Tao3D project
# ******************************************************************************
#
# File description:
# Qt build file for the TaoVisuals module
#
# TaoVisuals is a collection of pictures and logos related to Tao3D
#
#
#
#
#
# ******************************************************************************
# This software is licensed under the GNU General Public License v3
# (C) 2011-2012, Catherine Burvelle <catherine@taodyne.com>
# (C) 2011-2012,2014,2019, Christophe de Dinechin <christophe@dinechin.org>
# (C) 2011-2012, Jérôme Forissier <jerome@taodyne.com>
# (C) 2011-2012, Soulisse Baptiste <baptiste.soulisse@taodyne.com>
# ******************************************************************************
# This file is part of Tao3D
#
# Tao3D is free software: you can r redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# Tao3D is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with Tao3D, in a file named COPYING.
# If not, see <https://www.gnu.org/licenses/>.
# ******************************************************************************

MODINSTDIR = tao_visuals

include(../modules.pri)

OTHER_FILES = tao_visuals.xl \
    images/Taodyne_picto.svg \
    images/Taodyne_picto.png \
    images/Taodyne_logo.svg \
    images/Taodyne_logo.png \
    images/Taodyne_icon.svg \
    images/Taodyne_icon.png \
    images/Taodyne_geeks_en.svg \
    images/Taodyne_geeks_en.png \
    images/Taodyne_dev_fr.svg \
    images/Taodyne_dev_fr.png \
    images/Taodyne_dev_en.svg \
    images/Taodyne_dev_en.png \
    doc/tao_visuals.png \
    doc/tao_visuals.ddd \
    icon.png

PICTURES = \
    images/Taodyne_dev_en.png \
    images/Taodyne_dev_en.svg \
    images/Taodyne_dev_fr.png \
    images/Taodyne_dev_fr.svg \
    images/Taodyne_geeks_en.png \
    images/Taodyne_geeks_en.svg \
    images/Taodyne_icon.png \
    images/Taodyne_icon.svg \
    images/Taodyne_logo.png \
    images/Taodyne_logo.svg \
    images/Taodyne_picto.png \
    images/Taodyne_picto.svg \
    $$NULL

pics.path  = $$MODINSTPATH/images
pics.files = $$PICTURES

INSTALLS    += thismod_icon pics
INSTALLS    -= thismod_bin

HEADERS += \
    doc/tao_visuals.doxy.h

QMAKE_SUBSTITUTES = doc/Doxyfile.in
DOXYFILE = doc/Doxyfile
DOXYLANG = en,fr
include(../modules_doc.pri)
