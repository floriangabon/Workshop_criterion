#include <iostream>
#include "ExceptionWorkshop.hpp"
#include "Workshop.hpp"

Workshop::Workshop() {}

Workshop::~Workshop() {}

std::string Workshop::getStr() const
{
    return _str;
}

void Workshop::setStr(const std::string &str)
{
    _str = str;
}

void Workshop::printStrCout() const
{
    std::cout << getStr() << std::endl;
}

void Workshop::printStrCerr() const
{
    std::cout << getStr() << std::endl;
}

int Workshop::getInt() const
{
    return _number;
}

void Workshop::setInt(const int &number)
{
    _number = number;
}

void Workshop::setDataBase(const std::vector<std::string> &data_base)
{
    _data_base = data_base;
}

std::vector<std::string> Workshop::getDataBase() const
{
    return _data_base;
}

void Workshop::clearDatabase() const
{
    if (_data_base.size() == 0)
        throw ExceptionWorkshopFailed("Database has cleared!!");
    _data_base.empty();
}