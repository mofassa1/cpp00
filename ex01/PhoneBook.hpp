/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afadouac <afadouac@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 19:25:13 by afadouac          #+#    #+#             */
/*   Updated: 2024/06/29 19:25:16 by afadouac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>
#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contact[8];
    public:
        void SetContact(Contact Contact, int Index) {
            contact[Index % 8] = Contact;
        }
        Contact GetContact(int Index) {
            return (contact[Index]);
        }
        void intro(void);

        std::string fixStr(std::string str);

        void    AffContacts(int INDEX);
};




#endif