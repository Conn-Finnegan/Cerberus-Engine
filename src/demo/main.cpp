#include <Cerberus/Cerberus.h>
#include <iostream>

using namespace Cerberus;

struct Test
{
	int m_Temp;
};

int main()
{
	std::shared_ptr<Core> core = Core::initialize();

	std::shared_ptr<Entity> ent = core->add_Entity();

	ent->add_component<Test>();

	core->add_Entity();
	core->start();

	return 0;
}