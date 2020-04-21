/*
** EPITECH PROJECT, 2020
** Workshop_criterion
** File description:
** ExceptionWorkshop
*/

#ifndef EXCEPTIONWORKSHOP_HPP_
#define EXCEPTIONWORKSHOP_HPP_

#include <exception>
#include <string>

class ExceptionWorkshop : std::exception
{
    public:
        explicit ExceptionWorkshop(std::string const &message);
        const char *what() const noexcept override;

    private:
        std::string _message;
};

class ExceptionWorkshopFailed : public ExceptionWorkshop
{
    public:
        explicit ExceptionWorkshopFailed(std::string const &message);
};

#endif /* !EXCEPTIONWORKSHOP_HPP_ */