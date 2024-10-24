#include "Entity.h"
#include "Component.h"

namespace Cerberus
{
	void Entity::tick()
	{
		for (size_t ci = 0; ci < m_components.size(); ++ci)
		{
			m_components.at(ci)->tick();

		}
	}


	void Entity::kill()
	{
		if (!m_alive) return;
		m_alive = false;
		for (size_t ci = 0; ci < m_components.size(); ++ci)
		{
			m_components.at(ci)->kill();
		}
	}

	
	



}