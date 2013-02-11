/*
* AUTOGENERATED FILE. DO NOT EDIT IT
* Generated by "generate_jsb.py -c cocos2d_jsb.ini" on 2013-02-11
* Script version: v0.6
*/
#import "jsb_config.h"
#if JSB_INCLUDE_COCOS2D_IOS

#import "jsb_cocos2d_classes.h"

/*
 * CCDirector
 */
#pragma mark - CCDirector

#ifdef __cplusplus
extern "C" {
#endif

void JSB_CCDirector_createClass(JSContext *cx, JSObject* globalObj, const char* name );

// Manually generated methods


extern JSObject *JSB_CCDirector_object;
extern JSClass *JSB_CCDirector_class;

#ifdef __cplusplus
}
#endif

/* Proxy class */
@interface JSB_CCDirector : JSB_NSObject
{
}
@end

/*
 * CCDirectorIOS
 */
#pragma mark - CCDirectorIOS

#ifdef __cplusplus
extern "C" {
#endif

void JSB_CCDirectorIOS_createClass(JSContext *cx, JSObject* globalObj, const char* name );

// Manually generated methods


extern JSObject *JSB_CCDirectorIOS_object;
extern JSClass *JSB_CCDirectorIOS_class;

#ifdef __cplusplus
}
#endif

/* Proxy class */
@interface JSB_CCDirectorIOS : JSB_CCDirector
{
}
@end

/*
 * CCDirectorDisplayLink
 */
#pragma mark - CCDirectorDisplayLink

#ifdef __cplusplus
extern "C" {
#endif

void JSB_CCDirectorDisplayLink_createClass(JSContext *cx, JSObject* globalObj, const char* name );

// Manually generated methods


extern JSObject *JSB_CCDirectorDisplayLink_object;
extern JSClass *JSB_CCDirectorDisplayLink_class;

#ifdef __cplusplus
}
#endif

/* Proxy class */
@interface JSB_CCDirectorDisplayLink : JSB_CCDirectorIOS
{
}
@end

/*
 * CCLayer
 */
#pragma mark - CCLayer

#ifdef __cplusplus
extern "C" {
#endif

void JSB_CCLayer_createClass(JSContext *cx, JSObject* globalObj, const char* name );

// Manually generated methods


extern JSObject *JSB_CCLayer_object;
extern JSClass *JSB_CCLayer_class;

#ifdef __cplusplus
}
#endif

/* Proxy class */
@interface JSB_CCLayer : JSB_CCNode
{
}
@end

/* Manually generated callbacks */
@interface JSB_CCLayer (Manual)
-(void) accelerometer:(UIAccelerometer*)accelerometer didAccelerate:(UIAcceleration*)acceleration ;

@end

/*
 * CCLayerMultiplex
 */
#pragma mark - CCLayerMultiplex

#ifdef __cplusplus
extern "C" {
#endif

void JSB_CCLayerMultiplex_createClass(JSContext *cx, JSObject* globalObj, const char* name );

// Manually generated methods


extern JSObject *JSB_CCLayerMultiplex_object;
extern JSClass *JSB_CCLayerMultiplex_class;

#ifdef __cplusplus
}
#endif

/* Proxy class */
@interface JSB_CCLayerMultiplex : JSB_CCLayer
{
}
@end

/*
 * CCLayerRGBA
 */
#pragma mark - CCLayerRGBA

#ifdef __cplusplus
extern "C" {
#endif

void JSB_CCLayerRGBA_createClass(JSContext *cx, JSObject* globalObj, const char* name );

// Manually generated methods


extern JSObject *JSB_CCLayerRGBA_object;
extern JSClass *JSB_CCLayerRGBA_class;

#ifdef __cplusplus
}
#endif

/* Proxy class */
@interface JSB_CCLayerRGBA : JSB_CCLayer
{
}
@end

/*
 * CCLayerColor
 */
#pragma mark - CCLayerColor

#ifdef __cplusplus
extern "C" {
#endif

void JSB_CCLayerColor_createClass(JSContext *cx, JSObject* globalObj, const char* name );

// Manually generated methods
JSBool JSB_CCLayerColor_setBlendFunc_(JSContext *cx, uint32_t argc, jsval *vp);


extern JSObject *JSB_CCLayerColor_object;
extern JSClass *JSB_CCLayerColor_class;

#ifdef __cplusplus
}
#endif

/* Proxy class */
@interface JSB_CCLayerColor : JSB_CCLayerRGBA
{
}
@end

/*
 * CCLayerGradient
 */
#pragma mark - CCLayerGradient

#ifdef __cplusplus
extern "C" {
#endif

void JSB_CCLayerGradient_createClass(JSContext *cx, JSObject* globalObj, const char* name );

// Manually generated methods


extern JSObject *JSB_CCLayerGradient_object;
extern JSClass *JSB_CCLayerGradient_class;

#ifdef __cplusplus
}
#endif

/* Proxy class */
@interface JSB_CCLayerGradient : JSB_CCLayerColor
{
}
@end

/*
 * CCMenu
 */
#pragma mark - CCMenu

#ifdef __cplusplus
extern "C" {
#endif

void JSB_CCMenu_createClass(JSContext *cx, JSObject* globalObj, const char* name );

// Manually generated methods


extern JSObject *JSB_CCMenu_object;
extern JSClass *JSB_CCMenu_class;

#ifdef __cplusplus
}
#endif

/* Proxy class */
@interface JSB_CCMenu : JSB_CCLayerRGBA
{
}
@end


#endif // JSB_INCLUDE_COCOS2D_IOS