# ******************************************************************************
#  tao_visuals.pro                                                  Tao project
# ******************************************************************************
# File Description:
# Qt build file for the TaoVisuals module
#
# TaoVisuals is a collection of pictures and logos related to Tao Presentations
#
# ******************************************************************************
# This software is property of Taodyne SAS - Confidential
# Ce logiciel est la propriété de Taodyne SAS - Confidentiel
# (C) 2010 Jerome Forissier <jerome@taodyne.com>
# (C) 2010 Taodyne SAS
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
