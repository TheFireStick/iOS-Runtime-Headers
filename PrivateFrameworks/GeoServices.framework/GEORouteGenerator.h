/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORouteGenerator : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    GEODirectionsRequest *_request;
    GEODirectionsRouteResponse *_response;
}

@property (nonatomic, readonly, retain) GEODirectionsRequest *request;
@property (nonatomic, readonly, retain) GEODirectionsRouteResponse *response;

+ (unsigned long long)routingSharedLibraryCodeVersion;
+ (unsigned long long)routingSubgraphDataVersion;

- (void)dealloc;
- (void)decompressResponse;
- (id)initWithRequest:(id)arg1 response:(id)arg2;
- (id)lookupHubStationOrStopFromMuid:(unsigned long long)arg1;
- (id)request;
- (void)rerouteFromWaypoint:(id)arg1 completion:(id /* block */)arg2;
- (id)response;

@end