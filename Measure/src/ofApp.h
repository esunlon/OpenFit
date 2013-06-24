#pragma once

#include "ofMain.h"
#include "ofxKinect.h"
#include "ofxCv.h"
#include "ofxUI.h"

using namespace ofxCv;
using namespace cv;

class ofApp : public ofBaseApp {
public:
	void setup();
	void setupGui();
	void analyze();
	void update();
	void draw();
	void keyPressed(int key);
	
	ofVec3f ConvertProjectiveToRealWorld(float x, float y, float z);
	
	ofxUICanvas* gui;	
	ofEasyCam cam;
	
	ofImage colorFront, maskFront;
	ofShortImage depthFront;
	ofImage depthMaskFront;
	
	ofImage colorSide, maskSide;
	ofShortImage depthSide;
	ofImage depthMaskSide;
};