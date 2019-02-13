#pragma once

#include <iostream>
#include<Windows.h>
#include<string>
#include<vector>
#include<random>
#include<ctime>

namespace usings {
	using _random_engine_ = std::default_random_engine;
	using _ran_ = _random_engine_;
	using _ran_to_int_ = std::uniform_int_distribution<int>
		;
	using _rti_ =
		_ran_to_int_;
	using _ran_to_double = std::uniform_real_distribution<double>;
	using _rtd_ = _ran_to_double;
}
#define MOMO usings::
#define gift std::
#define GIFT gift
#define momo MOMO
