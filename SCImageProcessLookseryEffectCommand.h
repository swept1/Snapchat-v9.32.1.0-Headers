//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SCImageProcessCommand.h"

@class LSAEffectsManager, SCLens;

@interface SCImageProcessLookseryEffectCommand : SCImageProcessCommand
{
    LSAEffectsManager *_effectsManager;
    SCLens *_lens;
    unsigned int _imageTexture2;
}

- (void).cxx_destruct;
- (void)validateLensSignature:(id)arg1;
- (void)setEffect;
- (void)unload;
- (id)runWithContext:(id)arg1 pixelWidth:(unsigned long long)arg2 pixelHeight:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 outputWidth:(unsigned long long)arg5 outputHeight:(unsigned long long)arg6 renderRange:(CDStruct_6fe4de6c)arg7 orientation:(long long)arg8;
- (void)loadWithContext:(id)arg1;
- (void)dealloc;
- (id)initWithLens:(id)arg1;

@end

