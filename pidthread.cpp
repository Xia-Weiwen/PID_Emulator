#include "pidthread.h"

PIDThread::PIDThread() :
    QThread()
{
}

void PIDThread::run()
{
    while(1)
    {
        usleep(100000); // 100 ms
    }
}
