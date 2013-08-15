#include <QtGui/QApplication>
#include "midi_player.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MIDI_PLAYER w;
    w.show();
    return a.exec();
}
