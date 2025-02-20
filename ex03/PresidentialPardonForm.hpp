/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:01:28 by amylle            #+#    #+#             */
/*   Updated: 2025/02/20 19:12:45 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm& copy);
	~PresidentialPardonForm();

	PresidentialPardonForm& operator=(const PresidentialPardonForm& copy);
	void	execute(Bureaucrat const &executor) const;

private:
	std::string	_target;
};
