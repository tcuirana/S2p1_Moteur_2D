#pragma once
#include <SDL3/SDL.h>

class Button
{
protected:
	SDL_FRect _CreateButton;
	SDL_Color _ColorButton;


public:
	Button(SDL_FRect CreateButton, SDL_Color ColorButton);

	bool Clicked(bool mousePress, float mouseX, float mouseY);
	void Display(SDL_Renderer* renderer);
};