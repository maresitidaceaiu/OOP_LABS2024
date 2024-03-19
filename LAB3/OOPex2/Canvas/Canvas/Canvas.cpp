﻿#include "Canvas.h"
#include <iostream>
#include <cmath> 

Canvas::Canvas(int width, int height) : width(width), height(height) {
    // Inițializare matrice
    matrix = new char* [height];
    for (int i = 0; i < height; ++i) {
        matrix[i] = new char[width];
        for (int j = 0; j < width; ++j) {
            matrix[i][j] = ' '; // Inițializare pixeli
        }
    }
}

Canvas::Canvas() {
    // Dealocare matrice
    for (int i = 0; i < height; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

void Canvas::DrawCircle(int x, int y, int ray, char ch) {
    // Implementarea pentru desenarea unui cerc
    for (int i = x - ray; i <= x + ray; ++i) {
        for (int j = y - ray; j <= y + ray; ++j) {
            if ((i - x) * (i - x) + (j - y) * (j - y) <= ray * ray) {
                SetPoint(i, j, ch);
            }
        }
    }
}

void Canvas::FillCircle(int x, int y, int ray, char ch) {
    // Implementarea pentru cercul plin
    for (int i = x - ray; i <= x + ray; ++i) {
        for (int j = y - ray; j <= y + ray; ++j) {
            if ((i - x) * (i - x) + (j - y) * (j - y) <= ray * ray) {
                SetPoint(i, j, ch);
            }
        }
    }
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch) {
    // Implementarea pentru desenarea unui dreptunghi
    for (int i = left; i <= right; ++i) {
        SetPoint(i, top, ch);
        SetPoint(i, bottom, ch);
    }
    for (int i = top + 1; i < bottom; ++i) {
        SetPoint(left, i, ch);
        SetPoint(right, i, ch);
    }
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch) {
    // Implementarea pentru dreptunghiul plin
    for (int i = top; i <= bottom; ++i) {
        for (int j = left; j <= right; ++j) {
            SetPoint(j, i, ch);
        }
    }
}

void Canvas::SetPoint(int x, int y, char ch) {
    // Setarea unui punct pe canvas
    if (x >= 0 && x < width && y >= 0 && y < height) {
        matrix[y][x] = ch;
    }
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch) {
    // Implementarea pentru desenarea unei linii folosind algoritmul lui Bresenham
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int sx = (x1 < x2) ? 1 : -1;
    int sy = (y1 < y2) ? 1 : -1;
    int err = dx - dy;

    while (x1 != x2 || y1 != y2) {
        SetPoint(x1, y1, ch);
        int e2 = 2 * err;
        if (e2 > -dy) {
            err -= dy;
            x1 += sx;
        }
        if (e2 < dx) {
            err += dx;
            y1 += sy;
        }
    }
    SetPoint(x2, y2, ch);
}

void Canvas::Print() {
    // Afișarea canvasului
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            std::cout << matrix[i][j];
        }
        std::cout << std::endl;
    }
}

void Canvas::Clear() {
    // Curățarea canvasului
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            matrix[i][j] = ' ';
        }
    }
}
