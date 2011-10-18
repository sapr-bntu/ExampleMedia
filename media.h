#ifndef MEDIA_H
#define MEDIA_H

#include <QMainWindow>
#include <phonon>

namespace Ui {
    class media;
}

class media : public QMainWindow
{
    Q_OBJECT

public:
    explicit media(QWidget *parent = 0);
    ~media();

private:
    Ui::media *ui;
    Phonon::SeekSlider *seekSlider;
    Phonon::MediaObject *mediaObject;
    Phonon::MediaObject *metaInformationResolver;
    Phonon::AudioOutput *audioOutput;
    Phonon::VolumeSlider *volumeSlider;
};

#endif // MEDIA_H
