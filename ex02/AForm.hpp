/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 15:20:51 by amylle            #+#    #+#             */
/*   Updated: 2025/02/11 16:28:00 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>
class Bureaucrat;
class AForm
{
public:
	AForm();
	AForm(const std::string& name, int gradeToSign, int gradeToExecute);
	AForm(const AForm& copy);
	AForm& operator=(const AForm& copy);
	~AForm();

	void			beSigned(const Bureaucrat& bureaucrat);
	std::string		getName() const;
	bool			getSigned() const;
	int				getSignGrade() const;
	int				getExecuteGrade() const;
	virtual	void	execute(Bureaucrat const &executor) const = 0;

	class GradeTooHighException: public std::exception{
	virtual const char*	what() const throw();};

	class GradeTooLowException: public std::exception{
	virtual const char*	what() const throw();};

private:
	const std::string	_name;
	bool				_isSigned;
	const int			_signGrade;
	const int			_executeGrade;
};

std::ostream& operator<< (std::ostream& os, const AForm& form);
