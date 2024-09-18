/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbarrene <dbarrene@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 11:22:28 by dbarrene          #+#    #+#             */
/*   Updated: 2024/09/18 14:59:02 by dbarrene         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <exception>
template<class T>
class Array
{
	private:
		T* m_arr;
		unsigned int m_size;
	public:
		Array(): m_arr(nullptr), m_size(0){};
		Array(unsigned int n)
		{
			m_arr = new T[n];
			m_size = n;
		}
		Array(const Array& other)
		{
			m_size = other.m_size;
			m_arr  = new T[m_size];
			for (unsigned int i = 0; i < m_size; i++)
			{
				m_arr[i] = other.m_arr[i];
			}
		}
		Array& operator=(const Array& other)
		{
			m_size = other.m_size;
			m_arr  = new T[m_size];
			for (unsigned int i = 0; i < m_size; i++)
			{
				m_arr[i] = other.m_arr[i];
			}
			return *this;
		}
		~Array()
		{
			delete[] m_arr;
		}
		T& operator[](const unsigned int index)
		{
//			Array ret(*this);
			if (index >= m_size || index < 0)
				throw BoundsException();
//			m_arr += index;
			return *(m_arr + index);
		}
		unsigned int size() const
		{
			return m_size;
		}
		class BoundsException : public std::exception
	{
		const  char* what() const noexcept
		{
			return "The array is out of bounds";
		}
	};
};

//#include "Array.tpp"

#endif
