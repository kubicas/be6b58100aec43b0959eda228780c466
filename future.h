#ifndef INTF_STB__FUTURE_H
#define INTF_STB__FUTURE_H

#ifndef STUB_FUTURE

#include <future>

namespace stb
{

template<typename T>
using promise = std::promise<T>;

template<typename T, typename ...ARGS>
using packaged_task = std::packaged_task<T(ARGS...)>;

template<typename T>
using future = std::future<T>;

template<typename T>
using shared_future = std::shared_future<T>;

using launch = std::launch;
using future_status = std::future_status;
using future_error = std::future_error;
using future_errc = std::future_errc;

template< class T, class ALLOC >
using uses_allocator = std::uses_allocator<T, ALLOC>;

template< class Function, class... Args>
[[nodiscard]] std::future<std::invoke_result_t<std::decay_t<Function>, std::decay_t<Args>...>> async(Function&& f, Args&&... args)
{
	return std::async(f, args);
}

template< class Function, class... Args >
[[nodiscard]] std::future<std::invoke_result_t<std::decay_t<Function>, std::decay_t<Args>...>> async(std::launch policy, Function&& f, Args&&... args)
{
	return std::async(policy, f, args);
}

inline std::error_category const& future_category() noexcept
{
    return std::future_category();
}

}; // namespace stb

#else // STUB_FUTURE
#endif // STUB_FUTURE

#endif // INTF_STB__FUTURE_H