#pragma once
#include"cocos2d.h"
#include"BackGround.h"
//定义最大病毒数量
#define MAXVIRUSNUMBER 5
//定义病毒尺寸
#define VIRUSSCALE 0.1f

class Virus :public cocos2d::Sprite
{
	float virusscale;
public:

	inline bool init(cocos2d::Texture2D*);
	static Virus* create(cocos2d::Texture2D*);

	inline void eat_scretion(){
	 //病毒与分泌物的吞噬
		virusscale = BackGround::lenth(virusscale, SCRETIONSCALE);
		runAction(cocos2d::ScaleTo::create(0.8f, virusscale / DEFAULTBGSCALE));
	}
	Virus* virus_clone(cocos2d::Texture2D*);
	float& get_scale(){
		return virusscale;
	}
};

