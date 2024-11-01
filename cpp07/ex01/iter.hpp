#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T, typename F >
void    iter(T* array, size_t len, F f) {
    for (size_t i = 0; i < len; i++) {
        f(array[i]);
    }
}

template <typename T>
void print(T a) {
    std::cout << a << "\n";
}

#endif