/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
 */

@interface SFSectionEngagementFeedback : SFFeedback <NSCopying, SFProtobufObject> {
    SFResultSection * _section;
    unsigned int  _triggerEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) PBCodable *protobufMessage;
@property (nonatomic, copy) SFResultSection *section;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int triggerEvent;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSection:(id)arg1 triggerEvent:(unsigned int)arg2;
- (id)section;
- (void)setSection:(id)arg1;
- (void)setTriggerEvent:(unsigned int)arg1;
- (unsigned int)triggerEvent;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

+ (Class)protobufClass;

- (id)protobufMessage;

@end