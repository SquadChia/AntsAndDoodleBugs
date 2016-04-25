#ifndef GRID_H
#define GRID_H
#include "ant.h"
#include "doodlebug.h"
#include "organism.h"
#include <vector>
#include <QGraphicsScene>

class Grid
{
public:
    Grid(unsigned p_rows = 20, unsigned p_columns = 20,  QGraphicsScene * scene = new QGraphicsScene); // default size 20 X 20
    ~Grid();
    QGraphicsScene * p_scene;
    bool placeDoodlebugs(unsigned);	 // Randomly places the specified number of doodlebugs on the grid
                                // Returns false if there is not enough space
    bool placeAnts(unsigned); // Randomly places the specified number of ants on the grid
                        // Returns false if there is not enough space
    void displayMatrix() const;
    void resetAllMoveFlags();
    void moveDoodlebugs();
    void breedDoodlebugs();
    void moveAnts();
    void breedAnts();
    void starveDoodlebugs(); // Culls the doodlebugs that have starved
    unsigned numAnts() const; // returns number of ants present
    unsigned numDoodlebugs() const; // returns number of doodlebugs present
    unsigned getCellCount() const; // returns number of occupied cells



private:
    std::vector< std::vector<Organism*> > m_orgPtrMatrix;   // Declare a rowsXcolumns matrix of pointers-to-Organism
                                                            // The size is expected to remain for the duration of the object
    unsigned cellCount; // tracks number of occupied cells; easier than using a loop of .size() calls and some math every time
};
#endif // GRID_H
