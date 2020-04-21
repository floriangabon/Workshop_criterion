/*
** EPITECH PROJECT, 2020
** Workshop_criterion
** File description:
** ExceptionWorkshop
*/

#include "ExceptionWorkshop.hpp"

ExceptionWorkshop::ExceptionWorkshop(std::string const &message): _message(message)
{
}

const char *ExceptionWorkshop::what() const noexcept
{
    return _message.c_str();
}

ExceptionWorkshopFailed::ExceptionWorkshopFailed(std::string const &message) : ExceptionWorkshop(message)
{
}