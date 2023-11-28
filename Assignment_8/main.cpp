#include <iostream>
#include <vector>
#include "headers/Reader.h"
#include "headers/Triangle.h"
#include "headers/Triangulation.h"
#include "headers/Writer.h"

int main()
{
    std::vector<Triangle> triangles;

    Reader readShape("cubeModel.stl");
    readShape.getTriangles(triangles);

    Triangulation triangulation(triangles);

    Writer writer;

    std::vector<Triangle> outTriangles = triangulation.getTriangles();
    writer.write("triangles.txt", outTriangles);
}