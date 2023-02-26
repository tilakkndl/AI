
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
// #include<dos.h>
void program_start();
void stop_car();
void cout_down();
void last_step();
int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");
    // starting
    program_start();

    // stop car
    stop_car();

    // cout down
    cout_down();

    // last step
    last_step();

    getch();
    closegraph();
}

void program_start()
{
    for (int i = 0; i <= 300; i++)
    {
        // car body

        line(35 + i, 240, 65 + i, 210);
        line(155 + i, 240, 125 + i, 210);
        line(65 + i, 210, 125 + i, 210);
        rectangle(5 + i, 240, 185 + i, 280);
        circle(35 + i, 300, 20);
        circle(155 + i, 300, 20);

        // traffic system

        if (i >= 250)

        {

            setfillstyle(SOLID_FILL, RED);
            circle(547, 152, 8); // red light
            floodfill(547, 152, 15);
        }

        // traffic light

        line(548, 200, 548, 320);
        rectangle(535, 139, 560, 200);
        circle(548, 124, 15); // count
        circle(547, 152, 8);  // red light
        circle(547, 172, 8);  // yellow  light
        circle(547, 192, 8);  // green light

        // road
        line(0, 318, getmaxx(), 318);

        delay(20);
        cleardevice();
    }
}

void stop_car()

{
    // stop car body

    line(340, 240, 370, 210);
    line(460, 240, 430, 210);
    line(370, 210, 430, 210);
    rectangle(310, 240, 490, 280);
    circle(340, 300, 20);
    circle(460, 300, 20);

    // traffic light

    line(548, 200, 548, 320);
    rectangle(535, 139, 560, 200);
    circle(548, 124, 15); // count
    setfillstyle(SOLID_FILL, RED);
    circle(547, 152, 8); // red light
    floodfill(547, 152, 15);
    circle(547, 172, 8); // yellow  light
    circle(547, 192, 8); // green light

    // road

    line(0, 318, getmaxx(), 318);
}

void cout_down()
{
    circle(548, 124, 15); // count

    for (int g = 1; g <= 270; g++)
    {
        if (g == 20)
        {
            outtextxy(546, 122, "1");

            // stop car body

            line(340, 240, 370, 210);
            line(460, 240, 430, 210);
            line(370, 210, 430, 210);
            rectangle(310, 240, 490, 280);
            circle(340, 300, 20);
            circle(460, 300, 20);

            // traffic light

            line(548, 200, 548, 320);
            rectangle(535, 139, 560, 200);
            circle(548, 124, 15); // count

            setfillstyle(SOLID_FILL, RED);
            circle(547, 152, 8); // red light
            floodfill(547, 152, 15);
            circle(547, 172, 8); // yellow  light
            circle(547, 192, 8); // green light

            // road

            line(0, 318, getmaxx(), 318);
        }

        if (g == 50)
        {
            cleardevice();
            circle(548, 124, 15);
            outtextxy(546, 122, "2");

            // stop car body
            line(340, 240, 370, 210);
            line(460, 240, 430, 210);
            line(370, 210, 430, 210);
            rectangle(310, 240, 490, 280);
            circle(340, 300, 20);
            circle(460, 300, 20);

            // traffic light

            line(548, 200, 548, 320);
            rectangle(535, 139, 560, 200);

            circle(548, 124, 15); // count

            setfillstyle(SOLID_FILL, RED);
            circle(547, 152, 8); // red light
            floodfill(547, 152, 15);
            circle(547, 172, 8); // yellow  light
            circle(547, 192, 8); // green light

            // road

            line(0, 318, getmaxx(), 318);
        }

        if (g == 80)

        {

            cleardevice();
            circle(548, 124, 15);
            outtextxy(546, 122, "3");

            // stop car body

            line(340, 240, 370, 210);
            line(460, 240, 430, 210);
            line(370, 210, 430, 210);
            rectangle(310, 240, 490, 280);
            circle(340, 300, 20);
            circle(460, 300, 20);

            // traffic light

            line(548, 200, 548, 320);
            rectangle(535, 139, 560, 200);
            circle(548, 124, 15); // count

            setfillstyle(SOLID_FILL, RED);
            circle(547, 152, 8); // red light
            floodfill(547, 152, 15);
            circle(547, 172, 8); // yellow  light
            circle(547, 192, 8); // green light

            // road

            line(0, 318, getmaxx(), 318);
        }

        if (g == 110)

        {

            cleardevice();
            circle(548, 124, 15);
            outtextxy(546, 122, "4");

            // stop car body

            line(340, 240, 370, 210);
            line(460, 240, 430, 210);
            line(370, 210, 430, 210);
            rectangle(310, 240, 490, 280);
            circle(340, 300, 20);
            circle(460, 300, 20);

            // traffic light

            line(548, 200, 548, 320);
            rectangle(535, 139, 560, 200);

            circle(548, 124, 15); // count
            setfillstyle(SOLID_FILL, RED);
            circle(547, 152, 8); // red light
            floodfill(547, 152, 15);
            circle(547, 172, 8); // yellow  light
            circle(547, 192, 8); // green light

            // road

            line(0, 318, getmaxx(), 318);
        }

        if (g == 140)
        {

            cleardevice();

            circle(548, 124, 15);
            outtextxy(546, 122, "5");

            // stop car body
            line(340, 240, 370, 210);
            line(460, 240, 430, 210);
            line(370, 210, 430, 210);
            rectangle(310, 240, 490, 280);
            circle(340, 300, 20);
            circle(460, 300, 20);

            // traffic light

            line(548, 200, 548, 320);
            rectangle(535, 139, 560, 200);
            circle(548, 124, 15); // count

            setfillstyle(SOLID_FILL, RED);
            circle(547, 152, 8); // red light
            floodfill(547, 152, 15);
            circle(547, 172, 8); // yellow  light
            circle(547, 192, 8); // green light

            // road

            line(0, 318, getmaxx(), 318);
        }

        if (g == 170)
        {
            cleardevice();

            circle(548, 124, 15);
            outtextxy(546, 122, "R");

            // stop car body
            line(340, 240, 370, 210);
            line(460, 240, 430, 210);
            line(370, 210, 430, 210);
            rectangle(310, 240, 490, 280);
            circle(340, 300, 20);
            circle(460, 300, 20);

            // traffic light

            line(548, 200, 548, 320);
            rectangle(535, 139, 560, 200);
            circle(548, 124, 15); // count

            circle(547, 152, 8); // red light
            setfillstyle(SOLID_FILL, YELLOW);
            circle(547, 172, 8); // yellow  light
            floodfill(547, 172, 15);
            circle(547, 192, 8); // green light

            // road

            line(0, 318, getmaxx(), 318);
        }

        if (g == 200)
        {
            cleardevice();
            circle(548, 124, 15);
            outtextxy(546, 122, "R");

            // stop car body

            line(340, 240, 370, 210);
            line(460, 240, 430, 210);
            line(370, 210, 430, 210);
            rectangle(310, 240, 490, 280);
            circle(340, 300, 20);
            circle(460, 300, 20);

            // traffic light

            line(548, 200, 548, 320);
            rectangle(535, 139, 560, 200);
            circle(548, 124, 15); // count

            circle(547, 152, 8); // red light
            setfillstyle(SOLID_FILL, YELLOW);
            circle(547, 172, 8); // yellow  light
            floodfill(547, 172, 15);
            circle(547, 192, 8); // green light

            // road

            line(0, 318, getmaxx(), 318);
        }

        delay(20);
    }

    cleardevice();
    outtextxy(540, 118, "go");

    // stop car body

    line(340, 240, 370, 210);
    line(460, 240, 430, 210);
    line(370, 210, 430, 210);
    rectangle(310, 240, 490, 280);
    circle(340, 300, 20);
    circle(460, 300, 20);

    // traffic light

    line(548, 200, 548, 320);
    rectangle(535, 139, 560, 200);
    circle(548, 124, 15); // count

    circle(547, 152, 8); // red light
    setfillstyle(SOLID_FILL, 0);
    circle(547, 172, 8); // yellow  light
    floodfill(547, 172, 15);

    setfillstyle(SOLID_FILL, GREEN);
    circle(547, 192, 8); // green light
    floodfill(547, 192, 15);

    // road

    line(0, 318, getmaxx(), 318);
}

void last_step()

{
    for (int g = 0; g <= 400; g++)
    {
        // stop car body

        line(340 + g, 240, 370 + g, 210);
        line(460 + g, 240, 430 + g, 210);
        line(370 + g, 210, 430 + g, 210);
        rectangle(310 + g, 240, 490 + g, 280);
        circle(340 + g, 300, 20);
        circle(460 + g, 300, 20);

        // traffic light

        line(548, 200, 548, 320);
        rectangle(535, 139, 560, 200);
        circle(548, 124, 15); // count

        circle(547, 152, 8); // red light
        setfillstyle(SOLID_FILL, 0);
        circle(547, 172, 8); // yellow  light
        floodfill(547, 172, 15);

        setfillstyle(SOLID_FILL, GREEN);
        circle(547, 192, 8); // green light
        floodfill(547, 192, 15);

        // road

        line(0, 318, getmaxx(), 318);

        delay(20);
        cleardevice();
    }
}
