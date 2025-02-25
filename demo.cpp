#include <iostream>
#include <cmath>
#include "geometrija.h"

// Function to display a horizontal line for better output formatting
void displaySeparator() {
    std::cout << "\n----------------------------------------\n";
}

int main() {
    std::cout << "3D GEOMETRY LIBRARY TEST DEMO\n";
    displaySeparator();

    // PART 1: Testing Taskas3D (3D Point) class
    std::cout << "TESTING TASKAS3D (3D POINT) CLASS\n";
    
    // Create points using different constructors
    Taskas3D defaultPoint;
    Taskas3D customPoint(3.0, 4.0, 5.0);
    Taskas3D userPoint;
    
    // Display default point
    std::cout << "Default point: ";
    defaultPoint.rasykTaska();
    std::cout << std::endl;
    
    // Display custom point
    std::cout << "Custom point: ";
    customPoint.rasykTaska();
    std::cout << std::endl;
    
    // Distance from origin calculation
    std::cout << "Distance from origin to custom point: " 
              << customPoint.atstumasIkiKoordinaciuPradzios() << std::endl;
    
    // Test point modification methods
    std::cout << "\nModifying custom point coordinates...\n";
    customPoint.keiskX(6.0);
    customPoint.keiskY(8.0);
    customPoint.keiskZ(10.0);
    std::cout << "After modification: ";
    customPoint.rasykTaska();
    std::cout << std::endl;
    
    // Test keiskTaska method
    std::cout << "\nChanging all coordinates at once...\n";
    customPoint.keiskTaska(1.0, 2.0, 3.0);
    std::cout << "After bulk modification: ";
    customPoint.rasykTaska();
    std::cout << std::endl;
    
    // Test user input for a point (commented out to make demo automatic)
    /*
    std::cout << "\nPlease enter coordinates for a point (x y z): ";
    Taskas3D::skaitykTaska(userPoint);
    std::cout << "You entered: ";
    userPoint.rasykTaska();
    std::cout << std::endl;
    */
    
    displaySeparator();
    
    // PART 2: Testing Atkarpa3D (3D Line Segment) class
    std::cout << "TESTING ATKARPA3D (3D LINE SEGMENT) CLASS\n";
    
    Taskas3D pointA(0.0, 0.0, 0.0);
    Taskas3D pointB(3.0, 4.0, 0.0);
    Taskas3D pointC(3.0, 0.0, 4.0);
    
    Atkarpa3D segment1(pointA, pointB);
    Atkarpa3D segment2(pointB, pointC);
    Atkarpa3D segment3(pointC, pointA);
    
    std::cout << "Point A: ";
    pointA.rasykTaska();
    std::cout << std::endl;
    
    std::cout << "Point B: ";
    pointB.rasykTaska();
    std::cout << std::endl;
    
    std::cout << "Point C: ";
    pointC.rasykTaska();
    std::cout << std::endl;
    
    std::cout << "Length of segment AB: " << segment1.atstumasTarpTasku() << std::endl;
    std::cout << "Length of segment BC: " << segment2.atstumasTarpTasku() << std::endl;
    std::cout << "Length of segment CA: " << segment3.atstumasTarpTasku() << std::endl;
    
    displaySeparator();
    
    // PART 3: Testing Trikampis3D (3D Triangle) class
    std::cout << "TESTING TRIKAMPIS3D (3D TRIANGLE) CLASS\n";
    
    Trikampis3D triangle(segment1, segment2, segment3);
    
    std::cout << "Triangle with vertices:\n";
    std::cout << "A: ";
    pointA.rasykTaska();
    std::cout << std::endl;
    
    std::cout << "B: ";
    pointB.rasykTaska();
    std::cout << std::endl;
    
    std::cout << "C: ";
    pointC.rasykTaska();
    std::cout << std::endl;
    
    std::cout << "Triangle perimeter: " << triangle.trikampioPerimetras() << std::endl;
    std::cout << "Triangle area: " << triangle.trikampioPlotas() << std::endl;
    
    displaySeparator();
    
    // PART 4: Creating a more complex example
    std::cout << "TESTING WITH A TETRAHEDRON EXAMPLE\n";
    
    // Define the vertices of a tetrahedron
    Taskas3D tetraA(0.0, 0.0, 0.0);
    Taskas3D tetraB(1.0, 0.0, 0.0);
    Taskas3D tetraC(0.5, std::sqrt(3.0)/2, 0.0);
    Taskas3D tetraD(0.5, std::sqrt(3.0)/6, std::sqrt(6.0)/3);
    
    // Define the edges of the tetrahedron
    Atkarpa3D edgeAB(tetraA, tetraB);
    Atkarpa3D edgeBC(tetraB, tetraC);
    Atkarpa3D edgeCA(tetraC, tetraA);
    Atkarpa3D edgeAD(tetraA, tetraD);
    Atkarpa3D edgeBD(tetraB, tetraD);
    Atkarpa3D edgeCD(tetraC, tetraD);
    
    // Define the faces of the tetrahedron
    Trikampis3D faceABC(edgeAB, edgeBC, edgeCA);
    Trikampis3D faceABD(edgeAB, edgeBD, edgeAD);
    Trikampis3D faceBCD(edgeBC, edgeCD, edgeBD);
    Trikampis3D faceCAD(edgeCA, edgeAD, edgeCD);
    
    // Display information about the tetrahedron
    std::cout << "Regular tetrahedron with vertices:\n";
    std::cout << "A: ";
    tetraA.rasykTaska();
    std::cout << std::endl;
    
    std::cout << "B: ";
    tetraB.rasykTaska();
    std::cout << std::endl;
    
    std::cout << "C: ";
    tetraC.rasykTaska();
    std::cout << std::endl;
    
    std::cout << "D: ";
    tetraD.rasykTaska();
    std::cout << std::endl;
    
    // Calculate and display the total surface area of the tetrahedron
    double totalArea = faceABC.trikampioPlotas() + 
                      faceABD.trikampioPlotas() + 
                      faceBCD.trikampioPlotas() + 
                      faceCAD.trikampioPlotas();
                      
    std::cout << "Total surface area of the tetrahedron: " << totalArea << std::endl;
    
    displaySeparator();
    std::cout << "DEMO COMPLETED SUCCESSFULLY\n";
    
    return 0;
}