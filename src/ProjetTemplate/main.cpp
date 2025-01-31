#include "pch.h"
#include "main.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include <thread>

int main()
{
#ifdef _DEBUG
	_CrtDumpMemoryLeaks();
#endif
	using namespace std::chrono;

	auto previousTime = high_resolution_clock::now();

	while (true)
	{
		auto currentTime = high_resolution_clock::now();

		duration<float> deltaTime = currentTime - previousTime;

		previousTime = currentTime;

		std::cout << deltaTime.count() << std::endl;
	}

	return 0;
}
