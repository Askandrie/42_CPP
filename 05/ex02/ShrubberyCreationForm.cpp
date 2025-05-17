/**
 * @ Author: Aska
 * @ Create Time: 2025-05-01 14:18:55
 * @ Modified by: Aska
 * @ Modified time: 2025-05-12 18:57:53
 */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(SCF_SIGN_GRADE, SCF_EXECUTE_GRADE, SCF_NAME), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src), _target(src._target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &ori)
{
	if (this != &ori)
	{
		AForm::operator=(ori);
		this->_target = ori._target;
	}
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (!this->getIsSigned())
		throw AForm::FormAlreadySignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();

	std::ofstream file(this->_target + "_shrubbery");
	if (!file.is_open())
	{
		std::cerr << "Error: Could not open file " << this->_target + "_shrubbery" << std::endl;
		return;
	}
	file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⠒⡄⢀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
	file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠰⠂⢿⠇⣨⠆⠀⣠⠋⢰⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
	file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠒⠣⢤⣇⠀⠀⠐⠤⢼⡿⡅⡠⠀⢀⠀⢡⣾⡅⠀⠀⠀⠀⢀⠀⣆⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
	file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢰⠀⡤⢀⠀⠀⡀⠀⠀⠀⣇⣠⠄⠀⠀⣿⠀⠀⠀⠤⠴⢀⠼⠀⠀⠈⢉⠉⣹⡀⠀⠀⠀⠀⠀⠉⣹⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
	file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢲⣿⢾⣀⠀⡧⣶⠊⠀⠸⢿⠓⢤⣄⣹⣆⣠⠀⠀⠀⠀⡀⠀⡄⠀⠈⣽⠇⠀⠀⠀⡀⠀⣸⠋⠉⠒⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
	file << "⠀⠀⠀⠀⠀⠀⠰⣀⣔⠀⢀⣭⣅⣠⣷⠃⠈⢹⠏⠱⡴⠧⣶⣤⠔⠈⣟⣿⣿⡇⠀⠀⠀⠙⢼⣷⣠⣾⡟⠁⢠⣴⣏⠀⣸⣧⠀⢠⣤⠊⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
	file << "⠀⠀⠀⠀⠀⠤⠤⠽⢻⠉⢳⠀⠀⠀⠀⠑⠲⠓⠄⡠⠃⠀⡸⠛⠳⣆⠈⠻⠮⠿⣦⡀⠓⠒⣩⣿⠟⠵⣋⡒⠉⢩⠃⠘⣏⠀⡟⠙⡟⢀⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
	file << "⠀⠀⠀⠀⠀⠀⠠⠀⠞⠒⠈⠀⠀⠀⠀⠀⠀⠀⢠⡀⠀⢰⣃⣀⠀⠿⣦⠀⠀⠐⢿⣷⣠⣞⣿⣿⠛⠛⠋⠉⠒⠊⠁⠈⠁⢀⠈⠉⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
	file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⠀⠀⠉⠒⠸⣵⡷⡄⠀⢘⡶⠘⣄⣖⡁⢈⠃⠩⠉⠋⠐⠑⠄⠀⠀⠀⠀⠀⢚⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
	file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠠⣄⣦⡔⠁⠀⠰⣄⢀⣠⠋⠀⠰⡚⠉⣧⡄⠘⢻⠀⠙⡄⠀⠀⠀⠸⡀⣠⡄⠀⠀⡠⠄⡀⠈⠉⠀⠀⠀⡄⢀⠀⠀⠀⢠⣀⣤⡄⠀\n";
	file << "⠀⠀⠀⠀⠀⠀⠀⠀⣀⠀⠀⠀⠠⠤⣞⣑⠎⠀⠀⠀⠀⠈⠣⢤⠜⠀⠀⠹⢿⡤⡞⠉⡏⡇⠀⠀⠀⢀⣀⡝⠻⡤⠂⠱⣾⡄⠀⠀⠀⠓⠢⢯⡷⣀⠀⢀⡴⢆⣼⣃⡆\n";
	file << "⠀⢢⣧⠀⠀⠀⠀⣜⡑⠲⣿⢅⡠⠀⠀⠙⢷⣤⡀⠀⠰⢀⣦⡬⠂⠀⠀⠀⢯⣷⣀⠀⣷⣧⠄⠀⢀⠀⠈⠱⣎⠀⠈⠩⢠⡗⠂⠀⠀⠘⢤⣾⠀⣜⡴⠟⠁⠀⠀⠈⠀\n";
	file << "⠀⢨⠏⢰⠒⠖⣲⠙⣿⣾⠧⣼⣄⠀⠘⢆⣰⣟⣷⣖⠢⢤⠋⠡⠂⠀⠀⠀⢈⡾⣿⠷⣿⣿⣿⠁⠀⠀⠀⡰⢻⣶⣧⢠⡟⠀⡀⠀⠀⣠⣟⣿⡞⣋⡄⠀⠀⠀⠀⠀⠀\n";
	file << "⠈⣻⠿⣈⣯⠒⢿⠯⢉⡟⡟⠛⠻⢟⣦⣤⣛⢣⠀⣻⣧⠀⠙⣷⡄⠀⠀⢈⠓⠀⢈⣷⢻⢿⣦⠂⠀⠀⠀⠣⠼⣟⣿⣟⡎⠀⢳⣻⢄⣠⣋⠿⢷⠘⠤⣶⠀⠀⠀⠀⠀\n";
	file << "⠀⠑⠴⠃⠸⠓⠣⠤⠋⠉⠀⠀⠀⠘⠈⠙⠿⡏⠈⡻⠋⠁⣄⣈⣻⠟⠢⢼⣹⣏⠀⠉⢿⠸⣿⣷⠀⠀⡀⠀⢰⣿⠟⠁⣀⡏⠉⣹⡀⣹⠣⣀⠜⢩⠿⣡⡊⠀⠀⠀⠀\n";
	file << "⠀⠀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⢶⣳⡖⠺⡞⠯⢵⣀⣀⡔⠉⠈⡦⣴⠻⣷⣿⣷⣀⢸⣥⠄⠾⢇⣠⢞⣫⢿⣮⣭⣍⣀⣀⣠⣴⣯⡶⣏⡇⠀⠀⠀⠀\n";
	file << "⠠⠊⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠄⠀⠀⠀⠒⠴⠊⠁⢀⣠⣶⣶⠿⠿⠷⠷⢤⣤⣷⡟⢧⠹⣿⡃⠈⡹⠋⢃⣀⣼⠕⠋⠉⠉⠀⠀⠀⠉⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀\n";
	file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⢤⡀⢸⢤⡄⠀⠀⠀⣠⣵⡶⠛⠋⠀⠀⠀⠀⠀⠀⠀⢫⣄⣷⣖⢓⢿⣿⣫⣧⣤⢼⠞⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
	file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⡟⠙⣄⡠⠛⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⠤⢎⣨⡏⠘⣿⣿⡟⡵⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
	file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠒⠺⣄⣀⡼⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡄⣷⠀⣿⡿⡜⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
	file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠃⣿⠀⣿⣿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
	file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠀⡯⢀⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
	file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡼⡸⠀⣼⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
	file << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣧⠃⣼⡟⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀\n";
}

std::string ShrubberyCreationForm::getTarget() const
{
	return this->_target;
}

std::ostream &operator<<(std::ostream &os, ShrubberyCreationForm const &shrubberyCreationForm)
{
	os << "ShrubberyCreationForm: " << shrubberyCreationForm.getName() << ", Target: " << shrubberyCreationForm.getTarget() << ", Signed: " << (shrubberyCreationForm.getIsSigned() ? "Yes" : "No") << std::endl;
	return os;
}