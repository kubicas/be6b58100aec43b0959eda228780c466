#ifndef INTF_STB__FSTREAM_H
#define INTF_STB__FSTREAM_H

#ifndef STUB_FSTREAM

#include <fstream>

namespace stb
{

template<class CHART, class TRAITS = std::char_traits<CHART>> 
using basic_filebuf = std::basic_filebuf<CHART, TRAITS>;

template<class CHART, class TRAITS = std::char_traits<CHART>>
using basic_ifstream = std::basic_ifstream<CHART, TRAITS>;

template<class CHART, class TRAITS = std::char_traits<CHART>>
using basic_ofstream = std::basic_ofstream<CHART, TRAITS>;

template<class CHART, class TRAITS = std::char_traits<CHART>>
using basic_fstream = std::basic_fstream<CHART, TRAITS>;

}; // namespace stb

#else // STUB_FSTREAM
#endif // STUB_FSTREAM

namespace stb
{

using filebuf = stb::basic_filebuf<char>;
using wfilebuf = stb::basic_filebuf<wchar_t>;
using ifstream = stb::basic_ifstream<char>;
using wifstream = stb::basic_ifstream<wchar_t>;
using ofstream = stb::basic_ofstream<char>;
using wofstream = stb::basic_ofstream<wchar_t>;
using fstream = stb::basic_fstream<char>;
using wfstream = stb::basic_fstream<wchar_t>;

}; // namespace stb

#endif // INTF_STB__FSTREAM_H