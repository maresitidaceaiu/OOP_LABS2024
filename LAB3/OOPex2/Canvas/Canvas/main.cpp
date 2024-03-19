#include "Canvas.h"

int main() {
    // creeare canvas
    Canvas(20, 10);

    // aplicarea functiilor
    DrawRect(2, 2, 10, 5, '#');
    FillRect(12, 2, 18, 7, '*');
    DrawLine(1, 1, 18, 8, '@');
    DrawCircle(15, 5, 3, '+');
    FillCircle(5, 5, 2, '-');

    // printarea canvasului
    Print();

    // eliberarea canvasului
    Clear();

    return 0;
}
