#ifndef RPL_HPP
#define RPL_HPP
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdio>

class Rpl {
public:
	Rpl();
	Rpl(std::string fn, std::string repl, std::string target);
	~Rpl();

	void log(void);
	int prepare_content(void);
	void apply(void);
	void dump(void);
	static void help(std::string error, std::string program);
private:
	const std::string _filename;
	const std::string _repl;
	const std::string _target;
	std::string _dump_filename;
	std::string _content;
};

#endif // !RPL_HPP
