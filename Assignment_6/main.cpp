#include "headers/Reader.h"
#include "headers/BBox.h"
#include "headers/Writer.h"

int main()
{
    std::vector<Triangle> triangles;
    Reader readShape("resources/cubeModel.stl");
    readShape.getTriangles(triangles);

    Writer writeGeometry;
    writeGeometry.write("Shape.txt", triangles);
}