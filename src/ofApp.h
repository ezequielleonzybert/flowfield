#pragma once

#include "ofMain.h"
#include "flow.h"
#include "A.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
		void showFps(){
			std::stringstream strm;
			strm << "fps: " << ofGetFrameRate();
			ofSetWindowTitle(strm.str());  
		};
		
		int width = ofGetWidth();
		int height = ofGetHeight();
		float inc = 0.01;
		float incz = 0.0001;
		float zoff = 0;
		int scl = 20;
		int cols = floor(width / scl);
		int rows = floor(height / scl);

		vector<Flow> flowfield;
		A a;
};
