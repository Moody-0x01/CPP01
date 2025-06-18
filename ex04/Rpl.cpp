#include <Rpl.hpp>

Rpl::Rpl() {
}

Rpl::~Rpl() {
}

Rpl::Rpl(std::string fn, std::string repl, std::string target) : _filename(fn), _repl(repl), _target(target), _dump_filename(_filename + ".replace"), _content("")
{
}

void Rpl::log(void)
{
	std::cout << "File: " << _filename << "\n";
	std::cout << "replacement: " << _repl << "\n";
	std::cout << "to replace: " << _target << "\n";
}

void Rpl::help(std::string error, std::string program)
{
	std::cout << error << "\n";
	std::cout << "Usage: ";
	std::cout << program << " <filename> " << "<target> " << "<replacement>\n";
}

int Rpl::prepare_content(void)
{
    std::stringstream buffer;
    std::ifstream file(_filename.c_str());
    
    if (!file.is_open()) {
        std::cerr << "Could not open file: " << _filename << ": ";
		perror("");
		return (0);
    }
    
    buffer << file.rdbuf();
    _content = buffer.str();
	file.close();
	return (1);
}

void Rpl::apply(void)
{
	size_t offset;
	std::string str;

	if (_repl == _target)
		return ;
	offset = _content.find(_target, 0);
	do {
		if (offset == std::string::npos)
			break ;
		_content.erase(offset, _target.size());
		_content.insert(offset, _repl.c_str(), _repl.size());
		offset = _content.find(_target, offset + 1);
	} while (true);
}

void Rpl::dump(void)
{
    std::ofstream file(_dump_filename.c_str());
    
    if (!file.is_open()) {
        std::cerr << "Could not open file: " << _dump_filename << ": ";
		perror("");
		return ;
    }
    
    file << _content;
	file.close();
}
