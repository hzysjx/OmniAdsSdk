#
# Be sure to run `pod lib lint OmniAdsSdk.podspec' to ensure this is a
# valid spec before submitting.
#
# Any lines starting with a # are optional, but their use is encouraged
# To learn more about a Podspec see https://guides.cocoapods.org/syntax/podspec.html
#

Pod::Spec.new do |s|
  s.name             = 'OmniAdsSdk'
  s.version          = '3.8.1'
  s.summary          = 'OmniAds iOS sdk'

# This description is used to generate tags and improve search results.
#   * Think: What does it do? Why did you write it? What is the focus?
#   * Try to keep it short, snappy and to the point.
#   * Write the description between the DESC delimiters below.
#   * Finally, don't worry about the indent, CocoaPods strips it!

  s.description      = <<-DESC
TODO: Add long description of the pod here.
                       DESC

  s.homepage         = 'https://github.com/hzysjx/OmniAdsSdk'
  # s.screenshots     = 'www.example.com/screenshots_1', 'www.example.com/screenshots_2'
  s.license          = { :type => 'MIT', :file => 'LICENSE' }
  s.author           = { 'jinwanhuijiama@foxmail.com' => 'jinwanhuijiama@foxmail.com' }
  s.source           = { :git => 'https://github.com/hzysjx/OmniAdsSdk', :tag => s.version.to_s }
  # s.social_media_url = 'https://twitter.com/<TWITTER_USERNAME>'

  s.ios.deployment_target = '11.0'

  s.source_files = 'OmniAdsSdk/Classes/**/*'
  
    s.public_header_files = ['OmniAdsSdk/Classes/**/OmniAdsSDK.h', 'OmniAdsSdk/Classes/**/OmniRequest.h', 'OmniAdsSdk/Classes/**/OmniSplash.h', 'OmniAdsSdk/Classes/**/OmniInterstitial.h', 'OmniAdsSdk/Classes/**/OmniReward.h', 'OmniAdsSdk/Classes/**/OmniAdSdk.h', 'OmniAdsSdk/Classes/**/OmniBanner.h', 'OmniAdsSdk/Classes/**/OmniNativeAdView.h', 'OmniAdsSdk/Classes/**/OmniNativeAd.h', 'OmniAdsSdk/Classes/**/OmniNativeAdManager.h']
    s.vendored_libraries = 'OmniAdsSdk/Libraries/libOmniAdsSdk-iOS.a'
  
   s.frameworks = "Foundation","UIKit","MobileCoreServices","CoreGraphics","Security","SystemConfiguration","CoreTelephony","AdSupport","CoreData","StoreKit","AVFoundation","MediaPlayer","CoreMedia","WebKit","Accelerate","CoreLocation","AVKit","MessageUI","QuickLook","AudioToolBox","JavaScriptCore","CoreMotion","Photos"
  s.libraries = "z","resolv.9","sqlite3","c++","c++abi"
  s.dependency 'ToBid-iOS/GDTAdapter','4.6.83'
  s.dependency 'ToBid-iOS/BaiduAdapter','4.6.83'
  s.dependency 'ToBid-iOS/KSAdapter','4.6.83'
  s.dependency 'ToBid-iOS/TouTiaoAdapter','4.6.83'
  s.dependency 'ToBid-iOS/CSJMediationAdapter','4.6.83'
  s.dependency 'ToBid-iOS/AdScopeAdapter','4.6.83'
  s.static_framework = true
end
