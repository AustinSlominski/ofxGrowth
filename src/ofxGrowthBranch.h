#pragma once

#include "ofMain.h"

class ofxGrowthBranch : public of3dPrimitive{

public:

    void generateBranch(ofVec3f origin, ofVec3f initial_vector, int level);

    void setDensity(float density);
    void setLength(float length);
    void setScale(float scale);
    void setSegments(int segments);
    void setDepth(int depth);
    void setLeafLevel(int leaf_level);
    void setCrookedness(float crookedness);
    void setColormode(int color_mode);

    ofxGrowthBranch();

private:

    float   density;
    float   length;
    float   scale;
    int     segments;
    int     depth;
    int     leaf_level;
    float   crookedness;
    int     color_mode;
    ofVec3f origin;
    ofVec3f growth_vector;

    bool dim_strokewidth;

    float f_dim;
};