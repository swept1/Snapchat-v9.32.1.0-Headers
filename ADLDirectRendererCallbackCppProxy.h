//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADLDirectRendererCallback.h"

@interface ADLDirectRendererCallbackCppProxy : NSObject <ADLDirectRendererCallback>
{
    struct Handle<std::__1::shared_ptr<addlive::DirectRendererCallback>, std::__1::shared_ptr<addlive::DirectRendererCallback>> _cppRefHandle;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onFrame:(id)arg1;
- (id)initWithCpp:(const shared_ptr_fe59ffec *)arg1;

@end

