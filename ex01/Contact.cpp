/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadouac <afadouac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 19:25:41 by afadouac          #+#    #+#             */
/*   Updated: 2024/06/29 19:26:17 by afadouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void    Contact::SetFirstName(std::string firstname)
{
    FirstName = firstname;
}

std::string  Contact::GetFirstName()
{
    return (FirstName);
}

void    Contact::SetLastName(std::string lastname)
{
    LastName = lastname;
}

std::string  Contact::GetLastName()
{
    return (LastName);
}

void    Contact::SetNickName(std::string nickname)
{
    NickName = nickname;
}

std::string  Contact::GetNickName()
{
    return (NickName);
}

void    Contact::SetPhoneNumber(std::string phonenumber)
{
    PhoneNumber = phonenumber;
}

std::string  Contact::GetPhoneNumber()
{
    return (PhoneNumber);
}

void    Contact::SetDarkestSecret(std::string darkestsecret)
{
    DarkestSecret = darkestsecret;
}

std::string  Contact::GetDarkestSecret()
{
    return (DarkestSecret);
}

void Contact::AffichContact()
{
    std::cout << "FirstName      :" << FirstName << std::endl;
    std::cout << "LASTNAME       :" << LastName << std::endl;
    std::cout << "NICKNAME       :" << NickName << std::endl;
    std::cout << "PHONENUMBER    :" << PhoneNumber << std::endl;
    std::cout << "darkestsecret  :" << DarkestSecret << std::endl;
}
