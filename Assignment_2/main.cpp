#include "headers/Reader.h"
#include "headers/BBox.h"
#include "headers/Writer.h"

int main()
{
    // vector to store Triangle objects
    std::vector<Triangle> triangles;

    Reader readShape("resources/cubeModel.stl");
    readShape.getTriangles(triangles);

    // Writing the data to file
    Writer writeGeometry;
    writeGeometry.write("Shape.txt", triangles);
}