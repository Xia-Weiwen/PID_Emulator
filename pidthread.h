#ifndef PIDTHREAD_H
#define PIDTHREAD_H

#include <QThread>

#define RND(x) ((int)(x>0?x+0.5:x-0.5))

class PIDThread : public QThread
{
    Q_OBJECT
public:
    PIDThread();

protected:
    void run();

public slots:
    void setTargetPosition(int target) { targetPosition = target; }
    void setCurrentPosition(int pos) // act as a feedback
    {
        currentPosition = pos / 10.0;
    }
    void setPIDParameters(double p, double i, double d);
    void clearData();

signals:
    void updatePosition(int pos); // tell the gui to move the slider

private:
    long targetPosition;
    double currentPosition;
    double proportion, integral, derivative; // pid coefficients
    double error_this_time, error_last_time; // the most recent 2 errors (between target and current value)
    double error_integral; // accumulated error
private:
    double calculateSpeed();
};

#endif // PIDTHREAD_H
