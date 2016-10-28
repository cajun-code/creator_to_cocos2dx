////// AUTOGENERATED:BEGIN //////
////// DO     NOT     EDIT //////

#include <ui/CocosGUI.h>
#include "creator_utils.h"

USING_NS_CC;

bool CreatorSprites_init()
{
    auto director = Director::getInstance();
    auto glview = director->getOpenGLView();
    auto frameSize = glview->getFrameSize();
    glview->setDesignResolutionSize(frameSize.width / (frameSize.height / 640), frameSize.height / (frameSize.height / 640), ResolutionPolicy::NO_BORDER);

    // BEGIN SpriteFrame loading
    auto spriteFrameCache = SpriteFrameCache::getInstance();
    // Files from .plist
    // creator_assets/test_polygon.plist processed manually. No need to include it in the assets folder

    // Files from .png
    auto sf_grossinis_sister2_png = SpriteFrame::create("creator_assets/test_polygon.png", Rect(279, 26, 55, 130), false, Vec2(0, -2), Size(56, 138));
    sf_grossinis_sister2_png->setCenterRectInPixels(Rect(17,62,21,32));
    spriteFrameCache->addSpriteFrame(sf_grossinis_sister2_png, "grossinis_sister2.png");
    auto sf_test_polygon = SpriteFrame::create("creator_assets/test_polygon.png", Rect(4, 2, 380, 152), false, Vec2(0.5, 0.5), Size(387, 157));
    spriteFrameCache->addSpriteFrame(sf_test_polygon, "test_polygon");
    auto sf_default_btn_normal = SpriteFrame::create("creator_assets/image/default_btn_normal.png", Rect(0, 0, 40, 40), false, Vec2(0, 0), Size(40, 40));
    sf_default_btn_normal->setCenterRectInPixels(Rect(3,3,34,30));
    spriteFrameCache->addSpriteFrame(sf_default_btn_normal, "default_btn_normal");
    auto sf_default_scrollbar_bg = SpriteFrame::create("creator_assets/image/default_scrollbar_bg.png", Rect(0, 0, 30, 15), false, Vec2(0, 0), Size(30, 15));
    sf_default_scrollbar_bg->setCenterRectInPixels(Rect(10,0,10,15));
    spriteFrameCache->addSpriteFrame(sf_default_scrollbar_bg, "default_scrollbar_bg");
    auto sf_default_panel = SpriteFrame::create("creator_assets/image/default_panel.png", Rect(0, 0, 20, 20), false, Vec2(0, 0), Size(20, 20));
    sf_default_panel->setCenterRectInPixels(Rect(4,3,12,14));
    spriteFrameCache->addSpriteFrame(sf_default_panel, "default_panel");
    auto sf_arial16 = SpriteFrame::create("creator_assets/arial16.png", Rect(0, 0, 510, 61), false, Vec2(-1, 225.5), Size(512, 512));
    spriteFrameCache->addSpriteFrame(sf_arial16, "arial16");
    auto sf_default_scrollbar_vertical = SpriteFrame::create("creator_assets/image/default_scrollbar_vertical.png", Rect(2, 0, 11, 30), false, Vec2(0, 0), Size(15, 30));
    sf_default_scrollbar_vertical->setCenterRectInPixels(Rect(0,5,11,20));
    spriteFrameCache->addSpriteFrame(sf_default_scrollbar_vertical, "default_scrollbar_vertical");
    auto sf_default_sprite = SpriteFrame::create("creator_assets/image/default_sprite.png", Rect(0, 2, 40, 36), false, Vec2(0, 0), Size(40, 40));
    spriteFrameCache->addSpriteFrame(sf_default_sprite, "default_sprite");
    auto sf_default_btn_disabled = SpriteFrame::create("creator_assets/image/default_btn_disabled.png", Rect(0, 0, 40, 40), false, Vec2(0, 0), Size(40, 40));
    sf_default_btn_disabled->setCenterRectInPixels(Rect(4,4,32,28));
    spriteFrameCache->addSpriteFrame(sf_default_btn_disabled, "default_btn_disabled");
    auto sf_default_btn_pressed = SpriteFrame::create("creator_assets/image/default_btn_pressed.png", Rect(0, 0, 40, 40), false, Vec2(0, 0), Size(40, 40));
    sf_default_btn_pressed->setCenterRectInPixels(Rect(3,4,34,32));
    spriteFrameCache->addSpriteFrame(sf_default_btn_pressed, "default_btn_pressed");
    auto sf_default_scrollbar_vertical_bg = SpriteFrame::create("creator_assets/image/default_scrollbar_vertical_bg.png", Rect(0, 0, 15, 30), false, Vec2(0, 0), Size(15, 30));
    sf_default_scrollbar_vertical_bg->setCenterRectInPixels(Rect(0,7,15,15));
    spriteFrameCache->addSpriteFrame(sf_default_scrollbar_vertical_bg, "default_scrollbar_vertical_bg");
    auto sf_default_progressbar = SpriteFrame::create("creator_assets/image/default_progressbar.png", Rect(0, 0, 30, 15), false, Vec2(0, 0), Size(30, 15));
    sf_default_progressbar->setCenterRectInPixels(Rect(5,0,20,15));
    spriteFrameCache->addSpriteFrame(sf_default_progressbar, "default_progressbar");
    auto sf_default_sprite_splash = SpriteFrame::create("creator_assets/image/default_sprite_splash.png", Rect(0, 0, 2, 2), false, Vec2(0, 0), Size(2, 2));
    spriteFrameCache->addSpriteFrame(sf_default_sprite_splash, "default_sprite_splash");
    auto sf_island_polygon_png = SpriteFrame::create("creator_assets/test_polygon.png", Rect(1, 1, 287, 152), false, Vec2(16, 7), Size(320, 200));
    spriteFrameCache->addSpriteFrame(sf_island_polygon_png, "island_polygon.png");
    auto sf_grossini_dance_08 = SpriteFrame::create("creator_assets/grossini_dance_08.png", Rect(17, 7, 51, 109), false, Vec2(0, -1), Size(85, 121));
    spriteFrameCache->addSpriteFrame(sf_grossini_dance_08, "grossini_dance_08");
    auto sf_default_scrollbar = SpriteFrame::create("creator_assets/image/default_scrollbar.png", Rect(0, 2, 30, 11), false, Vec2(0, 0), Size(30, 15));
    sf_default_scrollbar->setCenterRectInPixels(Rect(10,0,10,11));
    spriteFrameCache->addSpriteFrame(sf_default_scrollbar, "default_scrollbar");
    auto sf_grossinis_sister1_png = SpriteFrame::create("creator_assets/test_polygon.png", Rect(336, 1, 50, 116), false, Vec2(0, -11), Size(52, 139));
    sf_grossinis_sister1_png->setCenterRectInPixels(Rect(7,6,34,39));
    spriteFrameCache->addSpriteFrame(sf_grossinis_sister1_png, "grossinis_sister1.png");
    auto sf_default_progressbar_bg = SpriteFrame::create("creator_assets/image/default_progressbar_bg.png", Rect(0, 0, 60, 15), false, Vec2(0, 0), Size(60, 15));
    sf_default_progressbar_bg->setCenterRectInPixels(Rect(5,0,50,15));
    spriteFrameCache->addSpriteFrame(sf_default_progressbar_bg, "default_progressbar_bg");
    auto sf_iso_test = SpriteFrame::create("creator_assets/iso-test.png", Rect(2, 1, 319, 116), false, Vec2(-94.5, 69), Size(512, 256));
    spriteFrameCache->addSpriteFrame(sf_iso_test, "iso-test");
    // END SpriteFrame loading

    return true;
}
Node* CreatorSprites_create()
{
    // New node
    auto scene_0_0 = Scene::create();
    scene_0_0->setAnchorPoint(Vec2(0, 0));
    scene_0_0->setColor(Color3B(255, 255, 255));
    scene_0_0->setLocalZOrder(0);
    scene_0_0->setGlobalZOrder(0);
    scene_0_0->setOpacity(255);
    scene_0_0->setOpacityModifyRGB(false);
    scene_0_0->setCascadeOpacityEnabled(true);
    scene_0_0->setTag(-1);
    scene_0_0->setContentSize(Size(0, 0));
    // New node
    auto sprite_1_1 = Sprite::create();
    sprite_1_1->setSpriteFrame("grossinis_sister1.png");
    sprite_1_1->setAnchorPoint(Vec2(0.5, 0.5));
    sprite_1_1->setScaleY(1);
    sprite_1_1->setScaleX(1);
    sprite_1_1->setColor(Color3B(255, 255, 255));
    sprite_1_1->setName("grossinis_sister1");
    sprite_1_1->setLocalZOrder(0);
    sprite_1_1->setGlobalZOrder(0);
    sprite_1_1->setOpacity(255);
    sprite_1_1->setOpacityModifyRGB(false);
    sprite_1_1->setCascadeOpacityEnabled(true);
    sprite_1_1->setSkewX(0);
    sprite_1_1->setTag(-1);
    sprite_1_1->setContentSize(Size(50, 116));
    sprite_1_1->setSkewY(0);
    sprite_1_1->setRotationSkewY(0);
    sprite_1_1->setPosition(Vec2(48, 79));
    sprite_1_1->setRotationSkewX(0);
    sprite_1_1->setCenterRectNormalized(Rect(0,0,1,1));
    scene_0_0->addChild(sprite_1_1);
    // New node
    auto sprite_1_2 = Sprite::create();
    sprite_1_2->setSpriteFrame("grossinis_sister2.png");
    sprite_1_2->setAnchorPoint(Vec2(0.5, 0.5));
    sprite_1_2->setScaleY(1);
    sprite_1_2->setScaleX(1);
    sprite_1_2->setColor(Color3B(255, 255, 255));
    sprite_1_2->setName("grossinis_sister2");
    sprite_1_2->setLocalZOrder(0);
    sprite_1_2->setGlobalZOrder(0);
    sprite_1_2->setOpacity(255);
    sprite_1_2->setOpacityModifyRGB(false);
    sprite_1_2->setCascadeOpacityEnabled(true);
    sprite_1_2->setSkewX(0);
    sprite_1_2->setTag(-1);
    sprite_1_2->setContentSize(Size(56, 138));
    sprite_1_2->setSkewY(0);
    sprite_1_2->setRotationSkewY(0);
    sprite_1_2->setPosition(Vec2(136, 85));
    sprite_1_2->setRotationSkewX(0);
    sprite_1_2->setCenterRectNormalized(Rect(0,0,1,1));
    scene_0_0->addChild(sprite_1_2);
    // New node
    auto sprite_1_3 = Sprite::create();
    sprite_1_3->setSpriteFrame("grossinis_sister2.png");
    sprite_1_3->setAnchorPoint(Vec2(0.5, 0.5));
    sprite_1_3->setScaleY(-1);
    sprite_1_3->setScaleX(1);
    sprite_1_3->setColor(Color3B(255, 255, 255));
    sprite_1_3->setName("grossinis_sister2");
    sprite_1_3->setLocalZOrder(0);
    sprite_1_3->setGlobalZOrder(0);
    sprite_1_3->setOpacity(255);
    sprite_1_3->setOpacityModifyRGB(false);
    sprite_1_3->setCascadeOpacityEnabled(true);
    sprite_1_3->setSkewX(0);
    sprite_1_3->setTag(-1);
    sprite_1_3->setContentSize(Size(56, 138));
    sprite_1_3->setSkewY(0);
    sprite_1_3->setRotationSkewY(0);
    sprite_1_3->setPosition(Vec2(122, 273));
    sprite_1_3->setRotationSkewX(0);
    sprite_1_3->setCenterRectNormalized(Rect(0,0,1,1));
    scene_0_0->addChild(sprite_1_3);
    // New node
    auto sprite_1_4 = Sprite::create();
    sprite_1_4->setSpriteFrame("grossinis_sister1.png");
    sprite_1_4->setAnchorPoint(Vec2(0.5, 0.5));
    sprite_1_4->setScaleY(-1);
    sprite_1_4->setScaleX(1);
    sprite_1_4->setColor(Color3B(255, 255, 255));
    sprite_1_4->setName("grossinis_sister1");
    sprite_1_4->setLocalZOrder(0);
    sprite_1_4->setGlobalZOrder(0);
    sprite_1_4->setOpacity(255);
    sprite_1_4->setOpacityModifyRGB(false);
    sprite_1_4->setCascadeOpacityEnabled(true);
    sprite_1_4->setSkewX(0);
    sprite_1_4->setTag(-1);
    sprite_1_4->setContentSize(Size(52, 139));
    sprite_1_4->setSkewY(0);
    sprite_1_4->setRotationSkewY(0);
    sprite_1_4->setPosition(Vec2(48, 253));
    sprite_1_4->setRotationSkewX(0);
    sprite_1_4->setCenterRectNormalized(Rect(0,0,1,1));
    scene_0_0->addChild(sprite_1_4);
    // New node
    auto sprite_1_5 = Sprite::create();
    sprite_1_5->setSpriteFrame("grossinis_sister1.png");
    sprite_1_5->setAnchorPoint(Vec2(0.5, 0.5));
    sprite_1_5->setScaleY(1);
    sprite_1_5->setScaleX(1);
    sprite_1_5->setColor(Color3B(255, 255, 255));
    sprite_1_5->setName("grossinis_sister1");
    sprite_1_5->setLocalZOrder(0);
    sprite_1_5->setGlobalZOrder(0);
    sprite_1_5->setOpacity(255);
    sprite_1_5->setOpacityModifyRGB(false);
    sprite_1_5->setCascadeOpacityEnabled(true);
    sprite_1_5->setSkewX(20);
    sprite_1_5->setTag(-1);
    sprite_1_5->setContentSize(Size(52, 139));
    sprite_1_5->setSkewY(0);
    sprite_1_5->setRotationSkewY(0);
    sprite_1_5->setPosition(Vec2(288, 297));
    sprite_1_5->setRotationSkewX(0);
    sprite_1_5->setCenterRectNormalized(Rect(0,0,1,1));
    scene_0_0->addChild(sprite_1_5);
    // New node
    auto sprite_1_6 = Sprite::create();
    sprite_1_6->setSpriteFrame("grossinis_sister1.png");
    sprite_1_6->setAnchorPoint(Vec2(0.5, 0.5));
    sprite_1_6->setScaleY(1);
    sprite_1_6->setScaleX(1);
    sprite_1_6->setColor(Color3B(255, 255, 255));
    sprite_1_6->setName("grossinis_sister1");
    sprite_1_6->setLocalZOrder(0);
    sprite_1_6->setGlobalZOrder(0);
    sprite_1_6->setOpacity(255);
    sprite_1_6->setOpacityModifyRGB(false);
    sprite_1_6->setCascadeOpacityEnabled(true);
    sprite_1_6->setSkewX(-20);
    sprite_1_6->setTag(-1);
    sprite_1_6->setContentSize(Size(52, 139));
    sprite_1_6->setSkewY(0);
    sprite_1_6->setRotationSkewY(0);
    sprite_1_6->setPosition(Vec2(370, 297));
    sprite_1_6->setRotationSkewX(0);
    sprite_1_6->setCenterRectNormalized(Rect(0,0,1,1));
    scene_0_0->addChild(sprite_1_6);
    // New node
    auto sprite_1_7 = Sprite::create();
    sprite_1_7->setSpriteFrame("grossinis_sister2.png");
    sprite_1_7->setAnchorPoint(Vec2(0.5, 0.5));
    sprite_1_7->setScaleY(1);
    sprite_1_7->setScaleX(1);
    sprite_1_7->setColor(Color3B(255, 255, 255));
    sprite_1_7->setName("grossinis_sister2");
    sprite_1_7->setLocalZOrder(0);
    sprite_1_7->setGlobalZOrder(0);
    sprite_1_7->setOpacity(255);
    sprite_1_7->setOpacityModifyRGB(false);
    sprite_1_7->setCascadeOpacityEnabled(true);
    sprite_1_7->setSkewX(0);
    sprite_1_7->setTag(-1);
    sprite_1_7->setContentSize(Size(55, 130));
    sprite_1_7->setSkewY(20);
    sprite_1_7->setRotationSkewY(0);
    sprite_1_7->setPosition(Vec2(481, 305));
    sprite_1_7->setRotationSkewX(0);
    sprite_1_7->setCenterRectNormalized(Rect(0,0,1,1));
    scene_0_0->addChild(sprite_1_7);
    // New node
    auto sprite_1_8 = Sprite::create();
    sprite_1_8->setSpriteFrame("grossinis_sister2.png");
    sprite_1_8->setAnchorPoint(Vec2(0.5, 0.5));
    sprite_1_8->setScaleY(1);
    sprite_1_8->setScaleX(1);
    sprite_1_8->setColor(Color3B(255, 255, 255));
    sprite_1_8->setName("grossinis_sister2");
    sprite_1_8->setLocalZOrder(0);
    sprite_1_8->setGlobalZOrder(0);
    sprite_1_8->setOpacity(255);
    sprite_1_8->setOpacityModifyRGB(false);
    sprite_1_8->setCascadeOpacityEnabled(true);
    sprite_1_8->setSkewX(0);
    sprite_1_8->setTag(-1);
    sprite_1_8->setContentSize(Size(55, 130));
    sprite_1_8->setSkewY(-20);
    sprite_1_8->setRotationSkewY(0);
    sprite_1_8->setPosition(Vec2(540, 300));
    sprite_1_8->setRotationSkewX(0);
    sprite_1_8->setCenterRectNormalized(Rect(0,0,1,1));
    scene_0_0->addChild(sprite_1_8);
    // New node
    auto sprite_1_9 = Sprite::create();
    sprite_1_9->setSpriteFrame("grossinis_sister2.png");
    sprite_1_9->setAnchorPoint(Vec2(0.5, 0.5));
    sprite_1_9->setScaleY(2);
    sprite_1_9->setScaleX(2);
    sprite_1_9->setColor(Color3B(255, 255, 255));
    sprite_1_9->setName("grossinis_sister2");
    sprite_1_9->setLocalZOrder(0);
    sprite_1_9->setGlobalZOrder(0);
    sprite_1_9->setOpacity(255);
    sprite_1_9->setOpacityModifyRGB(false);
    sprite_1_9->setCascadeOpacityEnabled(true);
    sprite_1_9->setSkewX(0);
    sprite_1_9->setTag(-1);
    sprite_1_9->setContentSize(Size(56, 138));
    sprite_1_9->setSkewY(0);
    sprite_1_9->setRotationSkewY(45);
    sprite_1_9->setPosition(Vec2(135, 493));
    sprite_1_9->setRotationSkewX(45);
    sprite_1_9->setCenterRectNormalized(Rect(0,0,1,1));
    scene_0_0->addChild(sprite_1_9);
    // New node
    auto sprite_1_10 = Sprite::create();
    sprite_1_10->setSpriteFrame("grossinis_sister1.png");
    sprite_1_10->setAnchorPoint(Vec2(0.5, 0.5));
    sprite_1_10->setScaleY(2);
    sprite_1_10->setScaleX(2);
    sprite_1_10->setColor(Color3B(255, 255, 255));
    sprite_1_10->setName("grossinis_sister1");
    sprite_1_10->setLocalZOrder(0);
    sprite_1_10->setGlobalZOrder(0);
    sprite_1_10->setOpacity(255);
    sprite_1_10->setOpacityModifyRGB(false);
    sprite_1_10->setCascadeOpacityEnabled(true);
    sprite_1_10->setSkewX(0);
    sprite_1_10->setTag(-1);
    sprite_1_10->setContentSize(Size(52, 139));
    sprite_1_10->setSkewY(0);
    sprite_1_10->setRotationSkewY(-45);
    sprite_1_10->setPosition(Vec2(351, 508));
    sprite_1_10->setRotationSkewX(-45);
    sprite_1_10->setCenterRectNormalized(Rect(0,0,1,1));
    scene_0_0->addChild(sprite_1_10);
    // New node
    auto sprite_1_11 = Sprite::create();
    sprite_1_11->setSpriteFrame("grossinis_sister1.png");
    sprite_1_11->setAnchorPoint(Vec2(0, 0));
    sprite_1_11->setScaleY(1);
    sprite_1_11->setScaleX(1);
    sprite_1_11->setColor(Color3B(255, 0, 0));
    sprite_1_11->setName("grossinis_sister1");
    sprite_1_11->setLocalZOrder(0);
    sprite_1_11->setGlobalZOrder(0);
    sprite_1_11->setOpacity(255);
    sprite_1_11->setOpacityModifyRGB(false);
    sprite_1_11->setCascadeOpacityEnabled(true);
    sprite_1_11->setSkewX(0);
    sprite_1_11->setTag(-1);
    sprite_1_11->setContentSize(Size(52, 139));
    sprite_1_11->setSkewY(0);
    sprite_1_11->setRotationSkewY(0);
    sprite_1_11->setPosition(Vec2(808, 489));
    sprite_1_11->setRotationSkewX(0);
    sprite_1_11->setCenterRectNormalized(Rect(0,0,1,1));
    scene_0_0->addChild(sprite_1_11);
    // New node
    auto sprite_1_12 = Sprite::create();
    sprite_1_12->setSpriteFrame("grossinis_sister1.png");
    sprite_1_12->setAnchorPoint(Vec2(0.5, 0.5));
    sprite_1_12->setScaleY(1);
    sprite_1_12->setScaleX(1);
    sprite_1_12->setColor(Color3B(255, 255, 255));
    sprite_1_12->setName("grossinis_sister1");
    sprite_1_12->setLocalZOrder(0);
    sprite_1_12->setGlobalZOrder(0);
    sprite_1_12->setOpacity(255);
    sprite_1_12->setOpacityModifyRGB(false);
    sprite_1_12->setCascadeOpacityEnabled(true);
    sprite_1_12->setSkewX(0);
    sprite_1_12->setTag(-1);
    sprite_1_12->setContentSize(Size(52, 139));
    sprite_1_12->setSkewY(0);
    sprite_1_12->setRotationSkewY(0);
    sprite_1_12->setPosition(Vec2(215, 382));
    sprite_1_12->setRotationSkewX(0);
    sprite_1_12->setCenterRectNormalized(Rect(0,0,1,1));
    scene_0_0->addChild(sprite_1_12);
    // New node
    auto sprite_1_13 = Sprite::create();
    sprite_1_13->setSpriteFrame("grossinis_sister1.png");
    sprite_1_13->setAnchorPoint(Vec2(0.5, 0.5));
    sprite_1_13->setScaleY(1);
    sprite_1_13->setScaleX(1);
    sprite_1_13->setColor(Color3B(0, 255, 0));
    sprite_1_13->setName("grossinis_sister1");
    sprite_1_13->setLocalZOrder(0);
    sprite_1_13->setGlobalZOrder(0);
    sprite_1_13->setOpacity(255);
    sprite_1_13->setOpacityModifyRGB(false);
    sprite_1_13->setCascadeOpacityEnabled(true);
    sprite_1_13->setSkewX(0);
    sprite_1_13->setTag(-1);
    sprite_1_13->setContentSize(Size(52, 139));
    sprite_1_13->setSkewY(0);
    sprite_1_13->setRotationSkewY(0);
    sprite_1_13->setPosition(Vec2(759, 566));
    sprite_1_13->setRotationSkewX(0);
    sprite_1_13->setCenterRectNormalized(Rect(0,0,1,1));
    scene_0_0->addChild(sprite_1_13);
    // New node
    auto sprite_1_14 = Sprite::create();
    sprite_1_14->setSpriteFrame("grossinis_sister1.png");
    sprite_1_14->setAnchorPoint(Vec2(1, 1));
    sprite_1_14->setScaleY(1);
    sprite_1_14->setScaleX(1);
    sprite_1_14->setColor(Color3B(0, 0, 255));
    sprite_1_14->setName("grossinis_sister1");
    sprite_1_14->setLocalZOrder(0);
    sprite_1_14->setGlobalZOrder(0);
    sprite_1_14->setOpacity(255);
    sprite_1_14->setOpacityModifyRGB(false);
    sprite_1_14->setCascadeOpacityEnabled(true);
    sprite_1_14->setSkewX(0);
    sprite_1_14->setTag(-1);
    sprite_1_14->setContentSize(Size(52, 139));
    sprite_1_14->setSkewY(0);
    sprite_1_14->setRotationSkewY(0);
    sprite_1_14->setPosition(Vec2(478, 639));
    sprite_1_14->setRotationSkewX(0);
    sprite_1_14->setCenterRectNormalized(Rect(0,0,1,1));
    scene_0_0->addChild(sprite_1_14);
    // New node
    auto sprite_1_15 = Sprite::create();
    sprite_1_15->setSpriteFrame("grossini_dance_08");
    sprite_1_15->setAnchorPoint(Vec2(0, 0));
    sprite_1_15->setScaleY(1);
    sprite_1_15->setScaleX(1);
    sprite_1_15->setColor(Color3B(255, 255, 255));
    sprite_1_15->setName("grossini_dance_08");
    sprite_1_15->setLocalZOrder(0);
    sprite_1_15->setGlobalZOrder(0);
    sprite_1_15->setOpacity(255);
    sprite_1_15->setOpacityModifyRGB(false);
    sprite_1_15->setCascadeOpacityEnabled(true);
    sprite_1_15->setSkewX(0);
    sprite_1_15->setTag(-1);
    sprite_1_15->setContentSize(Size(170, 218));
    sprite_1_15->setSkewY(0);
    sprite_1_15->setRotationSkewY(0);
    sprite_1_15->setPosition(Vec2(488, 387));
    sprite_1_15->setRotationSkewX(0);
    scene_0_0->addChild(sprite_1_15);
    creator_tile_sprite(sprite_1_15);
    // New node
    auto sprite_1_16 = Sprite::create();
    sprite_1_16->setSpriteFrame("grossini_dance_08");
    sprite_1_16->setAnchorPoint(Vec2(1, 1));
    sprite_1_16->setScaleY(1);
    sprite_1_16->setScaleX(2);
    sprite_1_16->setColor(Color3B(255, 255, 255));
    sprite_1_16->setName("grossini_dance_08");
    sprite_1_16->setLocalZOrder(0);
    sprite_1_16->setGlobalZOrder(0);
    sprite_1_16->setOpacity(255);
    sprite_1_16->setOpacityModifyRGB(false);
    sprite_1_16->setCascadeOpacityEnabled(true);
    sprite_1_16->setSkewX(0);
    sprite_1_16->setTag(-1);
    sprite_1_16->setContentSize(Size(85, 121));
    sprite_1_16->setSkewY(0);
    sprite_1_16->setRotationSkewY(90);
    sprite_1_16->setPosition(Vec2(944, 314));
    sprite_1_16->setRotationSkewX(90);
    scene_0_0->addChild(sprite_1_16);
    creator_tile_sprite(sprite_1_16);
    // New node
    auto sprite_1_17 = Sprite::create();
    sprite_1_17->setSpriteFrame("grossinis_sister1.png");
    sprite_1_17->setAnchorPoint(Vec2(0.5, 0.5));
    sprite_1_17->setScaleY(1);
    sprite_1_17->setScaleX(1);
    sprite_1_17->setColor(Color3B(255, 255, 255));
    sprite_1_17->setName("grossinis_sister1");
    sprite_1_17->setLocalZOrder(0);
    sprite_1_17->setGlobalZOrder(0);
    sprite_1_17->setOpacity(255);
    sprite_1_17->setOpacityModifyRGB(false);
    sprite_1_17->setCascadeOpacityEnabled(true);
    sprite_1_17->setSkewX(0);
    sprite_1_17->setTag(-1);
    sprite_1_17->setContentSize(Size(100, 250));
    sprite_1_17->setSkewY(0);
    sprite_1_17->setRotationSkewY(0);
    sprite_1_17->setPosition(Vec2(765, 367));
    sprite_1_17->setRotationSkewX(0);
    scene_0_0->addChild(sprite_1_17);
    // New node
    auto sprite_1_18 = Sprite::create();
    sprite_1_18->setSpriteFrame("grossinis_sister2.png");
    sprite_1_18->setAnchorPoint(Vec2(0.5, 0.5));
    sprite_1_18->setScaleY(1);
    sprite_1_18->setScaleX(1);
    sprite_1_18->setColor(Color3B(255, 255, 255));
    sprite_1_18->setName("grossinis_sister2");
    sprite_1_18->setLocalZOrder(0);
    sprite_1_18->setGlobalZOrder(0);
    sprite_1_18->setOpacity(255);
    sprite_1_18->setOpacityModifyRGB(false);
    sprite_1_18->setCascadeOpacityEnabled(true);
    sprite_1_18->setSkewX(0);
    sprite_1_18->setTag(-1);
    sprite_1_18->setContentSize(Size(110, 390));
    sprite_1_18->setSkewY(0);
    sprite_1_18->setRotationSkewY(90);
    sprite_1_18->setPosition(Vec2(443, 94));
    sprite_1_18->setRotationSkewX(90);
    scene_0_0->addChild(sprite_1_18);
    // New node
    auto sprite_1_19 = Sprite::create();
    sprite_1_19->setSpriteFrame("grossini_dance_08");
    sprite_1_19->setAnchorPoint(Vec2(0, 0));
    sprite_1_19->setScaleY(1);
    sprite_1_19->setScaleX(1);
    sprite_1_19->setColor(Color3B(255, 255, 255));
    sprite_1_19->setName("grossini_dance_08");
    sprite_1_19->setLocalZOrder(0);
    sprite_1_19->setGlobalZOrder(0);
    sprite_1_19->setOpacity(255);
    sprite_1_19->setOpacityModifyRGB(false);
    sprite_1_19->setCascadeOpacityEnabled(true);
    sprite_1_19->setSkewX(0);
    sprite_1_19->setTag(-1);
    sprite_1_19->setContentSize(Size(51, 109));
    sprite_1_19->setSkewY(0);
    sprite_1_19->setRotationSkewY(0);
    sprite_1_19->setPosition(Vec2(655, 496));
    sprite_1_19->setRotationSkewX(0);
    sprite_1_19->setCenterRectNormalized(Rect(0,0,1,1));
    scene_0_0->addChild(sprite_1_19);
    // New node
    auto sprite_1_20 = Sprite::create();
    sprite_1_20->setSpriteFrame("grossinis_sister1.png");
    sprite_1_20->setAnchorPoint(Vec2(0.5, 0.5));
    sprite_1_20->setScaleY(1);
    sprite_1_20->setScaleX(1);
    sprite_1_20->setColor(Color3B(255, 255, 255));
    sprite_1_20->setName("grossinis_sister1");
    sprite_1_20->setLocalZOrder(0);
    sprite_1_20->setGlobalZOrder(0);
    sprite_1_20->setOpacity(255);
    sprite_1_20->setOpacityModifyRGB(false);
    sprite_1_20->setCascadeOpacityEnabled(true);
    sprite_1_20->setSkewX(0);
    sprite_1_20->setTag(-1);
    sprite_1_20->setContentSize(Size(125, 290));
    sprite_1_20->setSkewY(0);
    sprite_1_20->setRotationSkewY(270);
    sprite_1_20->setPosition(Vec2(806, 129));
    sprite_1_20->setRotationSkewX(270);
    scene_0_0->addChild(sprite_1_20);
    creator_tile_sprite(sprite_1_20);
    return scene_0_0;
}
////// AUTOGENERATED:END//////
