#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <map>
# include <iostream>
# include <fstream>
# include <string>
# include <cctype>
# include <cstdlib>
# include <algorithm>
# include <sstream>
# include <ctime>

class BitcoinExchange {
	private:
		std::map<std::string, float>	dataBase;

		void	displayLine(std::string inputLine, int count);
		float	getDataBaseValue(const std::map<std::string, float>& dataBase, const std::string& iDate);
		bool	isValidLine(std::string line, int count);
		bool	isValidInputDate(std::string inputLine, std::string *iDate);
		bool	isValidInputNumber(std::string line, float *iNbr);

	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &src);
		BitcoinExchange &operator=(BitcoinExchange const &rhs);
		~BitcoinExchange();

		std::map<std::string, float>	getDataBase() const;

		int	displayValues(char *input);
};

std::ostream	&operator<<(std::ostream &o, BitcoinExchange const &b);
#endif