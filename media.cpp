#include "media.h"
#include "ui_media.h"

media::media(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::media)
{
    ui->setupUi(this);
    audioOutput = new Phonon::AudioOutput(Phonon::MusicCategory, this);
    mediaObject = new Phonon::MediaObject(this);
    metaInformationResolver = new Phonon::MediaObject(this);
    Phonon::createPath(mediaObject, audioOutput);
    Phonon::MediaSource source("Kalimba.mp3");
    mediaObject->setCurrentSource(source);
//    mediaObject->play();
    connect(ui->pushButton, SIGNAL(clicked()), mediaObject, SLOT(play()));

}

media::~media()
{
    delete ui;
}



