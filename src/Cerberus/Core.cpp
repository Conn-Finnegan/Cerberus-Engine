#include "Core.h"
#include "Entity.h"

namespace Cerberus
{

	std::shared_ptr<Core> Core::initialize()
	{
		std::shared_ptr<Core> rtn = std::make_shared<Core>();
		rtn->m_self = rtn;

		return rtn;
	}

	std::shared_ptr<Entity> Core::add_Entity()
	{
		std::shared_ptr<Entity> rtn = std::make_shared<Entity>();
		rtn->m_core = m_self;
		rtn->m_self = rtn;
		m_Entities.push_back(rtn);

		std::cout << rtn->m_core.lock().get() << std::endl;

		return rtn;

	}

	void Core::start()
	{
		for (size_t i = 0; i < 5; i++);
		{
			for (size_t ei = 0; ei < m_Entities.size(); ei++)
			{
				m_Entities.at(ei)->tick();
			}
		}

	}

}
