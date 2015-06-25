/***
    main() program for the 211 drawing program (p6) 

    (1) Reads in shape descriptions, for example 

            square 10 10 4

    (2) Creates a shape object for each shape description, for example

            new Square(10, 10, 4)
    
    (3) Puts all the shape objects into a vector of Shape *

    (4) After all the input has been read, all the shapes are drawn 
       onto a grid object.
***/

#include <iostream>
#include <vector>
using namespace std;

// you have to provide all of these files
// they can be empty to start with so you can get the Makefile to work
#include "shape.h"
#include "triangle.h"
#include "circle.h"
#include "square.h"
#include "point.h"
#include "grid.h"

int main()
{
    string shape;
    int x, y;
    int size;
    char letter;

    // a vector to hold all the shapes created from the commands in stdin
    vector<Shape*> shapes;

    // while there are more shapes to read in standard input
    while (cin >> shape)
    {
        // if the shape is a square, read in the parameters for a square
        if (shape == "square")
        {
            cin >> x;
            cin >> y;
            cin >> size;
            // create a new Square object and insert it into the vector
            shapes.push_back(new Square(x, y, size));
        }
        if (shape == "triangle")
        {
            cin >> x;
            cin >> y;
            shapes.push_back(new Triangle(x, y));
        }
        if (shape == "circle")
        {
            cin >> x;
            cin >> y;
            shapes.push_back(new Circle(x, y));
        }
        if (shape == "point")
        {
            cin >> x;
            cin >> y;
            cin >> letter;
            shapes.push_back(new Point(x, y, letter));
        }
    }

    // Instantiate a Grid object to draw all the shapes into
    Grid grid;

    // tell all the shapes in the shapes vector to draw themselves 
    // into our grid object
    for (unsigned int i = 0; i < shapes.size(); i++)
    {
      shapes[i]->draw(grid);
    }

    // now that all the shapes have been drawn in the grid, print the grid
    grid.print();

    return 0;
}
