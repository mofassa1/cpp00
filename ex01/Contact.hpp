/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadouac <afadouac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 19:25:38 by afadouac          #+#    #+#             */
/*   Updated: 2024/09/12 04:05:02 by afadouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
    private:
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string PhoneNumber;
        std::string DarkestSecret;
        int         Index;        
    public:
        void affichContact();
        //seters
        void SetFirstName(std::string firstname);
        void SetLastName(std::string lastname);
        void SetNickName(std::string nickname);
        void SetPhoneNumber(std::string phonenumber);
        void SetDarks(std::string darkestsecret);
        void SetIndex(int index);
        
        // geters 
        std::string getFirstName();
        std::string getLastName();
        std::string getNickName();
        std::string getPhoneNumber();
        std::string getDarks();
        int getIndex();
};

#endif