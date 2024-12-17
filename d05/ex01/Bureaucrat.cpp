#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int i, const std::string name) : _name(name) {
    if (i < 1)
        throw Bureaucrat::GradeTooHighException();
    if (i > 150)
        throw Bureaucrat::GradeTooLowException();
    _grade = i;
    std::cout << "[Bureaucrat] create!!" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& ref)
    : _name(ref._name), _grade(ref._grade) {
    std::cout << "[Bureaucrat] copy!!" << std::endl;
}

Bureaucrat::~Bureaucrat() {
    std::cout << "[Bureaucrat] delete!!" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& ref) {
    if (this != &ref) {
        _grade = ref._grade;
    }
    std::cout << "[Bureaucrat] operator=!!" << std::endl;
    return *this;
}

void Bureaucrat::promotion() {
    if (_grade <= 1)
        throw Bureaucrat::GradeTooHighException();
    --_grade;
}

void Bureaucrat::destitution() {
    if (_grade >= 150)
        throw Bureaucrat::GradeTooLowException();
    ++_grade;
}

const std::string Bureaucrat::getName() const {
    return _name;
}

int Bureaucrat::getGrade() const {
    return _grade;
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "The grade you tried to give is too Low";
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "The grade you tried to give is too High";
}

std::ostream& operator<<(std::ostream& out, const Bureaucrat& bureaucrat) {
    out << bureaucrat.getName() << ", bureaucrat grade: " << bureaucrat.getGrade();
    return out;
}
