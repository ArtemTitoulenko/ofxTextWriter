#pragma once

#include "ofMain.h"

#include "ofxTextWriter.h"

class testApp : public ofSimpleApp {
	
public:
	
	ofxTextWriter tr;
	
	void setup();
	void update();
	void draw();
	void exit();
	
	void keyPressed(int key) {}
	void keyReleased(int key)  {}
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased();
	void mouseReleased(int x, int y, int button );
	
};

