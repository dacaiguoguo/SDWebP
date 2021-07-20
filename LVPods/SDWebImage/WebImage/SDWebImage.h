/*
 * This file is part of the SDWebImage package.
 * (c) Olivier Poitrey <rs@dailymotion.com>
 * (c) Florent Vilmart
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 */

#import <VendorsSet/SDWebImageCompat.h>

//! Project version number for SDWebImage.
FOUNDATION_EXPORT double SDWebImageVersionNumber;

//! Project version string for SDWebImage.
FOUNDATION_EXPORT const unsigned char SDWebImageVersionString[];

// In this header, you should import all the public headers of your framework using statements like #import <VendorsSet/PublicHeader.h>

#import <VendorsSet/SDWebImageManager.h>
#import <VendorsSet/SDWebImageCacheKeyFilter.h>
#import <VendorsSet/SDWebImageCacheSerializer.h>
#import <VendorsSet/SDImageCacheConfig.h>
#import <VendorsSet/SDImageCache.h>
#import <VendorsSet/SDMemoryCache.h>
#import <VendorsSet/SDDiskCache.h>
#import <VendorsSet/SDImageCacheDefine.h>
#import <VendorsSet/SDImageCachesManager.h>
#import <VendorsSet/UIView+WebCache.h>
#import <VendorsSet/UIImageView+WebCache.h>
#import <VendorsSet/UIImageView+HighlightedWebCache.h>
#import <VendorsSet/SDWebImageDownloaderConfig.h>
#import <VendorsSet/SDWebImageDownloaderOperation.h>
#import <VendorsSet/SDWebImageDownloaderRequestModifier.h>
#import <VendorsSet/SDWebImageDownloaderResponseModifier.h>
#import <VendorsSet/SDWebImageDownloaderDecryptor.h>
#import <VendorsSet/SDImageLoader.h>
#import <VendorsSet/SDImageLoadersManager.h>
#import <VendorsSet/UIButton+WebCache.h>
#import <VendorsSet/SDWebImagePrefetcher.h>
#import <VendorsSet/UIView+WebCacheOperation.h>
#import <VendorsSet/UIImage+Metadata.h>
#import <VendorsSet/UIImage+MultiFormat.h>
#import <VendorsSet/UIImage+MemoryCacheCost.h>
#import <VendorsSet/UIImage+ExtendedCacheData.h>
#import <VendorsSet/SDWebImageOperation.h>
#import <VendorsSet/SDWebImageDownloader.h>
#import <VendorsSet/SDWebImageTransition.h>
#import <VendorsSet/SDWebImageIndicator.h>
#import <VendorsSet/SDImageTransformer.h>
#import <VendorsSet/UIImage+Transform.h>
#import <VendorsSet/SDAnimatedImage.h>
#import <VendorsSet/SDAnimatedImageView.h>
#import <VendorsSet/SDAnimatedImageView+WebCache.h>
#import <VendorsSet/SDAnimatedImagePlayer.h>
#import <VendorsSet/SDImageCodersManager.h>
#import <VendorsSet/SDImageCoder.h>
#import <VendorsSet/SDImageAPNGCoder.h>
#import <VendorsSet/SDImageGIFCoder.h>
#import <VendorsSet/SDImageIOCoder.h>
#import <VendorsSet/SDImageFrame.h>
#import <VendorsSet/SDImageCoderHelper.h>
#import <VendorsSet/SDImageGraphics.h>
#import <VendorsSet/SDGraphicsImageRenderer.h>
#import <VendorsSet/UIImage+GIF.h>
#import <VendorsSet/UIImage+ForceDecode.h>
#import <VendorsSet/NSData+ImageContentType.h>
#import <VendorsSet/SDWebImageDefine.h>
#import <VendorsSet/SDWebImageError.h>
#import <VendorsSet/SDWebImageOptionsProcessor.h>
#import <VendorsSet/SDImageIOAnimatedCoder.h>
#import <VendorsSet/SDImageHEICCoder.h>
#import <VendorsSet/SDImageAWebPCoder.h>

// Mac
#if __has_include(<VendorsSet/NSImage+Compatibility.h>)
#import <VendorsSet/NSImage+Compatibility.h>
#endif
#if __has_include(<VendorsSet/NSButton+WebCache.h>)
#import <VendorsSet/NSButton+WebCache.h>
#endif
#if __has_include(<VendorsSet/SDAnimatedImageRep.h>)
#import <VendorsSet/SDAnimatedImageRep.h>
#endif

// MapKit
#if __has_include(<VendorsSet/MKAnnotationView+WebCache.h>)
#import <VendorsSet/MKAnnotationView+WebCache.h>
#endif
