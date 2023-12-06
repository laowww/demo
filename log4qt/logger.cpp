#include <QDir>
#include <QMutex>
#include <QApplication>
#include <QFileSystemWatcher>

#include "logger.h"
#include "PropertyConfigurator"

QScopedPointer<Logger> Logger::m_pSelf;
Logger *Logger::instance()
{
    if(m_pSelf.isNull())
    {
        static QMutex mutex;
        QMutexLocker locker(&mutex);
        if(m_pSelf.isNull())
        {
            m_pSelf.reset(new Logger);
        }
    }

    return m_pSelf.data();
}

Logger::Logger()
{
    Log4Qt::PropertyConfigurator::configure(QApplication::applicationDirPath() + QDir::separator() + "config/logconfig.ini");
}
