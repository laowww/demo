#ifndef LOGGER_H
#define LOGGER_H

#include <QScopedPointer>

class Logger
{
public:
    static Logger* instance();
    Logger();

private:
    static QScopedPointer<Logger> m_pSelf;
};

#endif // LOGGER_H
