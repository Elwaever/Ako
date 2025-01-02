#include "Engine.h"

#include "iostream"


ako::Engine::Engine()
{
	init();
}

ako::Engine::~Engine()
{
	std::cout << "-> engine ending..." << std::endl;
}

void ako::Engine::Run()
{

}

void ako::Engine::init()
{

	std::cout << "-> engine starting..." << std::endl;
}
