/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amylle <alexm@live.be>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 18:01:28 by amylle            #+#    #+#             */
/*   Updated: 2025/02/20 18:37:02 by amylle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
