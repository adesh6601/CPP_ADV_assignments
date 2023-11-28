#include "headers/Reader.h"
#include"headers/BBox.h"
#include "headers/Writer.h"
#include "headers/Geometry.h"


void printClassName(Point3D obj)
{
    obj.print();
}
 
int main()
{
    std::vector<Triangle> triangles;

    Reader readShape("resources/cubeModel.stl");
    readShape.getTriangles(triangles);

    Writer writeGeometry;
    writeGeometry.write("Shape.txt", triangles);

    Point3D pointObj;
    Triangle triangleObj;
    Triangulation triangulationObj;

    printClassName(pointObj);
    printClassName(triangleObj);
    printClassName(triangulationObj);


}