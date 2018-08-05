#ifndef INTF_STB__FILESYSTEM_H
#define INTF_STB__FILESYSTEM_H

#ifndef STUB_FILESYSTEM

#include <filesystem>

namespace stb
{
namespace filesystem = std::filesystem;
}; // namespace stb

#else // STUB_FILESYSTEM
#endif // STUB_FILESYSTEM

namespace stb
{


}; // namespace stb

#endif // INTF_STB__FILESYSTEM_H