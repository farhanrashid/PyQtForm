#ifndef FILEINFO_H
#define FILEINFO_H

#include <QString>

class FileInfo
{
public:
    FileInfo();

    QString m_ProjDir, m_SubDir, m_PyDir;
    QString m_FullPath;

};

#endif // FILEINFO_H
