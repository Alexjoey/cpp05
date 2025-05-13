/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:24:00 by amylle            #+#    #+#             */
/*   Updated: 2025/05/13 23:58:08 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): _name("default"), _isSigned(false), _signGrade(150), _executeGrade(150)
{
	std::cout << "Made " << _name << " form with sign grade: " << _signGrade;
	std::cout << ", and execute grade: " << _executeGrade << std::endl;
}

Form::Form(const std::string& name, int gradeToSign, int gradeToExecute):
	_name(name),
	_isSigned(false),
	_signGrade(gradeToSign),
	_executeGrade(gradeToExecute)
{
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw GradeTooLowException();
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	std::cout << "Made " << _name << " form with sign grade: " << _signGrade;
	std::cout << ", and execute grade: " << _executeGrade << std::endl;
}

Form::Form(const Form& copy):
	_name(copy._name),
	_isSigned(copy._isSigned),
	_signGrade(copy._signGrade),
	_executeGrade(copy._executeGrade)
{
	std::cout << "Form copy constructor called\n";
}

Form&	Form::operator=(const Form& copy)
{
	if (this != &copy)
		return (*this);
	return (*this);
}

void Form::beSigned(const Bureaucrat& bureaucrat)
{
	if (_isSigned == false && bureaucrat.getGrade() > this->_signGrade)
		throw GradeTooLowException();
	else
		_isSigned = true;
}

Form::~Form()
{
	std::cout << "Destroyed form\n";
}

std::string	Form::getName() const
{
	return (this->_name);
}

bool	Form::getSigned() const
{
	return (this->_isSigned);
}

int	Form::getSignGrade() const
{
	return (this->_signGrade);
}

int	Form::getExecuteGrade() const
{
	return (this->_executeGrade);
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}

std::ostream& operator<< (std::ostream& os, const Form& form)
{
	os << form.getName() << ", Form sign grade: " << form.getSignGrade();
	os << ", Form exectute grade: " << form.getExecuteGrade();
	os << ", is signed: " << form.getSigned() << std::endl;
	return (os);
}
