#pragma once

class Point{
    private:
        float x;
        float y;
    public:
        float getX() const;
        float getY() const;
        void setX(float val);
        void setY(float val);
        void translater(const Point &a);
        
};