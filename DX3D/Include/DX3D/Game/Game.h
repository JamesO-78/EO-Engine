#pragma once
#include <DX3D/Core/Base.h>

namespace dx3d
{

	class Game : public Base
	{

		public:

			Game();
			virtual ~Game() override;
			virtual void Run() final;

		private:

			bool m_isRunning{ true };
			bool m_Poop{ true };

	};
}