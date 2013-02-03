/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@interface GKPeerPickerController : NSObject {
    id _picker;
}

@property <GKPeerPickerControllerDelegate> *delegate;
@property(readonly) GKPeerPickerViewController *pickerViewController;
@property NSUInteger connectionTypesMask;
@property(getter=isVisible,readonly) BOOL visible;

+ (void)initialize;

- (void)_createPicker;
- (NSUInteger)connectionTypesMask;
- (void)dealloc;
- (id)delegate;
- (void)dismiss;
- (id)init;
- (BOOL)isVisible;
- (void)peerPickerViewController:(id)arg1 didConnectPeer:(id)arg2 toSession:(id)arg3;
- (void)peerPickerViewController:(id)arg1 didSelectConnectionType:(NSUInteger)arg2;
- (id)peerPickerViewController:(id)arg1 sessionForConnectionType:(NSUInteger)arg2;
- (void)peerPickerViewControllerDidCancel:(id)arg1;
- (id)pickerViewController;
- (void)setConnectionTypesMask:(NSUInteger)arg1;
- (void)setDelegate:(id)arg1;
- (void)show;

@end