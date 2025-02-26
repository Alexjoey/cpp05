/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 17:19:58 by amylle            #+#    #+#             */
/*   Updated: 2025/02/20 18:31:57 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{

public:

	Bureaucrat();
	Bureaucrat(const std::string &name, const int grade);
	Bureaucrat(const Bureaucrat& copy);
	Bureaucrat& operator=(const Bureaucrat& copy);
	~Bureaucrat();

	std::string	getName() const;
	int		getGrade() const;
	void	operator++(int);
	void	operator--(int);

	void	signForm(AForm& form);
	void	executeForm(AForm const& form);
	class GradeTooHighException: public std::exception{
	virtual const char*	what() const throw();};

	class GradeTooLowException: public std::exception{
	virtual const char*	what() const throw();};

private:
	const std::string	_name;
	int					_grade;

};
std::ostream& operator<< (std::ostream& os, const Bureaucrat& bureaucrat);
