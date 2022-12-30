#ifndef FILEINFO_H
#define FILEINFO_H

#include <QString>

class FileInfo
{
public:
    FileInfo();

    QString ProjDir, SubDir, PyDir;
    QString FullPath;

};

#endif // FILEINFO_H
