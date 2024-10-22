#include <iostream>
#include <memory>
#include <vector>

namespace Cerberus
{
	struct Core;
	struct Component;

	struct Entity
	{

	

		void kill();

		template <typename T>
		std::shared_ptr<T> addComponent()
		{
			std::shared_ptr<T> rtn = std::make_shared<T>();

			rtn->m_Entities = m_self;

			rtn->on_initialize();
			m_components.push_back(rtn);

			return rtn;
		}
		
		void tick();

	private:
		friend struct Cerberus::Core;

		std::vector<std::shared_ptr<Component> > m_components;

		bool m_alive;
		std::weak_ptr<Core> m_core;
		std::weak_ptr<Entity> m_self;
		
		

		

	};



}