#include "Window.h"
#include "Renderer.h"
#include "Main.h"
int main() {
	Window window("Renderer",900,900);
	Renderer renderer(&window);
	init();
	while (window.isOpen()) {
		renderer.clear(0x000000);

		window.processMessages();

		update(window.input,renderer);

		window.swapBuffers();
	}
}