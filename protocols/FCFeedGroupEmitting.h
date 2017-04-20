/* Generated by RuntimeBrowser.
 */

@protocol FCFeedGroupEmitting <NSObject>

@required

- (BOOL)canEmitGroupsWithType:(int)arg1;
- (NSString *)groupEmitterIdentifier;
- (FCFeedGroupEmittingOperation *)operationToEmitGroupWithContext:(FCFeedGroupEmittingContext *)arg1 fromCursor:(id <NSCoding>)arg2 toCursor:(id <NSCoding>)arg3;
- (BOOL)wantsToEmitGroupInContext:(FCFeedGroupEmittingContext *)arg1 withCursor:(id <NSCoding>)arg2 toCursor:(id <NSCoding>)arg3;
- (BOOL)wantsToInsertGroup:(id <FCFeedGroupOutlining>)arg1 withContext:(FCFeedGroupEmittingContext *)arg2;

@optional

- (NSString *)backingChannelTagIDWithAppConfig:(FCAppConfiguration *)arg1;
- (BOOL)canMergeGroupsUnconditionally;
- (BOOL)canMergeHeadlinesFromGroup:(id <FCFeedGroupOutlining>)arg1 intoGroup:(id <FCFeedGroupOutlining>)arg2;
- (BOOL)emitsSingletonGroups;
- (BOOL)isRequiredByFollowingEmitters;
- (BOOL)requiresForYouCatchUpOperation;
- (BOOL)supportsPagination;

@end