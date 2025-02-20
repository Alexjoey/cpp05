/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:36:04 by amylle            #+#    #+#             */
/*   Updated: 2025/02/20 19:13:14 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

class RobotomyRequestForm: public AForm
{

public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm& copy);
	~RobotomyRequestForm();

	RobotomyRequestForm& operator=(const RobotomyRequestForm& copy);
	void	execute(Bureaucrat const &executor) const;

private:
	std::string	_target;
};
