#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    for(int i = 0; i < cols * rows; i++){
        flowfield.push_back(Flow());
    }
}

//--------------------------------------------------------------
void ofApp::update(){
     showFps();
    //flowfield update
    float xoff = 0;
    for(int x = 0; x < cols; x++){
        float yoff = 0;
        for(int y = 0; y < rows; y++){
            glm::vec2 position = {x*scl, y*scl};
            float angle = ofNoise(xoff, yoff, zoff) * TWO_PI * 2;
            float index = x * cols + y;
            flowfield[index].update(position, angle);
            yoff += inc;
        }
        xoff += inc;
        zoff += incz;
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(Flow f : flowfield){
       f.render();
    }    
    a.doSomething();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
