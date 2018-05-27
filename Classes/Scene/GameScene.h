#pragma once
#include "cocos2d.h"

class GameScene : public cocos2d::Scene
{
	//关于移动背景的三个参数
	//r表示向量模长
	float x = 0;
	float y = 0;
	float r = 0;
public:
	static cocos2d::Scene* createScene();
	virtual bool init();
	virtual void onEnter();
	virtual void onExit();
	virtual void update(float dt);

	// a selector callback
	void menuReturnCallback(cocos2d::Ref* pSender);

	// implement the "static create()" method manually
	CREATE_FUNC(GameScene);
};
