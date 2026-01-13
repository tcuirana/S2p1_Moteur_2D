#include "Button.h"

Button::Button(SDL_FRect CreateButton, SDL_Color ColorButton): _CreateButton(CreateButton), _ColorButton(ColorButton){}

bool Button::Clicked(bool mousePress, float mouseX, float mouseY)
{
	if (mouseX >= _CreateButton.x && mouseX <= _CreateButton.x + _CreateButton.w
		&& mouseY >= _CreateButton.y && mouseY <= _CreateButton.y + _CreateButton.h
		&& mousePress)
	{
		return true;
	}

	return false;
}

void Button::Display(SDL_Renderer* renderer)
{
	SDL_SetRenderDrawColor(renderer, _ColorButton.r, _ColorButton.g, _ColorButton.b, _ColorButton.a);
	SDL_RenderFillRect(renderer, &_CreateButton);
}