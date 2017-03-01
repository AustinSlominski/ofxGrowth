#pragma once

#include "ofMain.h"
#include "ofxGrowthNode.h"
#include "ofThread.h"

class ofxGrowth: public ofThread {
    
    
    
public:

    void setup();
    void setupMesh(ofxGrowthNode * current_node, ofMesh * current_mesh, int mesh_node_id);
    
    void update();
    void updateMesh(ofxGrowthNode * current_node, ofMesh * current_mesh, int mesh_node_id);
    void updateNodes(int l, ofVec3f gv);
    
    void drawMesh();
    
    int num_nodes;
    
    float length;
    float crookedness;
    float density;
    float dim_f;
    int depth;
    int node_max;
    int stroke_width;
    
    int current_mesh_id;
    
    
    int traversal_node;
    int traversal_speed;
    
    
    ofVec3f growth_vector;
    ofVec3f origin;
    
    ofxGrowth();
    ~ofxGrowth();
    
    vector<unique_ptr<ofMesh>> meshes;
    ofxGrowthNode * root;
    
    int cap_mesh_node_id;
    int cap_current_mesh_id;
    ofMesh * cap_current_mesh;
    ofxGrowthNode * cap_current_node;
    
    int driver;
    
    bool b_traverse;
};
