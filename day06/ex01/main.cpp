/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadey <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/04 21:31:45 by tadey             #+#    #+#             */
/*   Updated: 2018/07/04 21:31:48 by tadey            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int convCharof4ToInt(char *nstr)
{
    int n = 0;
    for (int i = 0; i < 4; i++)
        n += nstr[i] * (1 << (3 - i));
    return n;
}

void *serialize(void)
{
    int i;
    char *data = new char[21];
    std::cout << "Serialized Data:" << std::endl << "\t";
    for (i = 0; i < 8; i++) {
        data[i] = (rand() % ('~' - '!')) + '!';
        std::cout << data[i];
    }
    std::cout << " | ";
    for (i = 8; i < 12; i++)
        data[i] = rand() % 256;
    std::cout << convCharof4ToInt(data + 8) << " | ";
    for (i = 12; i < 20; i++) {
        data[i] = (rand() % ('~' - '!')) + '!';
        std::cout << data[i];
    }
    data[i] = '\0';
    std::cout << std::endl << std::endl;
    return reinterpret_cast<void *>(data);
}

Data *deserialize(void *input)
{
    Data *data = new Data;
    char *str = reinterpret_cast<char *>(input);

    data->s1 = "";
    for (int i = 0; i < 8; i++)
        data->s1 += str[i];
    data->s2 = "";
    for (int i = 12; i < 20; i++)
        data->s2 += str[i];
    data->n = convCharof4ToInt(str + 8);
    return data;
}

int main(void)
{
    srand(time(NULL));
    void *data = serialize();
    std::cout << "Packed Data:" << std::endl << "\t"
        << reinterpret_cast<char *>(data) << std::endl << std::endl;
    Data *splitData = deserialize(data);
    std::cout << "Deserialized Data:" << std::endl << "\t" << splitData->s1 << " | "
        << splitData->n << " | " << splitData->s2 << std::endl;
    return (0);
}