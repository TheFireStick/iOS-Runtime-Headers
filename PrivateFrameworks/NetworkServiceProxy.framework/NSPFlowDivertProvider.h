/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NSPFlowDivertProvider : NEAppProxyProvider {
    NSPManager * _manager;
}

@property (retain) NSPManager *manager;

- (void).cxx_destruct;
- (BOOL)handleNewFlow:(id)arg1;
- (id)init;
- (id)manager;
- (void)setManager:(id)arg1;
- (void)startProxyWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)stopProxyWithReason:(int)arg1 completionHandler:(id /* block */)arg2;

@end
