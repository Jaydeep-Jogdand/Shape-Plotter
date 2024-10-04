// Polygon.cpp
#include "Polygon.h"
#include<fstream>
#include<iostream>
Polygon::Polygon() { }

void Polygon::addVertex(Point p) {
    vertices.push_back(p);  // Add a vertex point to the list
}

void Polygon::createPolygon() {
    if (vertices.empty()) {
        std::cout << "No vertices provided for the polygon!" << std::endl;
        return;
    }

    // Open file to write the polygon vertices
    std::ofstream outFile("shapes.dat", std::ios::trunc);

    // Write the points to the file
    for (const auto& vertex : vertices) {
        outFile << vertex.x << " " << vertex.y << std::endl;  // Direct access to x and y
    }

    outFile.close();
    std::cout << "Polygon data written to shapes.dat" << std::endl;
}

//#include "Polygon.h"
//#include <iostream>
//using namespace std;
//
//void Polygon::Display4() {
//    cout << "This is a Polygon " << endl;
//}