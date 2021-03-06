/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface NoteAccountObject : NoteCollectionObject <ICLegacyAccount> {
    NSDictionary * _constraints;
    NSNumber * _preventMovingNotesToOtherAccounts;
}

@property (nonatomic, retain) NSString *accountIdentifier;
@property (nonatomic) int accountType;
@property (nonatomic, retain) NSDictionary *constraints;
@property (nonatomic, retain) NSString *constraintsPath;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) NoteStoreObject *defaultStore;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didChooseToMigrate;
@property (readonly) unsigned int hash;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *pathToConstraintsPlist;
@property (nonatomic, readonly) BOOL preventMovingNotesToOtherAccounts;
@property (nonatomic, retain) NSSet *stores;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSNumber *type;

- (void).cxx_destruct;
- (int)accountType;
- (id)basicAccountIdentifier;
- (id)collectionInfo;
- (id)constraints;
- (id)defaultFolder;
- (void)didTurnIntoFault;
- (id)emailAddress;
- (id)folders;
- (id)noteVisibilityTestingForSearchingAccount;
- (id)objectIdentifier;
- (id)pathToConstraintsPlist;
- (id)predicateForNotes;
- (BOOL)preventMovingNotesToOtherAccounts;
- (void)setAccountType:(int)arg1;
- (void)setConstraints:(id)arg1;
- (void)setPathToConstraintsPlist:(id)arg1;
- (BOOL)shouldMarkNotesAsDeleted;
- (id)storeForExternalId:(id)arg1;
- (BOOL)supportsAttachments;
- (BOOL)validateDefaultStore:(id*)arg1 error:(id*)arg2;
- (void)willSave;

@end
