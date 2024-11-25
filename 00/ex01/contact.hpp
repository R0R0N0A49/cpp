#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <sstream>

# define RED "\033[1;31m"
# define GREEN "\033[1;32m"
# define CYAN "\033[1;36m"
# define BLUE "\033[1;34m"
# define WHITE "\033[1;m"
# define NMB_CONTACTS 8

class Contact
{
	public:
		Contact(void);
		~Contact(void);

	public:
		void			init_all();
		void			print_name();
		void			print_all();
		int 			is_exist();

	private:
		void	ft_get_line(std::string &str);
		void	init_first();
		void	init_last();
		void	init_nick();
		void	init_number();
		void	init_secret();

	private:
		std::string	first;
		std::string	last;
		std::string	nick;
		std::string number;
		std::string secret;
};

# endif
