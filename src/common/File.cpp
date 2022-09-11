#include "File.h"
#include "Type.h"

File::File()
{
}

File::~File()
{
}

int CreatFile(const std::string& filePath)
{
    return SUCCESS;
}

int DeleteFile(const std::string& filePath)
{
    return SUCCESS;
}

int ReadFile(const std::string& filePath, std::vector<std::string>& fileContent)
{
    return SUCCESS;
}

int GetFileModifyTime(const std::string& filePath, time_t& time)
{
    return SUCCESS;
}
