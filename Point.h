#pragma once

class Point{
    private:
        float x;
        float y;
    public:
        // Constructeur
        Point(){
        x = 0;
        y = 0;
        }

        Point(float x, float y){
            this -> x = x;
            this -> y = y;
        }

        Point(Point const &p){
            x = p.x;
            y = p.y;
        }
        
        //Accesseur
        float getX() const;
        float getY() const;

        //Setteur
        void setX(float val);
        void setY(float val);

        //Méthodes
        void translater(const Point &a);
        
};