//
//  FontAwesomeKit.h
//  FontAwesomeKitExample

#import <Foundation/Foundation.h>

static NSString *const FAKImageAttributeRect = @"FAKImageAttributeRect";
static NSString *const FAKImageAttributeForegroundColor = @"FAKImageAttributeForegroundColor";
static NSString *const FAKImageAttributeBackgroundColor = @"FAKImageAttributeBackgroundColor";
static NSString *const FAKImageAttributeFont = @"FAKImageAttributeFont";

@interface FontAwesomeKit : NSObject

// return FontAwesome UIFont with specified size
+ (UIFont *)fontWithSize:(CGFloat)size;

// return UIImage for specified icon
+ (UIImage *)imageForIcon:(NSString *)iconChar
				imageSize:(CGSize)imageSize
				 fontSize:(CGFloat)fontSize
			   attributes:(NSDictionary *)attributes;

+ (UIImage *)linearGradientImageWithSize:(CGSize)size
							colors:(NSArray *)colors;

+ (UIImage *)linearGradientImageWithSize:(CGSize)size
							colors:(NSArray *)colors
						 locations:(NSArray *)locations;

+ (UIImage *)linearGradientImageWithSize:(CGSize)size
							colors:(NSArray *)colors
						 locations:(NSArray *)locations
						startPoint:(CGPoint)startPoint
						  endPoint:(CGPoint)endPoint;

+ (UIImage *)radialGradientImageWithSize:(CGSize)size
								  colors:(NSArray *)colors
							   locations:(NSArray *)locations
							 startCenter:(CGPoint)startCenter
							 startRadius:(CGFloat)startRadius
							   endCenter:(CGPoint)endCenter
							   endRadius:(CGFloat)endRadius;

// return all icon's macro key and unicode string
+ (NSDictionary *)allIcons;

@end

#define FAKImageSizeTabbar CGSizeMake(30, 30)

// generated marcos

#define FAKIconGlass @"\uf000"
#define FAKIconMusic @"\uf001"
#define FAKIconSearch @"\uf002"
#define FAKIconEnvelope @"\uf003"
#define FAKIconHeart @"\uf004"
#define FAKIconStar @"\uf005"
#define FAKIconStarEmpty @"\uf006"
#define FAKIconUser @"\uf007"
#define FAKIconFilm @"\uf008"
#define FAKIconThLarge @"\uf009"
#define FAKIconTh @"\uf00a"
#define FAKIconThList @"\uf00b"
#define FAKIconOk @"\uf00c"
#define FAKIconRemove @"\uf00d"
#define FAKIconZoomIn @"\uf00e"
#define FAKIconZoomOut @"\uf010"
#define FAKIconOff @"\uf011"
#define FAKIconSignal @"\uf012"
#define FAKIconCog @"\uf013"
#define FAKIconTrash @"\uf014"
#define FAKIconHome @"\uf015"
#define FAKIconFile @"\uf016"
#define FAKIconTime @"\uf017"
#define FAKIconRoad @"\uf018"
#define FAKIconDownloadAlt @"\uf019"
#define FAKIconDownload @"\uf01a"
#define FAKIconUpload @"\uf01b"
#define FAKIconInbox @"\uf01c"
#define FAKIconPlayCircle @"\uf01d"
#define FAKIconRepeat @"\uf01e"
#define FAKIconRefresh @"\uf021"
#define FAKIconListAlt @"\uf022"
#define FAKIconLock @"\uf023"
#define FAKIconFlag @"\uf024"
#define FAKIconHeadphones @"\uf025"
#define FAKIconVolumeOff @"\uf026"
#define FAKIconVolumeDown @"\uf027"
#define FAKIconVolumeUp @"\uf028"
#define FAKIconQrcode @"\uf029"
#define FAKIconBarcode @"\uf02a"
#define FAKIconTag @"\uf02b"
#define FAKIconTags @"\uf02c"
#define FAKIconBook @"\uf02d"
#define FAKIconBookmark @"\uf02e"
#define FAKIconPrint @"\uf02f"
#define FAKIconCamera @"\uf030"
#define FAKIconFont @"\uf031"
#define FAKIconBold @"\uf032"
#define FAKIconItalic @"\uf033"
#define FAKIconTextHeight @"\uf034"
#define FAKIconTextWidth @"\uf035"
#define FAKIconAlignLeft @"\uf036"
#define FAKIconAlignCenter @"\uf037"
#define FAKIconAlignRight @"\uf038"
#define FAKIconAlignJustify @"\uf039"
#define FAKIconList @"\uf03a"
#define FAKIconIndentLeft @"\uf03b"
#define FAKIconIndentRight @"\uf03c"
#define FAKIconFacetimeVideo @"\uf03d"
#define FAKIconPicture @"\uf03e"
#define FAKIconPencil @"\uf040"
#define FAKIconMapMarker @"\uf041"
#define FAKIconAdjust @"\uf042"
#define FAKIconTint @"\uf043"
#define FAKIconEdit @"\uf044"
#define FAKIconShare @"\uf045"
#define FAKIconCheck @"\uf046"
#define FAKIconMove @"\uf047"
#define FAKIconStepBackward @"\uf048"
#define FAKIconFastBackward @"\uf049"
#define FAKIconBackward @"\uf04a"
#define FAKIconPlay @"\uf04b"
#define FAKIconPause @"\uf04c"
#define FAKIconStop @"\uf04d"
#define FAKIconForward @"\uf04e"
#define FAKIconFastForward @"\uf050"
#define FAKIconStepForward @"\uf051"
#define FAKIconEject @"\uf052"
#define FAKIconChevronLeft @"\uf053"
#define FAKIconChevronRight @"\uf054"
#define FAKIconPlusSign @"\uf055"
#define FAKIconMinusSign @"\uf056"
#define FAKIconRemoveSign @"\uf057"
#define FAKIconOkSign @"\uf058"
#define FAKIconQuestionSign @"\uf059"
#define FAKIconInfoSign @"\uf05a"
#define FAKIconScreenshot @"\uf05b"
#define FAKIconRemoveCircle @"\uf05c"
#define FAKIconOkCircle @"\uf05d"
#define FAKIconBanCircle @"\uf05e"
#define FAKIconArrowLeft @"\uf060"
#define FAKIconArrowRight @"\uf061"
#define FAKIconArrowUp @"\uf062"
#define FAKIconArrowDown @"\uf063"
#define FAKIconShareAlt @"\uf064"
#define FAKIconResizeFull @"\uf065"
#define FAKIconResizeSmall @"\uf066"
#define FAKIconPlus @"\uf067"
#define FAKIconMinus @"\uf068"
#define FAKIconAsterisk @"\uf069"
#define FAKIconExclamationSign @"\uf06a"
#define FAKIconGift @"\uf06b"
#define FAKIconLeaf @"\uf06c"
#define FAKIconFire @"\uf06d"
#define FAKIconEyeOpen @"\uf06e"
#define FAKIconEyeClose @"\uf070"
#define FAKIconWarningSign @"\uf071"
#define FAKIconPlane @"\uf072"
#define FAKIconCalendar @"\uf073"
#define FAKIconRandom @"\uf074"
#define FAKIconComment @"\uf075"
#define FAKIconMagnet @"\uf076"
#define FAKIconChevronUp @"\uf077"
#define FAKIconChevronDown @"\uf078"
#define FAKIconRetweet @"\uf079"
#define FAKIconShoppingCart @"\uf07a"
#define FAKIconFolderClose @"\uf07b"
#define FAKIconFolderOpen @"\uf07c"
#define FAKIconResizeVertical @"\uf07d"
#define FAKIconResizeHorizontal @"\uf07e"
#define FAKIconBarChart @"\uf080"
#define FAKIconTwitterSign @"\uf081"
#define FAKIconFacebookSign @"\uf082"
#define FAKIconCameraRetro @"\uf083"
#define FAKIconKey @"\uf084"
#define FAKIconCogs @"\uf085"
#define FAKIconComments @"\uf086"
#define FAKIconThumbsUp @"\uf087"
#define FAKIconThumbsDown @"\uf088"
#define FAKIconStarHalf @"\uf089"
#define FAKIconHeartEmpty @"\uf08a"
#define FAKIconSignout @"\uf08b"
#define FAKIconLinkedinSign @"\uf08c"
#define FAKIconPushpin @"\uf08d"
#define FAKIconExternalLink @"\uf08e"
#define FAKIconSignin @"\uf090"
#define FAKIconTrophy @"\uf091"
#define FAKIconGithubSign @"\uf092"
#define FAKIconUploadAlt @"\uf093"
#define FAKIconLemon @"\uf094"
#define FAKIconPhone @"\uf095"
#define FAKIconCheckEmpty @"\uf096"
#define FAKIconBookmarkEmpty @"\uf097"
#define FAKIconPhoneSign @"\uf098"
#define FAKIconTwitter @"\uf099"
#define FAKIconFacebook @"\uf09a"
#define FAKIconGithub @"\uf09b"
#define FAKIconUnlock @"\uf09c"
#define FAKIconCreditCard @"\uf09d"
#define FAKIconRss @"\uf09e"
#define FAKIconHdd @"\uf0a0"
#define FAKIconBullhorn @"\uf0a1"
#define FAKIconBell @"\uf0a2"
#define FAKIconCertificate @"\uf0a3"
#define FAKIconHandRight @"\uf0a4"
#define FAKIconHandLeft @"\uf0a5"
#define FAKIconHandUp @"\uf0a6"
#define FAKIconHandDown @"\uf0a7"
#define FAKIconCircleArrowLeft @"\uf0a8"
#define FAKIconCircleArrowRight @"\uf0a9"
#define FAKIconCircleArrowUp @"\uf0aa"
#define FAKIconCircleArrowDown @"\uf0ab"
#define FAKIconGlobe @"\uf0ac"
#define FAKIconWrench @"\uf0ad"
#define FAKIconTasks @"\uf0ae"
#define FAKIconFilter @"\uf0b0"
#define FAKIconBriefcase @"\uf0b1"
#define FAKIconFullscreen @"\uf0b2"
#define FAKIconGroup @"\uf0c0"
#define FAKIconLink @"\uf0c1"
#define FAKIconCloud @"\uf0c2"
#define FAKIconBeaker @"\uf0c3"
#define FAKIconCut @"\uf0c4"
#define FAKIconCopy @"\uf0c5"
#define FAKIconPaperClip @"\uf0c6"
#define FAKIconSave @"\uf0c7"
#define FAKIconSignBlank @"\uf0c8"
#define FAKIconReorder @"\uf0c9"
#define FAKIconListUl @"\uf0ca"
#define FAKIconListOl @"\uf0cb"
#define FAKIconStrikethrough @"\uf0cc"
#define FAKIconUnderline @"\uf0cd"
#define FAKIconTable @"\uf0ce"
#define FAKIconMagic @"\uf0d0"
#define FAKIconTruck @"\uf0d1"
#define FAKIconPinterest @"\uf0d2"
#define FAKIconPinterestSign @"\uf0d3"
#define FAKIconGooglePlusSign @"\uf0d4"
#define FAKIconGooglePlus @"\uf0d5"
#define FAKIconMoney @"\uf0d6"
#define FAKIconCaretDown @"\uf0d7"
#define FAKIconCaretUp @"\uf0d8"
#define FAKIconCaretLeft @"\uf0d9"
#define FAKIconCaretRight @"\uf0da"
#define FAKIconColumns @"\uf0db"
#define FAKIconSort @"\uf0dc"
#define FAKIconSortDown @"\uf0dd"
#define FAKIconSortUp @"\uf0de"
#define FAKIconEnvelopeAlt @"\uf0e0"
#define FAKIconLinkedin @"\uf0e1"
#define FAKIconUndo @"\uf0e2"
#define FAKIconLegal @"\uf0e3"
#define FAKIconDashboard @"\uf0e4"
#define FAKIconCommentAlt @"\uf0e5"
#define FAKIconCommentsAlt @"\uf0e6"
#define FAKIconBolt @"\uf0e7"
#define FAKIconSitemap @"\uf0e8"
#define FAKIconUmbrella @"\uf0e9"
#define FAKIconPaste @"\uf0ea"
#define FAKIconLightbulb @"\uf0eb"
#define FAKIconExchange @"\uf0ec"
#define FAKIconCloudDownload @"\uf0ed"
#define FAKIconCloudUpload @"\uf0ee"
#define FAKIconUserMd @"\uf0f0"
#define FAKIconStethoscope @"\uf0f1"
#define FAKIconSuitcase @"\uf0f2"
#define FAKIconBellAlt @"\uf0f3"
#define FAKIconCoffee @"\uf0f4"
#define FAKIconFood @"\uf0f5"
#define FAKIconFileAlt @"\uf0f6"
#define FAKIconBuilding @"\uf0f7"
#define FAKIconHospital @"\uf0f8"
#define FAKIconAmbulance @"\uf0f9"
#define FAKIconMedkit @"\uf0fa"
#define FAKIconFighterJet @"\uf0fb"
#define FAKIconBeer @"\uf0fc"
#define FAKIconHSign @"\uf0fd"
#define FAKIconPlusSignAlt @"\uf0fe"
#define FAKIconDoubleAngleLeft @"\uf100"
#define FAKIconDoubleAngleRight @"\uf101"
#define FAKIconDoubleAngleUp @"\uf102"
#define FAKIconDoubleAngleDown @"\uf103"
#define FAKIconAngleLeft @"\uf104"
#define FAKIconAngleRight @"\uf105"
#define FAKIconAngleUp @"\uf106"
#define FAKIconAngleDown @"\uf107"
#define FAKIconDesktop @"\uf108"
#define FAKIconLaptop @"\uf109"
#define FAKIconTablet @"\uf10a"
#define FAKIconMobilePhone @"\uf10b"
#define FAKIconCircleBlank @"\uf10c"
#define FAKIconQuoteLeft @"\uf10d"
#define FAKIconQuoteRight @"\uf10e"
#define FAKIconSpinner @"\uf110"
#define FAKIconCircle @"\uf111"
#define FAKIconReply @"\uf112"