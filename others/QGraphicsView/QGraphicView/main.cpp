#include <QApplication>

#include "graphicviewexample.hpp"

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  graphicViewExample view;

  view.show();
  //view.showFullScreen();

  return a.exec();
}
