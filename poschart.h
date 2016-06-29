#ifndef POSCHART_H
#define POSCHART_H

#include <QWidget>
#include <QList>
#include <QPainter>
#include <QPen>

class PosChart : public QWidget
{
    Q_OBJECT
public:
    explicit PosChart(QWidget *parent = 0);
    void insertPosValue(int pos);
    void clearRecord() { posRecord.clear(); }

signals:

public slots:

protected:
    void paintEvent(QPaintEvent *);

private:
    QList<double> posRecord;
    QPainter* posPainter;
};

#endif // POSCHART_H
