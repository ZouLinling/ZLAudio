//
//  LCVoice.h
//  LCVoiceHud
//
//  Created by 郭历成 on 13-6-21.(titm@tom.com)
//  Improved by Zou Linling on 15-05-29
//

#import <Foundation/Foundation.h>

@interface ZLVoiceRecorder : NSObject

@property(nonatomic,retain) NSString * recordPath;
@property(nonatomic) float recordTime;

-(void) startRecordWithPath:(NSString *)path;
-(void) stopRecordWithCompletionBlock:(void (^)())completion;
-(void) cancelled;

@end
