#ifndef PIDTHREAD_H
#define PIDTHREAD_H

#include <QThread>

class PIDThread : public QThread
{
public:
    PIDThread();

protected:
    void run();

public slots:
    void setTarget(long target) { targetPosition = target; }

signals:
    void updatePosition(long pos); // tell the gui to move the slider

private:
    long targetPosition;
    long error0, error1, error2;
};

#endif // PIDTHREAD_H
