#include <iostream>
#include <memory>
#include <vector>

namespace Cerberus
{
	struct Core;
	struct Component;

	struct Entity
	{
		template <typename T>
		std::shared_ptr<T> add_component()
		{
			std::shared_ptr<T> rtn = std::make_shared<T>();

			m_components.push_back(rtn);

			return rtn;
		}

	private:
		friend struct Cerberus::Core;
		std::weak_ptr<Core> m_core;
		std::vector<std::shared_ptr<Component> > m_components;

		void tick();

	};



}