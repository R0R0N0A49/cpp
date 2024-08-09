#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "contact.hpp"

class Phonebook
{
	public:
		Phonebook(void);
		~Phonebook(void);

	public:
		void	prompt_welcome();
		void	prompt_action();
		void	add_contact();
		void	print_contact();

	private:
		int index;
		Contact contact[8];
};

# endif