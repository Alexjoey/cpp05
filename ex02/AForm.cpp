/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 16:24:00 by amylle            #+#    #+#             */
/*   Updated: 2025/02/11 16:33:15 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(): _name("default"), _isSigned(false), _signGrade(150), _executeGrade(150)
{
	std::cout << "Made " << _name << "form with sign grade: " << _signGrade;
	std::cout << ", and execute grade: " << _executeGrade << std::endl;
}

AForm::AForm(const std::string& name, int gradeToSign, int gradeToExecute):
	_name(name),
	_isSigned(false),
	_signGrade(gradeToSign),
	_executeGrade(gradeToExecute)
{
	if (gradeToSign > 150)
		throw GradeTooLowException();
	if (gradeToSign < 1)
		throw GradeTooHighException();
	std::cout << "Made " << _name << "form with sign grade: " << _signGrade;
	std::cout << ", and execute grade: " << _executeGrade << std::endl;
}
	
void AForm::beSigned(const Bureaucrat& bureaucrat)
{
	if (_isSigned == false && bureaucrat.getGrade() > this->_signGrade)
		throw GradeTooLowException();
	else
		_isSigned = true;
}

AForm::~AForm()
{
}

std::string	AForm::getName() const
{
	return (this->_name);
}

bool	AForm::getSigned() const
{
	return (this->_isSigned);
}

int	AForm::getSignGrade() const
{
	return (this->_signGrade);
}

int	AForm::getExecuteGrade() const
{
	return (this->_executeGrade);
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}

std::ostream& operator<< (std::ostream& os, const AForm& form)
{
	os << form.getName() << ", Form sign grade: " << form.getSignGrade();
	os << ", Form exectute grade: " << form.getExecuteGrade();
	os << ", is executed: " << form.getSigned() << std::endl;
	return (os);
}
