//AUTOGENERATED FILE: DO NOT EDIT
#ifndef kanyesgameoflife_HPP_
#define kanyesgameoflife_HPP_
#include <MINX/Game.hpp>
#include <MINX/GameTime.hpp>

using namespace MINX;

namespace KanyeGameOfLife
{
	class GameOfLife : public Game
	{
		public:
			GameOfLife();
			void Initialize();
			void LoadContent();
			void UnloadContent();
			void Update(GameTime* gameTime);
			void Draw(GameTime* gameTime);
	};
}

#endif