#import <Foundation/Foundation.h>

#import <Segment/SEGIntegrationFactory.h>


@interface SEGFirebaseIntegrationFactory : NSObject <SEGIntegrationFactory>

+ (instancetype)instance;

- (id<SEGIntegration>)createWithSettings:(NSDictionary *)settings forAnalytics:(SEGAnalytics *)analytics;

@end
