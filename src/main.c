#include <SFML/Graphics.h>
#include <stdlib.h>

int main()
{
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow* window;

    sfEvent event;
    /* Create the main window */
    window = sfRenderWindow_create(mode, "SFML window", sfResize | sfClose, NULL);
    if (!window)
        return EXIT_FAILURE;
    /* Start the game loop */
    while (sfRenderWindow_isOpen(window))
    {
        /* Process events */
        while (sfRenderWindow_pollEvent(window, &event))
        {
            /* Close window : exit */
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
        }
        /* Clear the screen */
        sfRenderWindow_clear(window, sfBlack);
        /* Update the window */
        sfRenderWindow_display(window);
    }


    sfRenderWindow_destroy(window);
    return EXIT_SUCCESS;
}