#include <QtGui>
#include <QskWindow.h>
#include <QskLinearBox.h>
#include <QskPushButton.h>
#include <QskTextLabel.h>

#include <SkinnyFont.h>

int main(int argc, char** argv) {
    QGuiApplication app(argc, argv);
    SkinnyFont::init(&app);
    QskWindow window;
    auto box = new QskLinearBox(Qt::Vertical);
    auto button = new QskPushButton("push me", box);
    auto label = new QskTextLabel("label", box);
    window.addItem(box);
    window.show();
    return app.exec();
}
