//#include "ofMain.h"

class Flow{
public:
    glm::vec2 position;
    float angle;

    Flow(){};
    void update(glm::vec2 position, float angle){
        this->position = position;
        this->angle = angle;
    }
    void render(){
        //ofSetColor(ofMap(angle, 0,TWO_PI*2,0,255));
        //ofDrawRectangle(position.x, position.y, position.x+20, position.y+20);
        //ofDrawCircle(position.x, position.y, 5);
    }
};