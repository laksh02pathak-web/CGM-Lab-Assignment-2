

#include <iostream.h>
#include <conio.h>
#include <graphics.h>
#include <math.h>
#include <stdlib.h>

void main()
{
    int gd = DETECT, gm;
    int x1, y1, x2, y2;
    int dx, dy, steps, i;
    float x, y, xinc, yinc;

    clrscr();

    cout << "Enter starting point (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter ending point (x2 y2): ";
    cin >> x2 >> y2;

    dx = x2 - x1;
    dy = y2 - y1;

    if (abs(dx) > abs(dy))
        steps = abs(dx);
    else
        steps = abs(dy);

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    if (steps == 0)
    {
        putpixel(320 + x1, 240 - y1, WHITE);
    }
    else
    {
        xinc = (float)dx / steps;
        yinc = (float)dy / steps;

        x = x1;
        y = y1;

        for (i = 0; i <= steps; i++)
        {
            putpixel(320 + (int)(x + 0.5),
                     240 - (int)(y + 0.5), WHITE);

            x = x + xinc;
            y = y + yinc;
        }
    }

    getch();
    closegraph();
}
