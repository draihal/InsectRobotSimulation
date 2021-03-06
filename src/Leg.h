#pragma once

#include "cinder/app/App.h"
#include "Node.h"
#include "ModelConfig.h"
class Leg;
typedef std::shared_ptr<Leg> LegRef;

class Leg 
{
public:
	static LegRef create();
	Leg() {};
	void setup(std::string name, NodeRef root, ci::vec3 startPos, float startRot, bool flip, ModelConfig * _config);
	
	std::string mName;

	NodeRef sholderLR;
	NodeRef sholderUD;
	NodeRef knee;




	void update();
	void draw(int type);
	void setRotationData(float shoulder1Angle, float shoulder2Angle, float kneeAngle);
	

	float shoulder1Angle =0;
	float shoulder2Angle=0;
	float kneeAngle=0;

	bool useIK = true;
	ci::vec4 currentPos;

};