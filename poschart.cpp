#include "poschart.h"

PosChart::PosChart(QWidget *parent) :
    QWidget(parent)
{
    posRecord.clear();
}

void PosChart::paintEvent(QPaintEvent *)
{
    posPainter = new QPainter(this);
    posPainter->setRenderHint(QPainter::Antialiasing, true);
    QPen* pen = new QPen;
    pen->setWidth(3);
    pen->setColor(QColor(Qt::black));
    posPainter->setPen(*pen);
    posPainter->drawLine(0, 0, 0, 100);
    posPainter->drawLine(0, 50, 580, 50);
    pen->setColor(QColor(Qt::darkMagenta));
    posPainter->setPen(*pen);
    if (posRecord.size() < 580)
    {
        for (int i = 0; i < posRecord.size() - 1; ++i)
        {
            posPainter->drawLine(i, posRecord.at(i), i + 1, posRecord.at(i+1));
        }
    }
    else
    {
        for (int i = 580; i > 1; --i)
        {
            posPainter->drawLine(580 - i, posRecord.at(posRecord.size() - i),
                                 581 - i, posRecord.at(posRecord.size() - i + 1));
        }
    }
    posPainter->end();
}

void PosChart::insertPosValue(int pos)
{
    posRecord << pos;
}
