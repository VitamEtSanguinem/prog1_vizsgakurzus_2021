#include "Simple_window.h"
#include "Graph.h"




int main(){



	using namespace Graph_lib;



	Point tl {100, 100};



	Simple_window win {tl, 1280, 720, "Canvas"};



/*

1. Draw a rectangle as a Rectangle and as a Polygon . Make the lines of the
Polygon red and the lines of the Rectangle blue.

*/




Rectangle r {Point{300,300}, 100, 50};

r.set_color(Color::blue);
win.attach(r);


Polygon poly;

poly.add(Point{100,100});
poly.add(Point{150,100});
poly.add(Point{150,150});
poly.add(Point{100,150});


poly.set_color(Color::red);

win.attach(poly);







/*2. Draw a 100-by-30 Rectangle and place the text “Howdy!” inside it.*/
Rectangle r2 {Point{400,400},100,30};

Text t1 {Point{430,420}, "Howdy!"};


win.attach(r2);
win.attach(t1);


/*3. Draw your initials 150 pixels high. Use a thick line. Draw each initial in
a different color.
*/

Text init1 {Point{600,600}, "R"};
Text init2 {Point{720,600}, "D"};

init1.set_font_size(150);

init2.set_font_size(150);

init1.set_color(Color::green);
init2.set_color(Color::yellow);


win.attach(init1);
win.attach(init2);

/*4. Draw a 3-by-3 tic-tac-toe board of alternating white and red squares.



u.i.: próbáltam ciklussal/tömbbel megvalósítani, sajnos nem sikerült, így ez nem a legelegánsabb megoldás :(


*/

Rectangle tictactoe1{Point{700, 150}, 80, 80};
Rectangle tictactoe2{Point{700, 230}, 80, 80};
Rectangle tictactoe3{Point{700, 310}, 80, 80};

Rectangle tictactoe4{Point{780, 150}, 80, 80};
Rectangle tictactoe5{Point{780, 230}, 80, 80};
Rectangle tictactoe6{Point{780, 310}, 80, 80};

Rectangle tictactoe7{Point{860, 150}, 80, 80};
Rectangle tictactoe8{Point{860, 230}, 80, 80};
Rectangle tictactoe9{Point{860, 310}, 80, 80};


tictactoe1.set_fill_color(Color::white);
tictactoe3.set_fill_color(Color::white);
tictactoe5.set_fill_color(Color::white);
tictactoe7.set_fill_color(Color::white);
tictactoe9.set_fill_color(Color::white);

tictactoe2.set_fill_color(Color::red);
tictactoe4.set_fill_color(Color::red);
tictactoe6.set_fill_color(Color::red);
tictactoe8.set_fill_color(Color::red);



win.attach(tictactoe1);
win.attach(tictactoe2);
win.attach(tictactoe3);
win.attach(tictactoe4);
win.attach(tictactoe5);
win.attach(tictactoe6);
win.attach(tictactoe7);
win.attach(tictactoe8);
win.attach(tictactoe9);






/*


5. Draw a red 1⁄4-inch frame around a rectangle that is three-quarters the
height of your screen and two-thirds the width.


*/



int width = 1280;
int height = 720;



Rectangle rectex5 {Point{80, 80},  width * 0.66, height * 0.75 };
win.attach(rectex5);

Rectangle rectex5out {Point{70, 70},  width * 0.7 , height * 0.8 };
rectex5out.set_style(Line_style(Line_style::dash, 0.25));
rectex5out.set_color(Color::red);

win.attach(rectex5out);


/*



6. What happens when you draw a Shape that doesn’t fit inside its window?
What happens when you draw a Window that doesn’t fit on your screen?
Write two programs that illustrate these two phenomena.




Simple_window win {tl, 6000, 4000, "Canvas"};

Rectangle r {Point{300,300}, 2000, 2000};




*/




/*
7. Draw a two-dimensional house seen from the front, the way a child
would: with a door, two windows, and a roof with a chimney. Feel free to
add details; maybe have “smoke” come out of the chimney.
*/




Rectangle housebase {Point{1100, 100}, 100, 100};

Polygon housetop;

housetop.add(Point{1100,100});
housetop.add(Point{1200,100});
housetop.add(Point{1150,40});


Rectangle hwindow1 {Point{1110, 123}, 30, 30};
Rectangle hwindow2 {Point{1160, 123}, 30, 30};

Rectangle hdoor {Point{1135, 160}, 30, 40};

Circle doorhandle {Point{1140,180}, 5};


Rectangle chimney {Point{1110, 50}, 10, 32};

win.attach(housebase);
win.attach(housetop);
win.attach(hwindow1);
win.attach(hwindow2);
win.attach(hdoor);
win.attach(doorhandle);
win.attach(chimney);













/*8. Draw the Olympic five rings. If you can’t remember the colors, look
them up.*/


Circle oly1 {Point{300,150}, 50};
oly1.set_color(Color::blue);

Circle oly2 {Point{410,150}, 50};
oly2.set_color(Color::black);

Circle oly3 {Point{520,150}, 50};
oly3.set_color(Color::red);

Circle oly4 {Point{357,210}, 50};
oly4.set_color(Color::yellow);

Circle oly5 {Point{467,210}, 50};
oly5.set_color(Color::green);


win.attach(oly1);
win.attach(oly2);
win.attach(oly3);
win.attach(oly4);
win.attach(oly5);




/*9. Display an image on the screen, e.g., a photo of a friend. Label the image
both with a title on the window and with a caption in the window.
*/



Image ii {Point{150,350},"badge.jpg"};

win.attach(ii);
win.set_label("Added rbesenczi badge");


Text label {Point{175,360}, "Image Label"};

win.attach(label);








	win.wait_for_button();





}