#ifndef INTF_STB__THREAD_H
#define INTF_STB__THREAD_H

#ifndef STUB_THREAD

#include <thread>

namespace stb
{

using thread = std::thread;

namespace this_thread
{

inline void yield() noexcept 
{ 
    std::this_thread::yield(); 
}

inline stb::thread::id get_id() noexcept 
{ 
    return std::this_thread::get_id(); 
}

template< class REP, class PERIOD >
inline void sleep_for(const std::chrono::duration<REP, PERIOD>& sleep_duration)
{ 
    std::this_thread::sleep_for(sleep_duration); 
}

template< class CLOCK, class DURATION >
inline void sleep_until(const std::chrono::time_point<CLOCK, DURATION>& sleep_time) 
{ 
    std::this_thread::sleep_until(sleep_time);
}

}; // namespace this_thread

}; // namespace stb

#else // STUB_THREAD
#endif // STUB_THREAD

#endif // INTF_STB__THREAD_H