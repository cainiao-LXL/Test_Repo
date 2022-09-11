/*
    File.h
*/
#include <string>

#ifndef FILE_H
#define FILE_H

class File
{
public:
    File();
    ~File();

    static int CreatFile(const std::string& filePath);
    static int DeleteFile(const std::string& filePath);
    static int ReadFile(const std::string& filePath);
};

#endif //FILE_H