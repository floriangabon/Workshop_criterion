#ifndef WORKSHOP_HPP_
#define WORKSHOP_HPP_

#include <string>
#include <vector>

class Workshop {
    public:
        Workshop();
        ~Workshop();
        std::string getStr() const;
        void setStr(const std::string &);
        void printStrCout() const;
        void printStrCerr() const;
        int getInt() const;
        void setInt(const int &);
        std::vector<std::string> getDataBase() const;
        void setDataBase(const std::vector<std::string> &data_base);
        void clearDatabase() const;

    private:
        std::string _str;
        int _number;
        std::vector<std::string> _data_base;
};

#endif /* !WORKSHOP_HPP_ */
