/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadouac <afadouac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 19:25:41 by afadouac          #+#    #+#             */
/*   Updated: 2024/09/12 05:52:22 by afadouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
// seters
void Contact::SetFirstName(std::string firstname)
{
    FirstName = firstname;
}
void Contact::SetLastName(std::string lastname)
{
    LastName = lastname;   
}
void Contact::SetNickName(std::string nickname)
{
    NickName = nickname;
}

void Contact::SetPhoneNumber(std::string phonenumber)
{
    PhoneNumber = phonenumber;
}

void Contact::SetDarks(std::string darkestsecret)
{
    DarkestSecret = darkestsecret;
}

void Contact::SetIndex(int index)
{
    Index = index;
}

//geters 

std::string Contact::getFirstName(void)
{
    return (FirstName);
}
std::string Contact::getLastName(void)
{
    return (LastName);   
}
std::string Contact::getNickName(void)
{
    return (NickName);
}

std::string Contact::getPhoneNumber(void)
{
    return (PhoneNumber);
}

std::string Contact::getDarks(void)
{
    return (DarkestSecret);
}

int Contact::getIndex(void)
{
    return (Index);
}

void Contact::affichContact(void)
{
    std::cout << "FirstName      :" << FirstName << std::endl;
    std::cout << "LASTNAME       :" << LastName << std::endl;
    std::cout << "NICKNAME       :" << NickName << std::endl;
    std::cout << "PHONENUMBER    :" << PhoneNumber << std::endl;
    std::cout << "DARKESTSECRET  :" << DarkestSecret << std::endl;
}
