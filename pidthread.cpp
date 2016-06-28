#include "pidthread.h"

PIDThread::PIDThread() :
    QThread()
{
    // init errors
    error_this_time = 0;
    error_last_time = 0;
    error_integral = 0;
}

void PIDThread::run()
{
    while(1)
    {
        usleep(10000); // 10 ms
        error_last_time = error_this_time;
        error_this_time = targetPosition - currentPosition;
        error_integral += error_this_time;
        double speed = calculateSpeed();
        emit updatePosition(RND((currentPosition + speed) * 10));
    }
}

void PIDThread::setPIDParameters(double p, double i, double d)
{
    proportion = p / 10;
    integral = i / 10;
    derivative = d / 10;
}

double PIDThread::calculateSpeed()
{
    double speed = proportion * error_this_time + integral * error_integral
            + derivative * (error_this_time - error_last_time);
    return speed / 10.0;
}

void PIDThread::clearData()
{
    error_integral = 0;
    error_last_time = 0;
    error_this_time = 0;
}
