#include <QApplication>
#include "summarywindow.h"

int main(int argc, char** argv)
{
    QApplication app(argc, argv);

    SummaryWindow summary;
    summary.show();

    return app.exec();
}
