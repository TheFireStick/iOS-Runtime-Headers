/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSKDocumentRoot;

@interface TSKDocumentSelection : TSKSelection {
    TSKDocumentRoot *mDocumentRoot;
}

@property(readonly) TSKDocumentRoot * documentRoot;

+ (Class)archivedSelectionClass;

- (id)description;
- (id)documentRoot;
- (unsigned int)hash;
- (id)initWithDocumentRoot:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end