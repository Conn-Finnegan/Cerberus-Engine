#include <memory>

namespace Cerberus
{
	struct Entity;

	struct Component
	{
		virtual void on_initialize(){}
	
		virtual void kill(){}
		
		void display();
		
		void onTick();

		void tick();

	private:

		friend struct Cerberus::Entity;



		std::weak_ptr<Entity> m_Entities;

	
	};
}

