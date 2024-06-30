/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadouac <afadouac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 19:25:38 by afadouac          #+#    #+#             */
/*   Updated: 2024/06/29 19:25:40 by afadouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COTACT_HPP
#define COTACT_HPP

#include <string>
#include <iostream>

class  Contact
{
    private:
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string PhoneNumber;
        std::string DarkestSecret;

    public:
        void    SetFirstName(std::string firstname);
        
        std::string  GetFirstName();
        
        void    SetLastName(std::string lastname);
        
        std::string  GetLastName();
        
        void    SetNickName(std::string nickname);
        
        std::string  GetNickName();
        
        void    SetPhoneNumber(std::string phonenumber);
        
        std::string  GetPhoneNumber();
        
        void    SetDarkestSecret(std::string darkestsecret);
        
        std::string  GetDarkestSecret();
        
        void AffichContact();
};



// Contact:: Contact()
// {
// }

// Contact::~ Contact()
// {
// }

#endif