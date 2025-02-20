/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:29:03 by amylle            #+#    #+#             */
/*   Updated: 2025/02/20 18:31:56 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <exception>

Bureaucrat::Bureaucrat(): _name("default"), _grade(150)
{
	std::cout << "Made Bureaucrat named: " << _name << ", with grade: " << _grade << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, const int grade): _name(name), _grade(grade)
{
	if (grade > 150)
		throw GradeTooLowException();
	else if (grade < 1)
		throw GradeTooHighException();
	else
		std::cout << "Made Bureaucrat named: " << _name << ", with grade: " << _grade << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy): _name(copy._name), _grade(copy._grade)
{
	std::cout << "Copied Bureaucrat named: " << _name << ", with grade: " << _grade << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& copy)
{
	if (this != &copy)
		this->_grade = copy._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destroyed\n";
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void	Bureaucrat::operator++(int)
{
	if (this->_grade == 150)
		throw (GradeTooHighException());
	else
		this->_grade++;
}

void	Bureaucrat::operator--(int)
{
	if (this->_grade == 1)
		throw (GradeTooLowException());
	else
		this->_grade--;
}

void	Bureaucrat::signForm(AForm& aform)
{
	try
	{
		aform.beSigned(*this);
	}
	catch (const std::exception &e)
	{
		std::cout << this->_name << " coudln't sign " << aform.getName() << " because: " << e.what() << std::endl;
		return ;
	}
	std::cout << this->getName() << " signed " << aform.getName() << std::endl;
}

void	Bureaucrat::executeForm(AForm const& form)
{
	try
	{
		form.tryExecuting(*this);
	}
	catch (const std::exception &e)
	{
		std::cout << this->_name << " couldn't execute " << form.getName() << " because: " << e.what() << std::endl;
		return ;
	}
	std::cout << this->_name << " has executed " << form.getName() << std::endl;
}

std::ostream& operator<< (std::ostream& os, const Bureaucrat& bureaucrat)
{
	os << bureaucrat.getName() << ", bureaucrat grade: " << bureaucrat.getGrade() << ".\n";
	return (os);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat grade too high.");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat grade too low.");
}
