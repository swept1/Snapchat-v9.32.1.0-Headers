//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCCameraOverlayDelegate.h"
#import "SCCameraVolumeButtonHandlerDelegate.h"
#import "SCDeepLinkableViewSource.h"
#import "SCGalleryIconControllerDelegate.h"
#import "SCGalleryReturnButtonControlDelegate.h"
#import "SCGalleryViewControllerDelegate.h"
#import "SCManagedCapturerListener.h"
#import "SCMiniProfileControllerDelegate.h"
#import "SCProfilePictureControllerDelegate.h"
#import "SCProfileViewDelegate.h"
#import "SCScanResultViewControllerDelegate.h"
#import "SCShareUsernameControllerDelegate.h"
#import "SCTimeProfilable.h"
#import "SendSnapNavigationControllerDelegate.h"
#import "SwipeView.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSNumber, NSString, NSTimer, PreviewTransitionController, SCCameraOverlayView, SCCameraTimer, SCCameraVerticalScrollView, SCCameraVolumeButtonHandler, SCDeepLinkMiniProfileController, SCGradientView, SCManagedCapturerState, SCMiniProfileController, SCNearbyPopupController, SCProfilePictureController, SCProfileView, SCRecordedVideo, SCShareUsernameController, SCUserSession, SnapTrophyMetrics, UIButton, UIImageView, UILabel, UIToolbar, UIView, UIViewController<SCGalleryViewController>;

@interface  i : UIViewController <SCManagedCapturerListener, SendSnapNavigationControllerDelegate, SCGalleryViewControllerDelegate, SCGalleryReturnButtonControlDelegate, SCScanResultViewControllerDelegate, SCGalleryIconControllerDelegate, SCShareUsernameControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, SCCameraVolumeButtonHandlerDelegate, SCTimeProfilable, SCProfilePictureControllerDelegate, SwipeView, UIGestureRecognizerDelegate, SCCameraOverlayDelegate, UIScrollViewDelegate, SCProfileViewDelegate, SCDeepLinkableViewSource, SCMiniProfileControllerDelegate>
{
    unsigned int _recordingSession;
    _Bool _takingPicture;
    _Bool _requestedToTurnOnLenses;
    SCManagedCapturerState *_managedCapturerState;
    NSString *_capturerToken;
    NSString *_deviceOrientationToken;
    NSString *_deviceMotionToken;
    _Bool _askingVideoCapturePermissions;
    NSMutableSet *_scrollLocks;
    SCCameraVerticalScrollView *_verticalScrollView;
    _Bool _didWarmupGallery;
    UIViewController<SCGalleryViewController> *_galleryViewController;
    _Bool _suppressDidScroll;
    _Bool _overscrollFromGallery;
    SCCameraTimer *_galleryReturnButton;
    id <SCGalleryReturnButtonControl> _galleryReturnButtonControl;
    id <SCGalleryIconController> _galleryIconController;
    SCUserSession *_userSession;
    _Bool _didZoomWhileFilming;
    long long _cameraFlipsWhileRecording;
    _Bool _didFilmSelf;
    SCMiniProfileController *_miniProfileController;
    SCDeepLinkMiniProfileController *_deepLinkMiniProfileController;
    SCShareUsernameController *_shareUsernameController;
    SCNearbyPopupController *_nearbyPopupController;
    long long _currentPageState;
    _Bool _cameraTimerHidden;
    _Bool _nightModeButtonPressedUsingBackCamera;
    long long _snapPageSource;
    long long _recordingEndX;
    long long _recordingEndY;
    double _beginningScale;
    double _panScale;
    double _pinchScale;
    double _longPressScale;
    struct CGPoint _longPressOrigin;
    _Bool _waitingUntilVisibleToBeginRecording;
    _Bool _forceTouchedWhileRecording;
    NSString *_initialFirstName;
    NSString *_initialLastName;
    _Bool _firstLogin;
    _Bool _initiatedRecording;
    _Bool _deprecateNavigationTransitioning;
    _Bool _askingAudioPermissions;
    _Bool _audioEnabled;
    _Bool _cameraError;
    _Bool _triedToCaptureImage;
    _Bool _pressingCameraButton;
    _Bool _recordedLengthTooShort;
    _Bool _resetCameraView;
    _Bool _warnedMicDisabled;
    _Bool _isResigningActive;
    _Bool _settingUpCamera;
    _Bool _settingUpAudio;
    _Bool _userTappedToFocus;
    _Bool _isCapturingProfileImages;
    _Bool _willHideNightModeButtonWithDelay;
    _Bool _lowLightBoostEnabledBeforeCapture;
    _Bool _pressingVolumeButton;
    _Bool _showingNeedCameraAccessAlertView;
    int _numShowScanTooltip;
    float _lowLightBoostBrightnessBeforeCapture;
    id <AVCameraViewControllerDelegate> _delegate;
    id <SwipeViewParentDelegate> _parentDelegate;
    id <NavigationDelegate> _navigationDelegate;
    UIView *_cameraView;
    NSString *_captionText;
    double _initialCaptionVertical;
    UIButton *_logoutButton;
    NSTimer *_timer;
    SCCameraOverlayView *_cameraOverlay;
    id <SendSnapNavigationControllerDelegate> _sendSnapNavigationControllerDelegate;
    id <SCStartChatDelegate> _startChatDelegate;
    SnapTrophyMetrics *_snapTrophyMetrics;
    unsigned long long _appearanceState;
    double _brightness;
    UIView *_helpScreen;
    UIView *_privacyView;
    long long _replyCameraType;
    NSMutableDictionary *_replyParameters;
    NSString *_replyUsername;
    double _timeRecordingStarted;
    double _timeSettingUpCamera;
    double _currentRecordingTime;
    UIImageView *_debugScannerView;
    UILabel *_debugScannerFrameRate;
    UILabel *_debugScannerText;
    UILabel *_debugLowLightBoost;
    SCProfileView *_profileView;
    SCProfilePictureController *_profilePictureController;
    UIToolbar *_blurBackgroundView;
    UIView *_tintView;
    NSMutableArray *_profileImages;
    unsigned long long _sessionCount;
    NSNumber *_lastProfileShowTime;
    SCRecordedVideo *_recordedVideo;
    long long _cameraStartSeqNo;
    SCCameraVolumeButtonHandler *_volumeButtonHandler;
    double _cameraStartTime;
    SCGradientView *_tabBarGradientView;
    PreviewTransitionController *_previewTransitionController;
    struct CGAffineTransform _cameraViewTransform;
}

+ (long long)context;
+ (id)profiledSelectorNames;
+ (id)_pageViewNameForPageState:(long long)arg1;
+ (id)galleryPageViewName;
+ (id)cameraPageViewName;
@property(retain, nonatomic) PreviewTransitionController *previewTransitionController; // @synthesize previewTransitionController=_previewTransitionController;
@property(retain, nonatomic) SCGradientView *tabBarGradientView; // @synthesize tabBarGradientView=_tabBarGradientView;
@property(nonatomic) double cameraStartTime; // @synthesize cameraStartTime=_cameraStartTime;
@property(nonatomic) _Bool showingNeedCameraAccessAlertView; // @synthesize showingNeedCameraAccessAlertView=_showingNeedCameraAccessAlertView;
@property(nonatomic) _Bool pressingVolumeButton; // @synthesize pressingVolumeButton=_pressingVolumeButton;
@property(retain, nonatomic) SCCameraVolumeButtonHandler *volumeButtonHandler; // @synthesize volumeButtonHandler=_volumeButtonHandler;
@property(nonatomic) float lowLightBoostBrightnessBeforeCapture; // @synthesize lowLightBoostBrightnessBeforeCapture=_lowLightBoostBrightnessBeforeCapture;
@property(nonatomic) _Bool lowLightBoostEnabledBeforeCapture; // @synthesize lowLightBoostEnabledBeforeCapture=_lowLightBoostEnabledBeforeCapture;
@property(nonatomic) _Bool willHideNightModeButtonWithDelay; // @synthesize willHideNightModeButtonWithDelay=_willHideNightModeButtonWithDelay;
@property(nonatomic) long long cameraStartSeqNo; // @synthesize cameraStartSeqNo=_cameraStartSeqNo;
@property(retain, nonatomic) SCRecordedVideo *recordedVideo; // @synthesize recordedVideo=_recordedVideo;
@property(retain, nonatomic) NSNumber *lastProfileShowTime; // @synthesize lastProfileShowTime=_lastProfileShowTime;
@property(nonatomic) unsigned long long sessionCount; // @synthesize sessionCount=_sessionCount;
@property(nonatomic) struct CGAffineTransform cameraViewTransform; // @synthesize cameraViewTransform=_cameraViewTransform;
@property _Bool isCapturingProfileImages; // @synthesize isCapturingProfileImages=_isCapturingProfileImages;
@property(retain, nonatomic) NSMutableArray *profileImages; // @synthesize profileImages=_profileImages;
@property(retain, nonatomic) UIView *tintView; // @synthesize tintView=_tintView;
@property(retain, nonatomic) UIToolbar *blurBackgroundView; // @synthesize blurBackgroundView=_blurBackgroundView;
@property(retain, nonatomic) SCProfilePictureController *profilePictureController; // @synthesize profilePictureController=_profilePictureController;
@property(retain, nonatomic) SCProfileView *profileView; // @synthesize profileView=_profileView;
@property(retain, nonatomic) UILabel *debugLowLightBoost; // @synthesize debugLowLightBoost=_debugLowLightBoost;
@property(retain, nonatomic) UILabel *debugScannerText; // @synthesize debugScannerText=_debugScannerText;
@property(retain, nonatomic) UILabel *debugScannerFrameRate; // @synthesize debugScannerFrameRate=_debugScannerFrameRate;
@property(retain, nonatomic) UIImageView *debugScannerView; // @synthesize debugScannerView=_debugScannerView;
@property(nonatomic) _Bool userTappedToFocus; // @synthesize userTappedToFocus=_userTappedToFocus;
@property(nonatomic) double currentRecordingTime; // @synthesize currentRecordingTime=_currentRecordingTime;
@property(nonatomic) double timeSettingUpCamera; // @synthesize timeSettingUpCamera=_timeSettingUpCamera;
@property(nonatomic) double timeRecordingStarted; // @synthesize timeRecordingStarted=_timeRecordingStarted;
@property(nonatomic) _Bool settingUpAudio; // @synthesize settingUpAudio=_settingUpAudio;
@property(nonatomic) _Bool settingUpCamera; // @synthesize settingUpCamera=_settingUpCamera;
@property(nonatomic) _Bool isResigningActive; // @synthesize isResigningActive=_isResigningActive;
@property(nonatomic) _Bool warnedMicDisabled; // @synthesize warnedMicDisabled=_warnedMicDisabled;
@property(nonatomic) _Bool resetCameraView; // @synthesize resetCameraView=_resetCameraView;
@property(retain, nonatomic) NSString *replyUsername; // @synthesize replyUsername=_replyUsername;
@property(nonatomic) _Bool recordedLengthTooShort; // @synthesize recordedLengthTooShort=_recordedLengthTooShort;
@property(retain, nonatomic) NSMutableDictionary *replyParameters; // @synthesize replyParameters=_replyParameters;
@property(nonatomic) long long replyCameraType; // @synthesize replyCameraType=_replyCameraType;
@property(retain, nonatomic) UIView *privacyView; // @synthesize privacyView=_privacyView;
@property(nonatomic) _Bool pressingCameraButton; // @synthesize pressingCameraButton=_pressingCameraButton;
@property(retain, nonatomic) UIView *helpScreen; // @synthesize helpScreen=_helpScreen;
@property(nonatomic) _Bool triedToCaptureImage; // @synthesize triedToCaptureImage=_triedToCaptureImage;
@property(nonatomic) _Bool cameraError; // @synthesize cameraError=_cameraError;
@property(nonatomic) double brightness; // @synthesize brightness=_brightness;
@property(nonatomic) _Bool audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property(nonatomic) _Bool askingAudioPermissions; // @synthesize askingAudioPermissions=_askingAudioPermissions;
@property(nonatomic) unsigned long long appearanceState; // @synthesize appearanceState=_appearanceState;
@property(nonatomic) _Bool deprecateNavigationTransitioning; // @synthesize deprecateNavigationTransitioning=_deprecateNavigationTransitioning;
@property(nonatomic) int numShowScanTooltip; // @synthesize numShowScanTooltip=_numShowScanTooltip;
@property(retain, nonatomic) SnapTrophyMetrics *snapTrophyMetrics; // @synthesize snapTrophyMetrics=_snapTrophyMetrics;
@property(nonatomic) __weak id <SCStartChatDelegate> startChatDelegate; // @synthesize startChatDelegate=_startChatDelegate;
@property(nonatomic) __weak id <SendSnapNavigationControllerDelegate> sendSnapNavigationControllerDelegate; // @synthesize sendSnapNavigationControllerDelegate=_sendSnapNavigationControllerDelegate;
@property(retain, nonatomic) SCCameraOverlayView *cameraOverlay; // @synthesize cameraOverlay=_cameraOverlay;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIButton *logoutButton; // @synthesize logoutButton=_logoutButton;
@property(nonatomic) _Bool initiatedRecording; // @synthesize initiatedRecording=_initiatedRecording;
@property(nonatomic) _Bool firstLogin; // @synthesize firstLogin=_firstLogin;
@property(nonatomic) double initialCaptionVertical; // @synthesize initialCaptionVertical=_initialCaptionVertical;
@property(copy, nonatomic) NSString *captionText; // @synthesize captionText=_captionText;
@property(retain, nonatomic) UIView *cameraView; // @synthesize cameraView=_cameraView;
@property(nonatomic) __weak id <NavigationDelegate> navigationDelegate; // @synthesize navigationDelegate=_navigationDelegate;
@property(nonatomic) __weak id <SwipeViewParentDelegate> parentDelegate; // @synthesize parentDelegate=_parentDelegate;
@property(nonatomic) __weak id <AVCameraViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateVerticalScrollViewContentInset;
- (void)galleryOnboardingManagerDidUpdateGalleryEnabled:(id)arg1;
- (void)galleryOnboardingManagerDidUpdateGalleryInvited:(id)arg1;
- (void)presentActivityViewController:(id)arg1 shareUsernameController:(id)arg2;
- (id)getAddSourceTypeForFriend:(id)arg1 controller:(id)arg2;
- (id)userSession;
- (void)didPressSnapButtonForFriend:(id)arg1 controller:(id)arg2;
- (void)didPressChatButtonForFriend:(id)arg1 controller:(id)arg2;
- (void)_presentMiniProfile:(id)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)scanResultViewControllerDidDismiss:(id)arg1 dismissType:(unsigned long long)arg2;
- (_Bool)isPresentingScanResultsViewController;
- (void)_dismissCameraCardViewControllerWithDismissType:(unsigned long long)arg1;
- (void)_handleScanResults:(id)arg1;
- (void)_handleAddFriendDeepLink:(id)arg1;
- (id)deepLinkableViewController:(id)arg1;
- (id)exceptionalMethodsContexts;
- (id)excludedProfiledSelectorNames;
- (id)preferredProfiledSelectorNames;
- (void)didPostStoryWithoutSendingSnap;
- (void)didSaveSnapWithParameters:(id)arg1;
- (void)didSendChatMessage;
- (void)didSendDiscoverSharedMessageWithParameters:(id)arg1;
- (void)didSendSnap:(id)arg1;
- (void)didSendToGallery;
- (void)didComeFromCameraWithoutSendingSnap;
- (void)didCancelFromPreview:(id)arg1;
- (void)shareImages:(id)arg1 SCSharedSnapcodeView:(id)arg2;
- (_Bool)shouldEnableSnapcodeButton;
- (void)captureProfileImages;
- (void)closeSnapCodeCamera;
- (void)resetProfileView;
- (void)resetForTakingProfileImages:(unsigned long long)arg1;
- (void)endTakingProfilePictures:(unsigned long long)arg1;
- (void)tryCapturingProfileImages;
- (void)prepareForTakingProfileImages;
- (void)managedCapturer:(id)arg1 didBeginAudioRecording:(id)arg2 session:(unsigned int)arg3;
- (void)managedCapturer:(id)arg1 didFinishRecording:(id)arg2 session:(unsigned int)arg3 fileURL:(id)arg4;
- (void)managedCapturer:(id)arg1 didCancelRecording:(id)arg2 session:(unsigned int)arg3;
- (void)managedCapturer:(id)arg1 didFailRecording:(id)arg2 session:(unsigned int)arg3 error:(id)arg4;
- (void)_handleFailedRecording:(id)arg1;
- (_Bool)_cleanupRecording;
- (_Bool)_tryCapturingWhenRecordingTooShort;
- (void)managedCapturer:(id)arg1 didChangeNightModeActive:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeLowLightCondition:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeFlashActive:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeCaptureDevicePosition:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeFlashSupportedAndTorchSupported:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeState:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeLensesActive:(id)arg2;
- (void)shareUsernameButtonPressed;
- (void)snapcodeHelpButtonPressed;
- (void)trophyButtonPressed;
- (void)snapCodeButtonPressed;
- (void)openSnapCodeCamera;
- (void)setCanFlipCamera:(_Bool)arg1;
- (void)displayNamePressed;
- (void)setProfileScrollViewOffsetToHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setVerticalScrollViewOffsetToHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)hideProfileButtonPressed;
- (void)settingsButtonPressed;
- (void)createEditDisplayNameAlertView:(id)arg1;
- (id)_getDisplayName:(id)arg1 lastName:(id)arg2;
- (void)_initalDisplayName:(id)arg1;
- (void)profileDidShow;
- (void)profileHidden;
- (void)taskForDismiss:(long long)arg1 actionAtIndex:(long long)arg2;
- (void)cameraSetupAfterStart;
- (void)resetFocusAndExposureToDefaultsIfNecessary;
- (void)resetEffectiveScale;
- (void)stopCameraSoftly;
- (void)stopCameraSoftlyAfter:(double)arg1 completion:(CDUnknownBlockType)arg2;
- (double)disableCameraDelayWithLowPowerMode;
- (void)startCamera;
- (void)stopDeviceMotionUpdates;
- (void)startDeviceMotionUpdates;
- (void)pushAddFriendsView;
- (void)pushAddedMeView;
- (void)myFriendsButtonPressed;
- (void)addFriendsButtonPressedFromQuickAction:(long long)arg1;
- (void)addFriendsButtonPressed;
- (void)recentFriendsButtonPressed;
- (void)scrollViewDidScroll:(id)arg1;
- (void)_verticalScrollViewUpdatesWhenScroll;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)_determineGalleryViewAppearanceWhenDidScroll;
- (void)_determineGalleryViewAppearanceWhenDidEndDragging;
- (void)didPressGalleryReturnButton:(id)arg1;
- (_Bool)galleryViewVisible;
- (_Bool)profileViewVisible;
- (double)cameraPercentVisible;
- (double)galleryPercentVisible;
- (double)profilePercentVisible;
- (void)logOnPageExit:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)handleTapFrom:(id)arg1;
- (double)_beginningScaleFromZoomFactor:(double)arg1;
- (double)_finalEffectiveScale;
- (double)scaleChangeForVelocity:(struct CGPoint)arg1;
- (double)scaleChangeForLocation:(struct CGPoint)arg1 fromTranslation:(struct CGPoint)arg2;
- (void)setPanGestureRecognizerEnabled:(_Bool)arg1;
- (void)handlePanFrom:(id)arg1;
- (void)handlePinchFrom:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)updateSavedCountsWithNewUnreadStories:(long long)arg1;
- (void)updateFeedBadgeCount;
- (void)updateSavedCountsWithUnreadMessageCount:(long long)arg1 hasUnviewedSnaps:(_Bool)arg2 hasUnviewedCash:(_Bool)arg3 hasUnviewedChats:(_Bool)arg4;
- (void)resetCount;
- (void)resetCountFromFetchUpdates:(id)arg1;
- (void)refreshCount;
- (void)checkNewFriendCount;
- (void)resetStoryBadgeCount;
- (void)refreshFeedBadgeCount;
- (void)resetFeedBadgeCount;
- (void)initializeCount;
- (_Bool)interactingWithCamera;
- (_Bool)shouldRecognizeButtonActions;
- (void)cameraOverlayXButtonPressed;
- (void)replyBackButtonLeftPressed;
- (void)feedPressed;
- (void)galleryIconDidPress:(id)arg1;
- (void)friendPressed;
- (void)profileButtonPressed;
- (void)_flipNightModeActiveness;
- (void)nightModeButtonPressed;
- (_Bool)areLensesSupported;
- (void)turnLensesOn:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)turnLensesOn:(_Bool)arg1;
- (void)showLensesActivationTooltipIfNecessary;
- (struct CGRect)convertCameraTimerRectToView:(id)arg1;
- (void)showCameraTimer;
- (void)hideCameraTimer;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)presentImagePicker;
- (void)showPhotoAccessDeniedAlert;
- (void)galleryButtonPressed;
- (void)volumeButtonHandlerDidEndPressingVolumeButton:(id)arg1;
- (void)volumeButtonHandlerDidBeginPressingVolumeButton:(id)arg1;
- (void)abortPressingVolumeButtonAndEndRecording;
- (_Bool)shouldHandleVolumeButtonEvents;
- (void)stopHandlingVolumeButtonEvents;
- (void)startHandlingVolumeButtonEvents;
- (void)flashPressed;
- (void)toggleCameraWithCompletion:(CDUnknownBlockType)arg1;
- (void)frontCameraButtonPressed;
- (_Bool)tryCapturingStillImage;
- (void)endRecording:(_Bool)arg1;
- (void)endRecording;
- (void)prepareForRecording;
- (void)popCameraViewController;
- (void)doubleTap:(id)arg1;
- (void)stopTryingToActivateLensesWithGestureRecognizer:(id)arg1;
- (void)tryToActivateLensesWithGestureRecognizer:(id)arg1;
- (void)searchNearby;
- (void)cancelNearbySearch;
- (void)triggerDelayedNearbySearch;
- (void)longPress:(id)arg1;
- (void)longPressOnCameraTimer:(id)arg1;
- (void)logTabBarRecordingFromOtherPage:(_Bool)arg1;
- (_Bool)isPressingCameraButtonOrVolumeButton;
- (void)resetAll;
- (void)resetTimer;
- (void)resetCameraTimer;
- (void)resetButtons;
- (void)stopLensSoundIfNecessary;
- (void)startRecording;
- (void)removeActiveVideoURL:(id)arg1;
- (void)addActiveVideoURL:(id)arg1;
- (id)generateTempOutputURL;
- (void)grow:(id)arg1;
- (void)resetAfterPosting;
- (unsigned long long)lensesCount;
- (void)logOnCameraExit:(id)arg1;
- (_Bool)_isMainCameraViewAndBackFacing;
- (_Bool)_isMainCameraView;
- (unsigned long long)cameraCount;
- (void)presentPreviewForVideoWithURL:(id)arg1 frontFacingCamera:(_Bool)arg2 fromGallery:(_Bool)arg3;
- (unsigned long long)suitableVideoPlaybackQuality;
- (void)presentPreviewForVideoWithURL:(id)arg1 frontFacingCamera:(_Bool)arg2;
- (void)presentPreviewForImage:(id)arg1 metadata:(id)arg2 frontFacingCamera:(_Bool)arg3 fromGallery:(_Bool)arg4;
- (void)presentPreviewForImage:(id)arg1 metadata:(id)arg2 frontFacingCamera:(_Bool)arg3;
- (_Bool)isPresentingPreviewViewController;
- (long long)snapSource;
- (void)showRecordedVideoIfNecessary;
- (void)discardRecordedVideoIfNecessary;
- (void)viewDidBecomeActive;
- (void)viewWillResignActive;
- (void)viewWillEnterForeground;
- (void)viewDidEnterBackground;
- (void)setNoReply;
- (void)setReplyUsername:(id)arg1 type:(long long)arg2 fromPageSource:(long long)arg3 parameters:(id)arg4;
- (_Bool)isInReplyingMode;
- (void)viewDidAppearAtOffset:(double)arg1;
- (void)viewDidPartiallyAppear;
- (void)viewDidSwipeOut;
- (void)viewDidScroll;
- (void)viewDidFullyDisappear;
- (void)viewDidFullyAppear;
- (void)viewCanAppear;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (unsigned long long)supportedInterfaceOrientations;
- (void)refreshSnapcodeAndProfileImages:(id)arg1;
- (void)appStartupDidComplete;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (long long)preferredStatusBarStyle;
- (void)statusBarTapped;
- (_Bool)shouldDisplayStatusBar;
- (_Bool)canShowStatusBarOverlay;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)displayHelpIfNecessary;
- (void)displayProfileTooltipIfNecessary:(unsigned long long)arg1;
- (_Bool)isFlashOnWithCurrentConfiguration;
- (_Bool)isFlashSupportedWithCurrentConfiguration;
- (void)showCameraOptionButtons;
- (void)nightModeResetIfNeeded;
- (void)nightModeHideWithDelayIfNeeded;
- (void)resetView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)notifyUserOfRestrictedCameraIfNecessary;
- (_Bool)notifyUserOfDeniedCameraIfNecessary;
- (_Bool)notifyUserOfCameraAndMicrophoneUsageIfNecessary;
- (void)notifyUserOfMicrophoneUsageIfNecessary;
- (void)notifyUserAfterStartCameraIfNecessary;
- (void)viewDidLayoutSubviews;
- (void)setupCaptureVideoPreviewView;
- (void)_popVerticalViewsIfNeeded;
- (void)galleryViewControllerDidEndDragging:(id)arg1;
- (void)galleryViewControllerWillBeginDragging:(id)arg1;
- (void)scrollToGalleryFromCameraAnimated:(_Bool)arg1;
- (void)scrollToCameraFromGalleryAnimated:(_Bool)arg1;
- (void)unlockScrollWithKey:(id)arg1;
- (void)lockScrollWithKey:(id)arg1;
- (void)_setScrollEnabled:(_Bool)arg1;
- (void)hidePrivacyView;
- (void)showPrivacyView;
- (void)_initGallery;
- (void)_warmupGallery;
- (void)initProfileView;
- (void)hideGlassBackground:(_Bool)arg1;
- (void)galleryReturnButtonControlDidUpdate:(id)arg1;
- (void)_updateGalleryReturnButton;
- (struct CGPoint)_centerForGalleryButtonWithGalleryVisibility:(double)arg1;
- (void)_initGalleryReturnButton;
- (void)_initGalleryIcon;
- (void)loadView;
- (_Bool)compatibilityZoomingMode;
- (_Bool)logOnViewDidAppear;
- (long long)_currentPageViewState;
- (id)getPageViewName;
- (id)initWithCapturerToken:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

