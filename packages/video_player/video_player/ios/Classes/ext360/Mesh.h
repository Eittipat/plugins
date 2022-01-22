//
//  Mesh.h
//  video_player
//
//  Created by Eittipat K on 20/1/2565 BE.
//

#import <Foundation/Foundation.h>
#import <GLKit/GLKit.h>


@interface Mesh : NSObject
-(void)glInit;
-(void)glDrawWithTexture:(CVOpenGLESTextureRef)texture mvpMatrix:(GLKMatrix4)mvpMatrix;
-(void)glDestroy;
@end


@interface Sphere : Mesh
+(instancetype)createUvSphereWithRadius:(float)radius
                              latitudes:(int)latitudes
                             longitudes:(int)longitudes
                     verticalFovDegrees:(float)verticalFovDegrees
                   horizontalFovDegrees:(float)horizontalFovDegrees
                            mediaFormat:(int)mediaFormat;

@end

@interface CanvasQuad : Mesh
+(instancetype)createCanvasQuad;
@end

