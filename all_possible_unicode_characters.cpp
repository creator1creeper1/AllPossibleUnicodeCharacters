#include <fstream>
using std::basic_ofstream;

int main()
{
	basic_ofstream<char32_t> file("output.txt");
	for (char32_t c = 0; c < 0x10FFFF; c += 1)
		file << c;
}