#include <SDL3/SDL.h>
#include "Button.h"

int main()
{
    SDL_Window* window = SDL_CreateWindow("Button", 800, 600, 0);
	SDL_Renderer* renderer = SDL_CreateRenderer(window, NULL);
	bool isOpen = true;

	Button buttonChangeColorRect(SDL_FRect(300, 275, 200, 50), SDL_Color(255, 255, 255, 255));

	Button buttonQuitRect(SDL_FRect(300, 475, 200, 50), SDL_Color(255, 0, 0, 255));

	SDL_Color clearColor = {0, 0, 0, 255};

	while (isOpen) {
		bool mousePress = false;
		float mouseX = 0;
		float mouseY = 0;

		SDL_Event e;
		if (SDL_PollEvent(&e))
		{
			if (e.type == SDL_EVENT_QUIT)
			{
				isOpen = false;
			}
			if (e.type == SDL_EVENT_KEY_UP && e.key.key == SDLK_ESCAPE)
			{
				isOpen = false;
			}
			if (e.type == SDL_EVENT_MOUSE_BUTTON_UP && e.button.button == SDL_BUTTON_LEFT) {
				mousePress = true;
				mouseX = e.button.x;
				mouseY = e.button.y;
			}
		}

		if (buttonChangeColorRect.Clicked(mousePress, mouseX, mouseY)) {
			if (clearColor.r == 0 && clearColor.g == 0 && clearColor.b == 0) {
				clearColor = {0,255, 255, 255};
			}
			else if (clearColor.r == 0 && clearColor.g == 255 && clearColor.b == 255) {
				clearColor = {255, 255, 0, 255};
			}
			else if (clearColor.r == 255 && clearColor.g == 255 && clearColor.b == 0) {
				clearColor = {0, 0, 0, 255};
			}
		}

		if (buttonQuitRect.Clicked(mousePress, mouseX, mouseY)) {
			isOpen = false;
		}

		SDL_SetRenderDrawColor(renderer, clearColor.r, clearColor.g, clearColor.b, clearColor.a);
		SDL_RenderClear(renderer);

		buttonChangeColorRect.Display(renderer);

		buttonQuitRect.Display(renderer);

		SDL_RenderPresent(renderer);
	}

	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();

	return 0;
}