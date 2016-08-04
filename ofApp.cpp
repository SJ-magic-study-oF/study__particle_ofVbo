#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	/********************
		ofSetVerticalSync(true); 
	の時、処理がどんなに速く終わっても、Displayの垂直同期を待ってからの描画になるので、60fpsが頭打ち。
	
	Speed checkしたい時は、
		ofSetFrameRate(0);
		ofSetVerticalSync(false); 
		
	実動作時は、ブンブンに回る結果ファンがうるさくなるので、
		ofSetFrameRate(60);
		ofSetVerticalSync(true); 
		
	あたりが良さそう。
	********************/
	/*
	ofSetFrameRate(0);
	ofSetVerticalSync(false);
	/*/
	ofSetFrameRate(60);
	ofSetVerticalSync(true);
	// */

	/********************
	********************/
	ParticleSet.setup();
}

//--------------------------------------------------------------
void ofApp::update(){
	ParticleSet.update(mouseX, mouseY);
}

//--------------------------------------------------------------
void ofApp::draw(){
	/********************
	********************/
	ofBackground(0, 0, 0, 0);
	ofSetColor(255, 255, 255, 255);
	
	/********************
	********************/
	ParticleSet.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	switch(key){
		case ' ':
		{
			ofImage ScreenImage;
			ScreenImage.grabScreen(0, 0, ofGetWidth(), ofGetHeight());
			ScreenImage.saveImage("screen.png");
		}
			break;
	}
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
	ParticleSet.set_attractive(true);
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
	ParticleSet.set_attractive(false);
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
