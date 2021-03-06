//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCTimestampMetadata : NSObject
{
    _Bool _hasAmPmModifier;
    _Bool _isAm;
    long long _hour;
    long long _minute;
    long long _hourToDisplay;
    long long _day;
    long long _month;
    long long _year;
    long long _type;
}

@property(nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) long long year; // @synthesize year=_year;
@property(readonly, nonatomic) long long month; // @synthesize month=_month;
@property(readonly, nonatomic) long long day; // @synthesize day=_day;
@property(readonly, nonatomic) long long minute; // @synthesize minute=_minute;
@property(readonly, nonatomic) long long hour; // @synthesize hour=_hour;
@property(readonly, nonatomic) long long hourToDisplay; // @synthesize hourToDisplay=_hourToDisplay;
@property(readonly, nonatomic) _Bool isAm; // @synthesize isAm=_isAm;
@property(readonly, nonatomic) _Bool hasAmPmModifier; // @synthesize hasAmPmModifier=_hasAmPmModifier;
- (id)initWithDate:(id)arg1 locale:(id)arg2 timeZone:(id)arg3;

@end

