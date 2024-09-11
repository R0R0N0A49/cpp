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

	private:
		int index;
		Contact contact[8];
		void	print_contact();
};

# endif