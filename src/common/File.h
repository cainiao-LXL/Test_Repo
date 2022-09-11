/*
    File.h
*/
#include <string>
#include <vector>

#ifndef FILE_H
#define FILE_H

class File
{
public:
    File();
    ~File();

    static int CreatFile(const std::string& filePath);
    static int DeleteFile(const std::string& filePath);
    static int ReadFile(const std::string& filePath, std::vector<std::string>& fileContent);
    static int GetFileModifyTime(const std::string& filePath, time_t& time);
};

#endif //FILE_H