#include <Cerberus/Cerberus.h>
#include <iostream>
#include <stdio.h>


using namespace Cerberus;



struct Player : Component
{
	void on_initialize()
	{

	}

	void on_tick()
	{

	}

};

int main()
{
	std::shared_ptr<Core> core = Core::initialize();

	std::shared_ptr<Entity> ent = core->add_Entity();

	std::shared_ptr<Player> p = ent->add_component<Player>();

	core->start();

	return 0;
}