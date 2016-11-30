#-------------------------------------------------
#
# Project created by QtCreator 2016-12-01T02:42:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = image
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    clsopencv.cpp

HEADERS  += mainwindow.h \
    clsopencv.h

FORMS    += mainwindow.ui

INCLUDEPATH += -I/usr/include/opencv
LIBS += -LC:/usr/lib/arm-linux-gnueabihf -lopencv_calib3d -lopencv_contrib -lopencv_core -lopencv_features2d -lopencv_flann -lopencv_gpu -lopencv_highgui -lopencv_imgproc -lopencv_legacy -lopencv_ml -lopencv_objdetect -lopencv_ocl -lopencv_photo -lopencv_stitching -lopencv_superres -lopencv_ts -lopencv_video -lopencv_videostab
