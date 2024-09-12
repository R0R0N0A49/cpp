#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "contact.hpp"

class Phonebook
{
	public:
		Phonebook(void);
		~Phonebook(void);

	public:
		void	search_contacts();
		void	prompt_welcome();
		void	prompt_action();
		void	add_contact();
		void	print_msg(std::string msg);

	private:
		int index;
		Contact contact[NMB_CONTACTS];
		void	print_contact();
};

# endif