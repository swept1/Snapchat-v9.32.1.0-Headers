//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

#import "NamedEvent.h"

@interface SCAProfileAddressBookContactPermissionContinue : SCAUserTrackedEvent <NamedEvent>
{
    long long verificationType;
    long long source;
    long long sourcePage;
}

+ (id)copy:(id)arg1;
+ (id)create;
- (id)asDictionary;
- (long long)getSourcePage;
- (void)setSourcePage:(long long)arg1;
- (long long)getSource;
- (void)setSource:(long long)arg1;
- (long long)getVerificationType;
- (void)setVerificationType:(long long)arg1;
- (id)getEventName;
- (id)init;

@end

