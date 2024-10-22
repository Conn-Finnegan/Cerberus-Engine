#include "Entity.h"
#include "Component.h"

namespace Cerberus 
{


	void Component::tick()
	{
		onTick();
	}

	void Component::onTick(){}
	void Component::display(){}

	


}