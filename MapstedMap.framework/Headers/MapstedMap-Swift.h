#if 0
#elif defined(__arm64__) && __arm64__
// Generated by Apple Swift version 5.9 (swiftlang-5.9.0.128.108 clang-1500.0.40.1)
#ifndef MAPSTEDMAP_SWIFT_H
#define MAPSTEDMAP_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#if defined(__OBJC__)
#include <Foundation/Foundation.h>
#endif
#if defined(__cplusplus)
#include <cstdint>
#include <cstddef>
#include <cstdbool>
#include <cstring>
#include <stdlib.h>
#include <new>
#include <type_traits>
#else
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <string.h>
#endif
#if defined(__cplusplus)
#if defined(__arm64e__) && __has_include(<ptrauth.h>)
# include <ptrauth.h>
#else
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wreserved-macro-identifier"
# ifndef __ptrauth_swift_value_witness_function_pointer
#  define __ptrauth_swift_value_witness_function_pointer(x)
# endif
# ifndef __ptrauth_swift_class_method_pointer
#  define __ptrauth_swift_class_method_pointer(x)
# endif
#pragma clang diagnostic pop
#endif
#endif

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...) 
# endif
#endif
#if !defined(SWIFT_RUNTIME_NAME)
# if __has_attribute(objc_runtime_name)
#  define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
# else
#  define SWIFT_RUNTIME_NAME(X) 
# endif
#endif
#if !defined(SWIFT_COMPILE_NAME)
# if __has_attribute(swift_name)
#  define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
# else
#  define SWIFT_COMPILE_NAME(X) 
# endif
#endif
#if !defined(SWIFT_METHOD_FAMILY)
# if __has_attribute(objc_method_family)
#  define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
# else
#  define SWIFT_METHOD_FAMILY(X) 
# endif
#endif
#if !defined(SWIFT_NOESCAPE)
# if __has_attribute(noescape)
#  define SWIFT_NOESCAPE __attribute__((noescape))
# else
#  define SWIFT_NOESCAPE 
# endif
#endif
#if !defined(SWIFT_RELEASES_ARGUMENT)
# if __has_attribute(ns_consumed)
#  define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
# else
#  define SWIFT_RELEASES_ARGUMENT 
# endif
#endif
#if !defined(SWIFT_WARN_UNUSED_RESULT)
# if __has_attribute(warn_unused_result)
#  define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
# else
#  define SWIFT_WARN_UNUSED_RESULT 
# endif
#endif
#if !defined(SWIFT_NORETURN)
# if __has_attribute(noreturn)
#  define SWIFT_NORETURN __attribute__((noreturn))
# else
#  define SWIFT_NORETURN 
# endif
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA 
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA 
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA 
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif
#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif
#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER 
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility) 
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED_OBJC)
# if __has_feature(attribute_diagnose_if_objc)
#  define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
# else
#  define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
# endif
#endif
#if defined(__OBJC__)
#if !defined(IBSegueAction)
# define IBSegueAction 
#endif
#endif
#if !defined(SWIFT_EXTERN)
# if defined(__cplusplus)
#  define SWIFT_EXTERN extern "C"
# else
#  define SWIFT_EXTERN extern
# endif
#endif
#if !defined(SWIFT_CALL)
# define SWIFT_CALL __attribute__((swiftcall))
#endif
#if !defined(SWIFT_INDIRECT_RESULT)
# define SWIFT_INDIRECT_RESULT __attribute__((swift_indirect_result))
#endif
#if !defined(SWIFT_CONTEXT)
# define SWIFT_CONTEXT __attribute__((swift_context))
#endif
#if !defined(SWIFT_ERROR_RESULT)
# define SWIFT_ERROR_RESULT __attribute__((swift_error_result))
#endif
#if defined(__cplusplus)
# define SWIFT_NOEXCEPT noexcept
#else
# define SWIFT_NOEXCEPT 
#endif
#if !defined(SWIFT_C_INLINE_THUNK)
# if __has_attribute(always_inline)
# if __has_attribute(nodebug)
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline)) __attribute__((nodebug))
# else
#  define SWIFT_C_INLINE_THUNK inline __attribute__((always_inline))
# endif
# else
#  define SWIFT_C_INLINE_THUNK inline
# endif
#endif
#if defined(_WIN32)
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL __declspec(dllimport)
#endif
#else
#if !defined(SWIFT_IMPORT_STDLIB_SYMBOL)
# define SWIFT_IMPORT_STDLIB_SYMBOL 
#endif
#endif
#if defined(__OBJC__)
#if __has_feature(objc_modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import CoreFoundation;
@import Foundation;
@import MapSDK;
@import MapstedCore;
@import ObjectiveC;
@import UIKit;
#endif

#import "MN-Bridging-Header.h"

#endif
#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"
#pragma clang diagnostic ignored "-Wdollar-in-identifier-extension"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="MapstedMap",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

#if defined(__OBJC__)
@class NSCoder;

/// A special  UIView displayed as a
SWIFT_CLASS("_TtC10MapstedMap14CircleSelector")
@interface CircleSelector : UIView
- (void)drawRect:(CGRect)rect;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10MapstedMap9ImageInfo")
@interface ImageInfo : NSObject <NSCoding>
- (nonnull instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder;
- (void)encodeWithCoder:(NSCoder * _Nonnull)aCoder;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_PROTOCOL("_TtP10MapstedMap19MNContactUsDelegate_")
@protocol MNContactUsDelegate
- (void)linkPressed:(id _Nonnull)sender;
@end

@class UITouch;
@class UIEvent;

SWIFT_CLASS("_TtC10MapstedMap16MNBackgroundView")
@interface MNBackgroundView : UIView <MNContactUsDelegate>
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (void)linkPressed:(id _Nonnull)sender;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


@class NSString;

IB_DESIGNABLE
SWIFT_CLASS("_TtC10MapstedMap15MNContactUsView")
@interface MNContactUsView : UIView
@property (nonatomic, weak) IBOutlet id <MNContactUsDelegate> _Nullable delegate;
@property (nonatomic, copy) IBInspectable NSString * _Nullable nibName;
- (void)awakeFromNib;
- (void)prepareForInterfaceBuilder;
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (IBAction)linkButtonPressed:(id _Nonnull)sender;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10MapstedMap13MNMapFakeView")
@interface MNMapFakeView : UIView
- (void)touchesBegan:(NSSet<UITouch *> * _Nonnull)touches withEvent:(UIEvent * _Nullable)event;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class NTMapInteractionInfo;
@class NTMapClickInfo;

SWIFT_CLASS("_TtC10MapstedMap13MNMapListener")
@interface MNMapListener : NTMapEventListener
- (void)onMapMoved;
- (void)onMapInteraction:(NTMapInteractionInfo * _Null_unspecified)mapInteractionInfo;
- (void)onMapStable;
- (void)onMapIdle;
- (void)onMapClicked:(NTMapClickInfo * _Null_unspecified)mapClickInfo;
- (null_unspecified instancetype)initWithCptr:(void * _Null_unspecified)cptr swigOwnCObject:(BOOL)ownCObject OBJC_DESIGNATED_INITIALIZER;
- (null_unspecified instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NTVectorElementClickInfo;

SWIFT_CLASS("_TtC10MapstedMap26MNMapVectorElementListener")
@interface MNMapVectorElementListener : NTVectorElementEventListener
- (BOOL)onVectorElementClicked:(NTVectorElementClickInfo * _Null_unspecified)clickInfo SWIFT_WARN_UNUSED_RESULT;
- (null_unspecified instancetype)initWithCptr:(void * _Null_unspecified)cptr swigOwnCObject:(BOOL)ownCObject OBJC_DESIGNATED_INITIALIZER;
- (null_unspecified instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class NTVectorTileClickInfo;

SWIFT_CLASS("_TtC10MapstedMap28MNMapVectorTileEventListener")
@interface MNMapVectorTileEventListener : NTVectorTileEventListener
- (BOOL)onVectorTileClicked:(NTVectorTileClickInfo * _Null_unspecified)clickInfo SWIFT_WARN_UNUSED_RESULT;
- (null_unspecified instancetype)initWithCptr:(void * _Null_unspecified)cptr swigOwnCObject:(BOOL)ownCObject OBJC_DESIGNATED_INITIALIZER;
- (null_unspecified instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class MGLContext;

SWIFT_CLASS("_TtC10MapstedMap9MNMapView")
@interface MNMapView : NTMapView
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (null_unspecified instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithCoder:(NSCoder * _Null_unspecified)aDecoder OBJC_DESIGNATED_INITIALIZER;
@property (nonatomic, copy) NSString * _Nullable accessibilityValue;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (BOOL)accessibilityActivate SWIFT_WARN_UNUSED_RESULT;
- (void)accessibilityElementDidLoseFocus;
- (void)accessibilityElementDidBecomeFocused;
- (BOOL)accessibilityPerformMagicTap SWIFT_WARN_UNUSED_RESULT;
- (null_unspecified instancetype)initWithFrame:(CGRect)frame context:(MGLContext * _Null_unspecified)context SWIFT_UNAVAILABLE;
@end

@class UIImageView;
@class NSLayoutConstraint;
@class UILabel;
@class UITraitCollection;
@class UIButton;
@class NSNotification;
@class NSBundle;

SWIFT_CLASS("_TtC10MapstedMap19MNMapViewController")
@interface MNMapViewController : UIViewController
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified imgLogo;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified constraintLogoTopMargin;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified constraintLogoLeftMargin;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified constraintLogoHeight;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified constraintLogoWidth;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified constraintCompassIconTopMargin;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified constraintCompassIconRightMargin;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified constraintCompassIconHeight;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified constraintCompassIconWidth;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified lblCopyright;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified constraintCopyrightLabelBottom;
/// Generic map view controller constructor
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
- (void)loadView;
- (BOOL)accessibilityScroll:(UIAccessibilityScrollDirection)direction SWIFT_WARN_UNUSED_RESULT;
@property (nonatomic, copy) NSString * _Nullable accessibilityValue;
- (void)traitCollectionDidChange:(UITraitCollection * _Nullable)previousTraitCollection;
- (void)viewDidLoad;
- (void)onMapMoved;
- (void)didMoveToParentViewController:(UIViewController * _Nullable)parent;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified compassBtnTopConstraint;
@property (nonatomic, weak) IBOutlet MNMapFakeView * _Null_unspecified mapFakeView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified errorLabel;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified compassBtn;
- (IBAction)compassBtnTapped:(id _Nonnull)sender;
- (void)updateFromNotificationWithSender:(NSNotification * _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end


@class NTPackageStatus;

SWIFT_CLASS("_TtC10MapstedMap24MNPackageManagerListener")
@interface MNPackageManagerListener : NTPackageManagerListener
- (void)onPackageListUpdated;
- (void)onPackageListFailed;
- (void)onPackageUpdated:(NSString * _Null_unspecified)arg1 version:(int32_t)version;
- (void)onPackageCancelled:(NSString * _Null_unspecified)arg1 version:(int32_t)version;
- (void)onPackageFailed:(NSString * _Null_unspecified)arg1 version:(int32_t)version errorType:(NTPackageErrorType)errorType;
- (void)onPackageStatusChanged:(NSString * _Null_unspecified)arg1 version:(int32_t)version status:(NTPackageStatus * _Null_unspecified)status;
- (null_unspecified instancetype)initWithCptr:(void * _Null_unspecified)cptr swigOwnCObject:(BOOL)ownCObject OBJC_DESIGNATED_INITIALIZER;
- (null_unspecified instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10MapstedMap17MNPlottingManager")
@interface MNPlottingManager : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end



@interface MNPosition (SWIFT_EXTENSION(MapstedMap))
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@end



IB_DESIGNABLE
SWIFT_CLASS("_TtC10MapstedMap16MNVerticalButton")
@interface MNVerticalButton : UIButton
- (void)prepareForInterfaceBuilder;
- (void)layoutSubviews;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC10MapstedMap20MapPackageDownloader")
@interface MapPackageDownloader : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
- (void)observeValueForKeyPath:(NSString * _Nullable)keyPath ofObject:(id _Nullable)object change:(NSDictionary<NSKeyValueChangeKey, id> * _Nullable)change context:(void * _Nullable)context;
@end


/// This class contains all public api for map
SWIFT_CLASS("_TtC10MapstedMap13MapstedMapApi")
@interface MapstedMapApi : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


@interface MapstedMapApi (SWIFT_EXTENSION(MapstedMap)) <PropertyCompletionListener>
- (void)onCompletionWithPropertyId:(NSInteger)propertyId;
@end





@interface MapstedMapApi (SWIFT_EXTENSION(MapstedMap)) <PositionAnimationListener, PositionChangeListener, PositionVisibilityListener>
- (void)onPositionChangeWithPosition:(MNPosition * _Nonnull)position;
- (void)onPositionAnimationWithPosition:(MNPosition * _Nonnull)position animationBegins:(BOOL)animationBegins;
- (void)setPositionVisibilityWithVisible:(BOOL)visible;
@end





/// This class is not exposed outside the framework. Use internally between model & view.
/// See <code>MapstedMapApi</code> for public apis open outside framework.
SWIFT_CLASS("_TtC10MapstedMap17MapstedMapSyncApi")
@interface MapstedMapSyncApi : NSObject
SWIFT_CLASS_PROPERTY(@property (nonatomic, class, readonly, strong) MapstedMapSyncApi * _Nonnull shared;)
+ (MapstedMapSyncApi * _Nonnull)shared SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end















@interface NSUserDefaults (SWIFT_EXTENSION(MapstedMap))
@property (nonatomic, copy) NSString * _Nonnull language;
@end


SWIFT_CLASS("_TtC10MapstedMap10UserMarker")
@interface UserMarker : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


#endif
#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#if defined(__cplusplus)
#endif
#pragma clang diagnostic pop
#endif

#else
#error unsupported Swift architecture
#endif
