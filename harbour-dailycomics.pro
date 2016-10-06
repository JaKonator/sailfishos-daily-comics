TARGET = harbour-dailycomics

CONFIG += sailfishapp

SOURCES += $$files(src/*.cpp)

HEADERS += $$files(src/*.h)

OTHER_FILES = \
    $$files(qml/*.qml, true) \
    $$files(qml/*.js, true) \
    rpm/$${TARGET}.yaml \
    rpm/$${TARGET}.spec \
    $${TARGET}.desktop

RESOURCES += $${TARGET}.qrc

QT += sql

images.files = images
images.path = /usr/share/$${TARGET}

plugins.files = plugins
plugins.path = /usr/share/$${TARGET}

INSTALLS += \
    images \
    plugins

SAILFISHAPP_ICONS = 86x86 108x108 128x128 256x256

DEFINES += \
    APP_VERSION=\"\\\"$${VERSION}\\\"\" \
    PLUGINS_FOLDER_PATH=\"\\\"$${plugins.path}/plugins\\\"\"
