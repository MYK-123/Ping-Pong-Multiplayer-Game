#pragma once

#include <SDL/SDL.h>


class Game
{

public:
	Game();
	// Initialize the Game
	bool Initialize();
	// Runs the Gameloop until the game is over
	void RunLoop();
	// Shutdowns the Game
	void Shutdown();

private:
	// Helper functions for gameloop
	void ProcessInput();
	void UpdateGame();
	void GenerateOutput();

	// Windows Created by GLFW
	SDL_Window* mWindow;
	// Game should continue to run
	bool mIsRunning;

	// Renderer
	SDL_Renderer* mRenderer;

	Uint32 mTickCount;


};

struct Vector2 {
	float x;
	float y;
};

const int thickness = 15;
const int paddleLength = 100;

int mPaddleDir1 = 0;
int mPaddleDir2 = 0;

Vector2 mPaddlePoss1{ 0,300 - paddleLength }, mPaddlePoss2{ 800 - thickness,300 - paddleLength }, mBallPos{ 400, 300 };

Vector2 mBallVel{ 200, 235 };

bool restartGame = false;

