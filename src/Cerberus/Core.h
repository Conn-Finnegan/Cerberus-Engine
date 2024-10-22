#include <iostream>
#include<memory>
#include<vector>

namespace Cerberus
{
	struct Entity;
	struct Core
	{
		static std::shared_ptr<Core> initialize();
		void start();
		std::shared_ptr<Entity> add_Entity();

	private:
		std::vector<std::shared_ptr<Entity> > m_Entities;
		std::weak_ptr<Core> m_self;


	};
}

