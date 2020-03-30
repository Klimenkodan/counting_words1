#include <iostream>
#include <ostream>
#include <sstream>
#include <fstream>

inline auto read_file_into_memory(const std::string &file_name) {

	std::ifstream raw_file(file_name, std::ios::binary);
	auto buffer = static_cast<std::ostringstream&>(
			std::ostringstream{} << raw_file.rdbuf()).str();

	return buffer;
}

int main() {
	std::string current_file = "file.txt";

	auto buffer = read_file_into_memory(current_file);

	return 0;
}